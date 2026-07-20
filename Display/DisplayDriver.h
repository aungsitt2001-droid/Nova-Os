#pragma once

class DisplayDriver
{
public:
    bool begin();
    void update();
};

extern DisplayDriver display;
