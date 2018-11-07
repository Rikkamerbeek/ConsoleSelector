#ifndef IEVENTGENERATOR_H
#define IEVENTGENERATOR_H

class iEventGenerator
{
public:
    virtual ~iEventGenerator();

    virtual Events GetEvent() = 0;
    
};

#endif