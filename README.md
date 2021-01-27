# Simhub Arduino DisplayClientV2

Simhub Arduino Addon DisplayClientV2 project migrated from Arduino IDE to PlatformIO

**Technical debts**
- Removed Joystick lib since it is not compatible with Arduino Uno (USBCON)
- Add support to [HoodLoader2](https://github.com/NicoHood/HoodLoader2) and [HID](https://github.com/NicoHood/HID)
- Re-add Joystick library and modify it to work with the HID lib
- Currently only enabled the L298N Board
- Enable all supported boards