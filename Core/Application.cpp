#include "Application.h"
#include "ScreenManager.h"

Application app;

void Application::begin()
{
    screenManager.begin();
}

void Application::update()
{
    screenManager.update();
}
