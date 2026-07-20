#include "Config.h"
#include "Version.h"
#include "Pins.h"
#include "LGFX/LGFX_TDisplayS3.h"

void setup()
{
  Serial.begin(115200);

  lcd.init();

  lcd.setRotation(1);
  lcd.fillScreen(TFT_BLACK);

  lcd.setTextColor(TFT_WHITE);
  lcd.setTextSize(2);
  lcd.drawString("Nova One", 20, 80);
}

void loop()
{
}