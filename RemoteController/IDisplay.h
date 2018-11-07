#ifndef IDISPLAY_H
#define IDISPLAY_H

<<<<<<< HEAD
<<<<<<< HEAD
#include "iConsole.h"
=======

>>>>>>> a122e9a9af20df4ea4a67ea96fd2da4b7655cd64
=======
#include <vector>
>>>>>>> bfcbb9569c18f8539e460125b618975a22c86049

class iDisplay 
{
public:
    virtual ~iDisplay() {};

<<<<<<< HEAD
<<<<<<< HEAD
    virtual void SetConsoles(iConsole& consoles) = 0;
=======
    virtual void SetConsoles(vector<string> consoles) = 0;
>>>>>>> a122e9a9af20df4ea4a67ea96fd2da4b7655cd64
=======
    virtual void SetConsoles(const std::vector<string>& consoles) = 0;
>>>>>>> bfcbb9569c18f8539e460125b618975a22c86049
    virtual void DisplayOff() = 0;
    virtual void GetCurrentPosition(int pos) = 0;

};

#endif