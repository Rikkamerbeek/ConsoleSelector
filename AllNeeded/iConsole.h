#ifndef ICONSOLE_H
#define ICONSOLE_H

#include <string>

class iConsole
{
public:
    virtual ~iConsole() {};
    
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;
    virtual int GetPos() = 0;
    virtual void SetPos() = 0;
    virtual void SetName() = 0;
    virtual std::string GetName() = 0;

};

#endif