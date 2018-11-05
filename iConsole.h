#ifndef ICONSOLE_H
#define ICONSOLE_H

class IConsole
{
public:
    virtual ~IConsole() {};

    virtual IConsole(std::string name, int pos) = 0;
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;
    virtual int GetPos() = 0;
    virtual std::string GetName() = 0;

private:
    virtual std::string name;
    virtual int pos;
};