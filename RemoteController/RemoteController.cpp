#include "RemoteController.h"

#include <iostream>


RemoteController::RemoteController(iDisplay& display): display(display), currentState(STATE_STANDBY)
{
}

States RemoteController::HandleIdleState(Events ev)
{
    States result = STATE_STANDBY;
    display.DisplayOff();

    switch (ev)
    {
    case EV_TOUCHEDSTANDBYSCREEN:
        result = STATE_SELECTING;
        //send selected device to ConsoleSelector
        break;
    default:
        break;
    }

    return result;
}

States RemoteController::HandleSelectingState(Events ev)
{
    States result = STATE_SELECTING;
    return result;
}

States RemoteController::HandleSwitchingState(Events ev)
{
    States result = STATE_CHANGING;
    return result;
} 

States RemoteController::HandleAddingState(Events ev)
{
    States result = STATE_ADDING;
    return result;
}

States RemoteController::HandleRunningState(Events ev)
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