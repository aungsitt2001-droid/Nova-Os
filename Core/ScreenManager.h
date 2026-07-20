#pragma once

enum class ScreenType
{
    Boot,
    Home,
    Reader,
    Settings
};

class ScreenManager
{
public:
    void begin();
    void update();

    void setScreen(ScreenType screen);

private:
    ScreenType currentScreen = ScreenType::Boot;
};

extern ScreenManager screenManager;