#include "ScreenManager.h"
#include "../Screens/BootScreen.h"
#include "../Screens/HomeScreen.h"

ScreenManager screenManager;

void ScreenManager::begin()
{
    setScreen(ScreenType::Boot);
}

void ScreenManager::update()
{
    switch (currentScreen)
    {
    case ScreenType::Boot:
        bootScreen.update();
        break;

    case ScreenType::Home:
        homeScreen.update();
        break;

    default:
        break;
    }
}

void ScreenManager::setScreen(ScreenType screen)
{
    currentScreen = screen;

    switch (currentScreen)
    {
    case ScreenType::Boot:
        bootScreen.begin();
        break;

    case ScreenType::Home:
        homeScreen.begin();
        break;

    default:
        break;
    }
}