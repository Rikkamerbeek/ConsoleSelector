#ifndef IDISPLAY_H
#define IDISPLAY_H

#include "IConsole.h"

class iDisplay 
{
public:
    virtual ~iDisplay() {};

    virtual void SetConsoles(Console consoles) = 0;
    virtual void DisplayOff() = 0;
    virtual void GetCurrentPosition(int pos) = 0;

};

#endif