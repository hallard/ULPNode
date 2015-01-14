@ECHO OFF
REM Atmega pin mapping to Arduino pin name, for reminder
REM ====================================================
REM AT -> Arduino
REM C5 -> A5
REM C4 -> A4
REM C3 -> A3
REM C2 -> A2
REM C1 -> A1
REM C0 -> A0
REM B5 -> D13
REM B4 -> D12
REM B3 -> D11
REM B2 -> D10
REM B1 -> D9
REM B0 -> D8
REM D7 -> D7
REM D6 -> D6
REM D5 -> D5
REM D3 -> D3
REM D2 -> D2

REM let's compile a target for 16MHz 115200 kbps just for use as arduino Uno compatibility
REM without using any power pins or booster, this should work on all Arduino Boards
REM SET AVR_FREQ=AVR_FREQ=16000000
REM SET BAUD_RATE=BAUD_RATE=115200

REM Arduino classic LED pin on Arduino
REM SET LED=LED=B5
REM SET LED_START_FLASHES=LED_START_FLASHES=1

REM Compilation call for ULPNode working as Uno 16MHz 115200 kbps
REM @ECHO ON
REM ..\..\..\tools\avr\utils\bin\make OS=windows ENV=arduino %AVR_FREQ% %BAUD_RATE% %LED_START_FLASHES% %LED% ulpnode %*
REM @ECHO OFF

REM Reset env variable that could not be used in 2nd build
SET LED=
SET LED_START_FLASHES=

REM let's compile for a real ULPNode target 8MHz 250000 kbps
SET AVR_FREQ=AVR_FREQ=8000000
SET BAUD_RATE=BAUD_RATE=250000

REM Arduino classic LED pin on ULPNode Arduino D5
SET LED=LED=D5

REM WS2812B Data In avr pin Arduino D6
SET WS2812=WS2812=D6

REM Number of flash when entering bootloader
SET LED_START_FLASHES=LED_START_FLASHES=3

REM Wake up switch avr pin Arduino D4
SET WAKE_SWITCH=WAKE_SWITCH=D4

REM power sensor avr pin Arduino D9
SET PWR_SENSOR=PWR_SENSOR=B1

REM power RF Radio module avr pin Arduino D7
SET PWR_RF=PWR_RF=D7

REM booster enable avr pin Arduino A2
SET PWR_BOOST=PWR_BOOST=C2


REM Arduinode V1.3
REM Number of flash when entering bootloader
REM SET LED_START_FLASHES=LED_START_FLASHES=1
REM booster enable -> I2C Power
REM SET PWR_BOOST=PWR_BOOST=D7
REM SET PWR_BOOST=
REM power sensor avr pin A2
REM SET PWR_SENSOR=PWR_SENSOR=C2
REM power RF Radio module avr D9
REM SET PWR_RF=PWR_RF=B1
REM Arduino classic LED pin D6
REM SET LED=LED=D6
REM Wake up switch avr pin  D3
REM SET WAKE_SWITCH=WAKE_SWITCH=D3
REM WS2812B Data In avr pin D4
REM SET WS2812=


REM Compilation call for ULPNode
@ECHO ON
..\..\..\tools\avr\utils\bin\make OS=windows ENV=arduino %AVR_FREQ% %BAUD_RATE% %LED% %LED_START_FLASHES% %WS2812% %WAKE_SWITCH% %PWR_SENSOR% %PWR_BOOST% %PWR_RF% ulpnode %*
@ECHO OFF


REM Reset env variable
SET AVR_FREQ=
SET BAUD_RATE=
SET LED=
SET WS2812=
SET LED_START_FLASHES=
SET WAKE_SWITCH=
SET PWR_SENSOR=
SET PWR_RF=
SET PWR_BOOST=


