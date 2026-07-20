#include "BootScreen.h"
#include "../LGFX/LGFX_TDisplayS3.h"
#include "../Assets/BootLogo.h"
#include "../Core/ScreenManager.h"

BootScreen bootScreen;

void BootScreen::begin()
{
    startTime = millis();

    lcd.fillScreen(TFT_BLACK);

    lcd.setTextColor(TFT_WHITE);
    lcd.setTextSize(2);
    lcd.drawString(BOOT_TEXT, 20, 120);

    lcd.setTextSize(1);
    lcd.drawString(BOOT_SUBTEXT, 20, 150);
}

void BootScreen::update()
{
    if (millis() - startTime >= 2000)
    {
        screenManager.setScreen(ScreenType::Home);
    }
}
