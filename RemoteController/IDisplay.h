#ifndef IDISPLAY_H
#define IDISPLAY_H


#include <string>


class iDisplay 
{
public:
    virtual ~iDisplay() {};

    virtual void SetConsole(std::string console) = 0;
    virtual void DisplayOff() = 0;
    virtual std::string GetConsole() = 0;
    virtual void ShowActualConsole() = 0;
    virtual std::string AddConsole() = 0;

};

#endif