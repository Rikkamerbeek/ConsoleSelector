#ifndef IDISPLAY_H
#define IDISPLAY_H

#include "../AllNeeded/iConsole.h"
#include <vector>

class iDisplay 
{
public:
    virtual ~iDisplay() {};
    virtual void SetConsoles(iConsole& consoles) = 0;
    virtual void SetConsoles(vector<string> consoles) = 0;
    virtual void SetConsoles(const std::vector<string>& consoles) = 0;
    virtual void DisplayOff() = 0;
    virtual void GetCurrentPosition(int pos) = 0;

};

#endif