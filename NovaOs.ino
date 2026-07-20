#include "Config.h"
#include "Version.h"
#include "Pins.h"

#include "LGFX/LGFX_TDisplayS3.h"
#include "Screens/BootScreen.h"

void setup()
{
    Serial.begin(115200);

    lcd.init();
    pinMode(TFT_BL, OUTPUT);
    digitalWrite(TFT_BL, HIGH);
    lcd.setRotation(1);

    bootScreen.begin();
}

void loop()
{
    bootScreen.update();
}
