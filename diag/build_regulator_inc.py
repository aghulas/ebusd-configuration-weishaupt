#!/usr/bin/env python3
"""Build weishaupt/regulator.active.inc and weishaupt/regulator.passive.inc from weishaupt/register.inc.

Usage: build_regulator_inc.py

register.inc defines the regulator registers (KA, EM, FS, SC) with the local commands 0902 (read) and 0903 (write),
without CRC. Active access from ebusd or Home Assistant must use the remote commands 5022/5023 with the Weishaupt
CRC calculated at runtime, at the same register addresses; 0902/0903 are kept for listening to what the devices
exchange:
- regulator.active.inc: every read as 5022 and every write as 5023, ID "00 register bank" with the [WCRC] marker, same
  names as register.inc. Reads of several registers (contiguous or chained) become a single 5022 list (up to 4
  registers). Chained writes are left out: the regulators acknowledge a multi-register 5023 too late for the eBUS
  timing, ebusd rejects a chain whose IDs start with the CRC placeholder, and register.inc already defines every
  single register (e.g. the time program slots ...Mo.1, ...Mo.2, ...Mo.3).
- regulator.passive.inc: one passive message per register with the same name, to decode the telegrams of the other
  masters: a passive 0903 write when the register has a write, otherwise a passive 0902 read. In ebusd a passive
  read and a passive write share the same name key, so a register cannot have both; on the school's bus this rule
  decodes all the regular traffic (FS -> EM writes of settings, FS reads of measurements), only service tool reads
  of writable registers stay unknown. Chained messages are left out (ebusd has no chained passive messages).
Requires ebusd with the runtime CRC ([WCRC] marker).
"""
import csv
import io
from pathlib import Path

WEISHAUPT = Path(__file__).resolve().parent.parent / "weishaupt"
HEADER = ("# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,"
          "divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment")
MAX_READ_REGISTERS = 4


def active_read_id(ident: str) -> str:
    """5022 ID (list of registers) for a 0902 read ID "RRBBLL" (register, bank, length in bytes) or a chain of them."""
    registers = []
    for part in ident.replace(" ", "").split(";"):
        register, bank, length = int(part[0:2], 16), part[2:4], int(part[4:6], 16)
        registers += [f"{register + i:02X}{bank}" for i in range(max(1, length // 2))]
    if len(registers) > MAX_READ_REGISTERS:
        raise ValueError(f"read of {len(registers)} registers: {ident}")
    return "00" + "".join(registers)


def active_write_id(ident: str) -> str:
    """5023 ID for a 0903 write ID "RRBB" (one register per telegram)."""
    return "00" + ident


def comment(text: str) -> str:
    text = text.strip()
    return f"[WCRC] {text}" if text else "[WCRC]"


def build():
    rows = list(csv.reader(io.StringIO((WEISHAUPT / "register.inc").read_text(encoding="utf-8"))))
    active = [HEADER, '*r,,,,,,"5022",,,,,,,', '*w,,,,,,"5023",,,,,,,', ""]
    passive = [HEADER, '*u,,,,,,"0902",,,,,,,', '*uw,,,,,,"0903",,,,,,,', ""]
    written = {row[7].strip('"').upper() for row in rows
               if row and row[0] == "w" and ";" not in row[7]}
    counts = {"r": 0, "w": 0, "u": 0, "uw": 0}
    skipped = 0

    def line(row):
        out = io.StringIO()
        csv.writer(out, lineterminator="").writerow(row)
        return out.getvalue()

    for row in rows:
        if not row or row[0].startswith("#") or row[0].startswith("*"):
            continue
        kind = row[0]
        ident = row[7].strip('"').upper()
        chained = ";" in ident
        if kind == "r":
            new = list(row)
            new[3], new[7] = comment(row[3]), active_read_id(ident)
            active.append(line(new))
            counts["r"] += 1
            if chained or ident[:4] in written:
                continue  # no chained passive messages; writable registers are listened to as writes
            listen = list(row)
            listen[0] = "u"
            passive.append(line(listen))
            counts["u"] += 1
        elif kind == "w":
            if chained:
                skipped += 1  # one register per 5023 telegram: the single slots (e.g. ...Mo.1) are kept
                continue
            new = list(row)
            new[3], new[7] = comment(row[3]), active_write_id(ident)
            active.append(line(new))
            counts["w"] += 1
            listen = list(row)
            listen[0] = "uw"
            passive.append(line(listen))
            counts["uw"] += 1
    (WEISHAUPT / "regulator.active.inc").write_text("\n".join(active) + "\n", encoding="utf-8")
    (WEISHAUPT / "regulator.passive.inc").write_text("\n".join(passive) + "\n", encoding="utf-8")
    print(f"regulator.active.inc: {counts['r']} reads (5022), {counts['w']} writes (5023), "
          f"{skipped} chained writes left out")
    print(f"regulator.passive.inc: {counts['u']} passive reads (0902), {counts['uw']} passive writes (0903)")


if __name__ == "__main__":
    build()
