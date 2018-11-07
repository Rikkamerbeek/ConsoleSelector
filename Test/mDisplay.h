#ifndef MDISPLAY_H
#define MDISPLAY_H

#include "IDisplay.h"

#include <gmock/gmock.h>

class mDisplay : public iDisplay
{
public:

    MOCK_METHOD0(SetConsoles(), void(Console));
    MOCK_METHOD1(DislayOff(), void());
    MOCK_METHOD2(GetCurrentPosiion(), void(int));
};

#endif