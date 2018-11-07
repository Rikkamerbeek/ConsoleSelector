#ifndef IDISPLAY_H
#define IDISPLAY_H



class iDisplay 
{
public:
    virtual ~iDisplay() {};

    virtual void SetConsoles(vector<string> consoles) = 0;
    virtual void DisplayOff() = 0;
    virtual void GetCurrentPosition(int pos) = 0;

};

#endif