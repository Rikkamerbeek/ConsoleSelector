#include "Remotecontroller.h"

#include <iostream>


Remotecontroller::Remotecontroller(iDisplay& display)
{
}

Remotecontroller::~Remotecontroller()
{
}

States HandleIdleState(Events ev);
States HandleSelectingState(Events ev);
States HandleSwitchingState(Events ev);
States HandleAddingState(Events ev);
States HandleRunningState(Events ev);