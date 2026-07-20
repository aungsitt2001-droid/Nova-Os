#include "HomeScreen.h"
#include "../LGFX/LGFX_TDisplayS3.h"

HomeScreen homeScreen;

void HomeScreen::begin()
{
    lcd.fillScreen(TFT_BLACK);

    lcd.setTextColor(TFT_WHITE);
    lcd.setTextSize(2);
    lcd.drawString("Home", 20, 20);
}

void HomeScreen::update()
{
}