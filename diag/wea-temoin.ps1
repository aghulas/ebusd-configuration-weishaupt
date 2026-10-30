<#
.SYNOPSIS
  Témoin passif du bus eBUS par la sonde Weishaupt W-EA (WCM-Diagnose) : enregistre toutes les trames du bus,
  horodatées, dans un fichier par jour.

.DESCRIPTION
  La sonde (FTDI FT232R) parle au PC en 9600 bauds 8E2. Elle ne relaie le bus qu'après deux commandes locales
  (identification, démarrage du relais), capturées depuis WCM-Diagnose le 29/10/2026 et sans effet sur le bus.
  Ce script n'envoie QUE ces commandes (et l'arrêt du relais à la fin), jamais de trame sur le bus : les
  commandes d'émission (0d0000400000...) sont impossibles par construction.

  Sortie : <OutDir>\ebus-AAAAMMJJ.csv, une ligne par séquence d'octets entre deux SYN (aa) :
    heure locale du premier octet;octets en hexadécimal (tels que reçus, non déséchappés)
  Les SYN seuls ne sont pas écrits (compteur affiché chaque minute).

  WCM-Diagnose ne peut pas utiliser la sonde pendant que ce script tourne (port COM exclusif).

.EXAMPLE
  powershell -ExecutionPolicy Bypass -File wea-temoin.ps1 -Minutes 2
  Arrêt : Ctrl+C, ou créer le fichier <OutDir>\stop.
#>
param(
  [string]$Port = 'COM3',
  [int]$Minutes = 0,  # 0 = sans limite
  [string]$OutDir = "$env:USERPROFILE\Desktop\ebus-temoin"
)
$ErrorActionPreference = 'Stop'

# Seules commandes autorisées vers la sonde (locales, sans trame sur le bus ; validées par Remi le 29/10/2026)
$Allowed = @{
  identify = '0d00000100fa000b00000113'
  start    = '0d00000000fa015b00010164'
  stop     = '0d00000000fa015b00000163'
}

function Send-WEA([System.IO.Ports.SerialPort]$SerialPort, [string]$Name) {
  if (-not $Allowed.ContainsKey($Name)) { throw "commande refusée : $Name" }
  $hex = $Allowed[$Name]
  $bytes = New-Object byte[] ($hex.Length / 2)
  for ($i = 0; $i -lt $bytes.Length; $i++) { $bytes[$i] = [Convert]::ToByte($hex.Substring(2 * $i, 2), 16) }
  $SerialPort.Write($bytes, 0, $bytes.Length)
}

function Read-Available([System.IO.Ports.SerialPort]$SerialPort) {
  $n = $SerialPort.BytesToRead
  if ($n -le 0) { return ,(New-Object byte[] 0) }
  $buffer = New-Object byte[] $n
  $read = $SerialPort.Read($buffer, 0, $n)
  if ($read -lt $n) { $buffer = $buffer[0..($read - 1)] }
  return ,$buffer
}

function To-Hex([byte[]]$Bytes) { ($Bytes | ForEach-Object { $_.ToString('x2') }) -join '' }

New-Item -ItemType Directory -Force -Path $OutDir | Out-Null
$stopFile = Join-Path $OutDir 'stop'
Remove-Item $stopFile -ErrorAction SilentlyContinue

$sp = New-Object System.IO.Ports.SerialPort $Port, 9600, ([System.IO.Ports.Parity]::Even), 8, ([System.IO.Ports.StopBits]::Two)
$sp.Handshake = [System.IO.Ports.Handshake]::None
# même séquence que WCM-Diagnose : DTR/RTS à 1 à l'ouverture, puis à 0
$sp.DtrEnable = $true
$sp.RtsEnable = $true
$sp.Open()
Start-Sleep -Milliseconds 20
$sp.DtrEnable = $false
$sp.RtsEnable = $false
$sp.DiscardInBuffer()

$writer = $null
$day = ''
$started = $false
try {
  Send-WEA $sp 'identify'
  Start-Sleep -Milliseconds 500
  $answer = To-Hex (Read-Available $sp)
  Write-Host "identification : $answer"
  if ($answer -notmatch 'fa000b') { throw 'la sonde ne répond pas à l''identification : arrêt sans démarrer le relais' }
  Start-Sleep -Milliseconds 1000
  Send-WEA $sp 'start'
  $started = $true
  Start-Sleep -Milliseconds 1500
  Send-WEA $sp 'start'

  $deadline = if ($Minutes -gt 0) { (Get-Date).AddMinutes($Minutes) } else { [DateTime]::MaxValue }
  $current = New-Object System.Collections.Generic.List[byte]
  $currentTime = $null
  $telegrams = 0; $syn = 0; $nextStats = (Get-Date).AddMinutes(1)
  while ((Get-Date) -lt $deadline -and -not (Test-Path $stopFile)) {
    $chunk = Read-Available $sp
    if ($chunk.Length -eq 0) { Start-Sleep -Milliseconds 5; continue }
    $now = Get-Date
    foreach ($b in $chunk) {
      if ($b -eq 0xAA) {
        $syn++
        if ($current.Count -gt 0) {
          $stamp = $currentTime.ToString('yyyy-MM-ddTHH:mm:ss.fff')
          $today = $currentTime.ToString('yyyyMMdd')
          if ($today -ne $day) {
            if ($writer) { $writer.Close() }
            $writer = New-Object System.IO.StreamWriter((Join-Path $OutDir "ebus-$today.csv"), $true)
            $day = $today
          }
          $writer.WriteLine("$stamp;$(To-Hex $current.ToArray())")
          $telegrams++
          $current.Clear()
        }
      } else {
        if ($current.Count -eq 0) { $currentTime = $now }
        $current.Add($b)
      }
    }
    if ($now -ge $nextStats) {
      if ($writer) { $writer.Flush() }
      Write-Host ("{0:HH:mm:ss} trames {1}, SYN {2}" -f $now, $telegrams, $syn)
      $nextStats = $now.AddMinutes(1)
    }
  }
} finally {
  if ($started) { try { Send-WEA $sp 'stop' } catch { } }
  Start-Sleep -Milliseconds 200
  $sp.Close()
  if ($writer) { $writer.Close() }
  Write-Host 'témoin arrêté, relais de la sonde arrêté, port fermé'
}
