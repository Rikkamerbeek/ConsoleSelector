#ifndef ISWITCH_H
#define ISWITCH_H

class iSwitch
{
public:
    virtual ~iSwitch();

    virtual void SetSwitch(int port) = 0;
    
};

#endif