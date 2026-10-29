# Writing to a Weishaupt WTC

`WH11928.inc` only contains read messages. Its former 651 write messages could not work and are removed:

- their ID carried a CRC precomputed without the data, while the WTC checks a CRC over the address **and the data**
  and ignores a request with a wrong CRC;
- they were sent to the slave address of the WTC (`08`, `18`), while writes go to its **master** address
  (slave address − 5: `03` for bc1, `13` for bc2);
- they covered RAM, SFR (I/O ports), XRAM and EEPROM alike. Writing an EEPROM parameter can raise
  F51 (CRC fault heating engineer parameter) or F52 (CRC fault manufacturer parameter) and lock the burner;
  writing an SFR can switch outputs directly.

## Format (verified on a live bus, WTC 250, firmware 11.0e)

Memory read, `5000` to the slave address: `[CRC] [type] [address low]` (page 0) or
`[CRC] 06 [page] [(length-1)<<4 | type] [address low]`, with type `01` RAM, `02` EEPROM, `03` XRAM, `04` SFR.

Memory write, `5001` to the master address: `[CRC] [type] [address low] [value]` (page 0), e.g. the official
Weishaupt service tool sends `ff 13 5001 04 db 0200 ff`.

CRC: CRC-8, polynomial 0x5C, initial value = first byte after the CRC, over all following bytes
(see `diag/calculate_weishaupt_crc.py`).

## Defining a write message

This needs an ebusd version calculating the CRC at runtime (marker `[WCRC]` in the comment or attribute `wcrc`,
proposed upstream). The first ID byte is a placeholder (`00`), and the destination must be the master address:

```
w,,ByteDiagnose,[WCRC] RAM 0x000A,,03,5001,"00010A",value,,UCH,,,
```

This exact message was sent to bc1 writing back the value read before (0): value unchanged, no new fault,
F51/F52 unchanged. **This does not prove that the WTC accepts the write**: the eBUS acknowledge is sent by the
link layer before the Weishaupt CRC is checked, and the same frame with a wrong CRC (`00` instead of `5c`) was
acknowledged as well. Reads do prove the CRC check (a wrong CRC gets no answer data); for writes, only a changed
value read back would.

Only add writes for values whose meaning is known, never EEPROM parameters or SFRs without the manufacturer
documentation, and check the fault counters (`FaultCountF51`, `FaultCountF52`) and `FaultHistoryPointer` after a
first write.
