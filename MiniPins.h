//
// MiniPins.h
//
// Provides definitions for each of the pins on the popular "mini"
// modules. The intention is to make it a little easier to program
// projects without concern for the board used, where possible.
//
// The pin names used here come from some variants of the original
// WeMos LOLIN D1 board, and are used on things like prototyping
// shields and doubler/tripler bases.
//
// Not all boards compatible with this form factor use these names;
// many use GPIO pin numbers instead.
//
// Looking down on the top of a board, the pin names are:
//
//    RST             TX
//    A0              RX
//    D0              D1
//    D5              D2
//    D6              D3
//    D7              D4
//    D8              GND
//    3V3             5V
//
#pragma once

#if defined(ARDUINO_ESP8266_WEMOS_D1MINI)
  //
  // Original WeMos LOLIN D1 mini board.
  //
  // See https://www.espboards.dev/esp8266/d1-mini/
  //
  // Arduino core: LOLIN(WEMOS) D1 R2 & mini
  //
  // The Arduino core for this board defines constants
  // (static const uint8_t) for mini pins D0 through D8
  // as well as for the conventional pins for RX, TX, SDA, SCL,
  // SCK, MOSI and MISO.
  //
  #define MINI_D0 D0
  #define MINI_D1 D1
  #define MINI_D2 D2
  #define MINI_D3 D3
  #define MINI_D4 D4
  #define MINI_D5 D5
  #define MINI_D6 D6
  #define MINI_D7 D7
  #define MINI_D8 D8
  #define MINI_TX TX
  #define MINI_RX RX
#endif

#if defined(ARDUINO_LOLIN_S2_MINI)
  //
  // WeMos LOLIN S2 mini board.
  //
  // See: https://www.espboards.dev/esp32/lolin-s2-mini/
  //
  // Arduino core: LOLIN S2 Mini
  //
  static const uint8_t MINI_D0 = 5;
  static const uint8_t MINI_D1 = 35;
  static const uint8_t MINI_D2 = 33;
  static const uint8_t MINI_D3 = 18;
  static const uint8_t MINI_D4 = 16;
  static const uint8_t MINI_D5 = 7;
  static const uint8_t MINI_D6 = 9;
  static const uint8_t MINI_D7 = 11;
  static const uint8_t MINI_D8 = 12;
  #define MINI_TX TX
  #define MINI_RX RX
#endif

#if defined(ARDUINO_D1_MINI32)
  //
  // WeMos D1 Mini ESP32
  //
  // See https://www.espboards.dev/esp32/d1-mini32/
  //
  // Arduino core: WEMOS D1 MINI ESP32 (d1_mini32)
  //
  // The Arduino core for this board defines constants
  // (static const uint8_t) for mini pins D0 through D8
  // as well as for the conventional pins for RX, TX, SDA, SCL,
  // SCK, MOSI and MISO.
  //
  // The specific clone of this board that I own has
  // reversed the TX and RX pins. That is NOT reflected
  // below.
  //
  #define MINI_D0 D0
  #define MINI_D1 D1
  #define MINI_D2 D2
  #define MINI_D3 D3
  #define MINI_D4 D4
  #define MINI_D5 D5
  #define MINI_D6 D6
  #define MINI_D7 D7
  #define MINI_D8 D8
  #define MINI_TX TX
  #define MINI_RX RX
#endif
