#ifndef IDISPLAY_H
#define IDISPLAY_H

#include "iConsole.h"

class iDisplay 
{
public:
    virtual ~iDisplay() {};

    virtual void SetConsoles(iConsole& consoles) = 0;
    virtual void DisplayOff() = 0;
    virtual void GetCurrentPosition(int pos) = 0;

};

#endif