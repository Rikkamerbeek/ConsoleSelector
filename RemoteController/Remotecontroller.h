#ifndef REMOTECONTROLLER_H
#define REMOTECONTROLLER_H

#include <vector>
#include <string>

#include "iDisplay.h"
#include "../AllNeeded/Events.h"
#include "../AllNeeded/States.h"

class RemoteController
{
public:
    RemoteController(iDisplay& display);
    ~RemoteController() {}; 


    void HandleEvent(Events ev);

    States HandleIdleState(Events ev);
    States HandleSelectingState(Events ev);
    States HandleSwitchingState(Events ev);
    States HandleAddingState(Events ev);
    States HandleRunningState(Events ev);

private:
    iDisplay& display;
    States currentState;
    std::string currentConsole;
    std::vector<std::string> consoles;
};

#endif