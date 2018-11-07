#ifndef IDISPLAY_H
#define IDISPLAY_H

<<<<<<< HEAD
#include "iConsole.h"
=======

>>>>>>> a122e9a9af20df4ea4a67ea96fd2da4b7655cd64

class iDisplay 
{
public:
    virtual ~iDisplay() {};

<<<<<<< HEAD
    virtual void SetConsoles(iConsole& consoles) = 0;
=======
    virtual void SetConsoles(vector<string> consoles) = 0;
>>>>>>> a122e9a9af20df4ea4a67ea96fd2da4b7655cd64
    virtual void DisplayOff() = 0;
    virtual void GetCurrentPosition(int pos) = 0;

};

#endif