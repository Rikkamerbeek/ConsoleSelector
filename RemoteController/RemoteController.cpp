#include "RemoteController.h"

#include <iostream>


RemoteController::RemoteController( iDisplay& display): display(display), currentState(STATE_STANDBY)
{
}

States HandleIdleState(Events ev)
{
    States result = STATE_STANDBY;
    return result;
}

States HandleSelectingState(Events ev)
{
    States result = STATE_SELECTING;
    return result;
}

States HandleSwitchingState(Events ev)
{
    States result = STATE_CHANGING;
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

void RemoteController::HandleEvent(Events ev)
{

    switch (currentState)
    {
    case STATE_STANDBY:
        currentState = HandleIdleState(ev);
        break;
    case STATE_SELECTING:
        currentState = HandleSelectingState(ev);
        break;
    case STATE_CHANGING:
        currentState = HandleSwitchingState(ev);
        break;
    case STATE_RUNNING:
        currentState = HandleRunningState(ev);
        break;
    case STATE_ADDING:
        currentState = HandleAddingState(ev);
        break;
    default:
        break;
    }
}