#ifndef SYSTEMCONTROLLER_H
#define SYSTEMCONTROLLER_H

#include "iConsole.h"
#include <iEventGenerator.h>
#include <iRad.h>
#include <iSwitch.h>

class SystemController
{
public:
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