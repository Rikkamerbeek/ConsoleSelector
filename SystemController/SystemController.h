#ifndef SYSTEMCONTROLLER_H
#define SYSTEMCONTROLLER_H

<<<<<<< HEAD
#include "IEventGenerator.h"
#include "IRad.h"
#include "ISwitch.h"
=======
#include "iConsole.h"
#include <iEventGenerator.h>
#include <iRad.h>
#include <iSwitch.h>
>>>>>>> a122e9a9af20df4ea4a67ea96fd2da4b7655cd64

class SystemController
{
public:
<<<<<<< HEAD
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
=======
    SystemController(iMotor& motor, iSwitch switch);
    ~SystemController();
    
    void MoveToConsole(int currentpos, int consolepos);
    bool AddConsole(Console console);
    bool RemoveConsole(console console);
    std::Vector<Console> GetConsoles();
    int GetFirstAvaiablePos();

private:
    std::vector<Console> consoles;

};
>>>>>>> a122e9a9af20df4ea4a67ea96fd2da4b7655cd64
