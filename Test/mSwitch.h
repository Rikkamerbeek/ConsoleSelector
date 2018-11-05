#ifndef MSWITCH_H
#define MSWITCH_H

#include "iSwitch.h"

#include <gmock/gmock.h>

class mSwitch : public iSwitch
{
public:
    MOCK_METHOD0(SetSwitch(), void());
};

#endif