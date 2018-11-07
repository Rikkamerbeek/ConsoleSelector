#include "Remotecontroller.h"

#include <iostream>


Remotecontroller::Remotecontroller(iDisplay& display)
{
}

Remotecontroller::~Remotecontroller()
{
}

States HandleIdleState(Events ev)
{
    States result = STATE_IDLE;
    return result;
}

States HandleSelectingState(Events ev)
{
    States result = STATE_SELECTING;
    return result;
}

States HandleSwitchingState(Events ev)
{
    States result = STATE_SWITCHING;
    return result;
} 

States HandleAddingState(Events ev)
{
    States result = STATE_ADDING;
    return result;
}

States HandleRunningState(Events ev)
{
    States result = STATE_RUNNING;
    return result;
}

void Remotecontroller::HandleEvent(Events ev)
{
    switch (currentState)
    {
    case STATE_STANDBY:
        currentstate = HandleIdleState(ev);
        break;
    case STATE_SELECTING:
        currentState = HandleSelectingState(ev);
        break;
    case STATE_CHANGING:
        currentstate = HandleSwitchingState(ev);
        break;
    case STATE_RUNNING:
        currentState = HandleRunningState(ev);
        break;
    case STATE_ADDING:
        currentstate = HandleAddingState(ev);
        break;
    default:
        break;
    }
}