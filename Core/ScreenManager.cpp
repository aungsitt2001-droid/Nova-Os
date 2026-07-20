#include "ScreenManager.h"
#include "../Screens/BootScreen.h"

ScreenManager screenManager;

void ScreenManager::begin()
{
    bootScreen.begin();
}

void ScreenManager::update()
{
    bootScreen.update();
}