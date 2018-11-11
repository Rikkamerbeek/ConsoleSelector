#ifndef SYSTEMCONTROLLER_H
#define SYSTEMCONTROLLER_H

#include "../AllNeeded/Communication.h"
#include "../AllNeeded/iConsole.h"
#include "interfaces/iSwitch.h"
#include "interfaces/iEventGenerator.h"
#include "interfaces/iRad.h"

#include <vector>
#include <string>



class SystemController
{
public:
    SystemController(iRad& motor, iSwitch& switcher);
    ~SystemController();
    
    void MoveToConsole(int currentpos, int consolepos);
    //bool AddConsole(iConsole& console);
    //bool RemoveConsole(iConsole& console);
    //std::vector<iConsole&> GetConsoles();
    int GetFirstAvaiablePos();

private:
    iRad& motor;
    iSwitch& switcher;
    //iConsole& console;
    //std::vector<iConsole&> consoles;

};

#endif
