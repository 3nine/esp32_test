#include <Arduiono.h>
#include <U8g2lib.h>
#include <AdaFruit_NeoPixel.h>

#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

/* Eingabe der #include für die Funktionen */

U8G2_SSD1306_128X64_NONME_F_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);

AdaFruit_NeoPixel pixels(1, 14, NEO_GRB + NEO_KHZ800);

const unsigned har* bitmap_icons[6] = {
  bitmap_icon_scanner,
  bitmap_icon_analyzer,
  bitmap_icon_ble_jammer,
  bitmap_icon_spoofer
  bitmap_icon_bout
};

const int NUM_ITEMS = 5;
const int MAX_ITEM_LENGTH = 20;

char menu_items [NUM_ITEMS] [MAX_ITEM_LENGTH] = {
  { "Scanner" }
  { "Analyzer" }
  { "BLE Jammer" }
  { "BLE Spoofer" }
  { "About" }
};
