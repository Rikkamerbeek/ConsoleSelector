#ifndef ICONSOLE_H
#define ICONSOLE_H

class IConsole
{
public:
    virtual ~IConsole() {};
    
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;
    virtual int GetPos() = 0;
    virtual void SetPos() = 0;
    virtual void SetName() = 0;
    virtual std::string GetName() = 0;
};

<<<<<<< HEAD:iConsole.h
=======
private:
    virtual std::string name;
    virtual int pos;
};

>>>>>>> a122e9a9af20df4ea4a67ea96fd2da4b7655cd64:AllNeeded/iConsole.h
#endif