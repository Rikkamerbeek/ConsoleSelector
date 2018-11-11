#ifndef IRAD_H
#define IRAD_H

class iRad
{
public:
    virtual ~iRad();

    virtual int GetPosition() = 0;
    virtual void TurnLeft() = 0;
    virtual void TurnRight() = 0;
    virtual void stop() = 0;
    
};

#endif