#include "RemoteController.h"

#include <iostream>


RemoteController::RemoteController(iDisplay& display): display(display), currentState(STATE_STANDBY), currentConsole("Playstation")
{
}

States RemoteController::HandleIdleState(Events ev)
{
    States result = STATE_STANDBY;
    display.DisplayOff();

    switch (ev)
    {
    case EV_TOUCHEDSTANDBYSCREEN:
        //get vector<string> consoles from ConsoleSelectorApplication
        //currentConsole = vector[1];
        //return currentConsole
        result = STATE_SELECTING;
        display.SetConsole(currentConsole);
        break;
    default:
        break;
    }

    return result;
}

States RemoteController::HandleSelectingState(Events ev)
{
    States result = STATE_SELECTING;
    std::string newConsole;

    switch(ev)
    {
    case EV_SELECTCONSOLE:
        //CurrentConsole == vector[]
        //send selectedconsole to ConsoleSelector
        display.SetConsole(currentConsole);
        break;
    case EV_STARTCONSOLE:
        result = STATE_RUNNING;
        display.ShowActualConsole();
        break;
    case EV_ADDCONSOLEPRESSED:
        result = STATE_ADDING;
        newConsole = display.AddConsole();
        //send new console to console switcher
        break;
    case EV_REMOVECONSOLEPRESSED:
        //send removed console to consoleswitcher
        currentConsole = consoles.at(1);
        display.SetConsole(currentConsole);
    default:
        break;
    }
    return result;
} 

States RemoteController::HandleAddingState(Events ev)
{
    States result = STATE_SELECTING;
    //send to selector added console
    return result;
}

States RemoteController::HandleRunningState(Events ev)
{
    States result = STATE_RUNNING;
    switch (ev)
    {
    case EV_STOPCONSOLE:
        result = STATE_STANDBY;
        display.DisplayOff();
        //send standbymode to consoleswitcher
        break;

    case EV_CHANGECONSOLEPRESSED:
        result = STATE_SELECTING;
        break;
    default:
        break;
    }
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