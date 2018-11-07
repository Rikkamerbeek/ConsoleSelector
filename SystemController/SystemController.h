#ifndef SYSTEMCONTROLLER_H
#define SYSTEMCONTROLLER_H

#include "IEventGenerator.h"
#include "IRad.h"
#include "ISwitch.h"

class SystemController
{
public:
    SystemController(IRad& rad, iSwitch switcher);
    ~SystemController();

    virtual void ClientToServerConnect() = 0;
    virtual void Close() = 0;
    virtual void Read() = 0;
    virtual void ServerSetup() = 0;
    virtual void Write() = 0;

private:
    iRad& rad;
    iEventGenerator& eventGenerator;
    iSwitch switcher;
};

#endif