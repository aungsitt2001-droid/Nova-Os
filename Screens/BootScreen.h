#pragma once

class BootScreen
{
public:
    void begin();
    void update();

private:
    unsigned long startTime = 0;
};

extern BootScreen bootScreen;
