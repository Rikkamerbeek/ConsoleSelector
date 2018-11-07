#ifndef REMOTECONTROLLER_H
#define REMOTECONTROLLER_H

#include "iDisplay.h"
#include "../AllNeeded/Events.h"
#include "../AllNeeded/States.h"

class Remotecontroller
{
public:
    Remotecontroller(iDisplay& display);
    ~Remotecontroller() {}; 


    void HandleEvent(Events ev);

    States HandleIdleState(Events ev);
    States HandleSelectingState(Events ev);
    States HandleSwitchingState(Events ev);
    States HandleAddingState(Events ev);
    States HandleRunningState(Events ev);

private:
    iDisplay& display;
    States CurrentState;
};

#endif