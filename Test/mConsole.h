#ifndef MCONSOLE_H
#define MCONSOLE_H

#include "iConsole.h"

#include <gmock/gmock.h>

class mConsole : public iConsole
{
public:
    MOCK_METHOD0(TurnOn(), void());
    MOCK_METHOD1(TurnOff(), void());
    MOCK_METHOD2(GetPos(), int());
    MOCK_METHOD3(GetName(), std::string());
};

#endif