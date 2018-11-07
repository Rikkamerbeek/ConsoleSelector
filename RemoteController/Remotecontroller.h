#ifndef REMOTECONTROLLER_H
#define REMOTECONTROLLER_H

#include "iDisplay.h"
#include "Events.h"

class Remotecontroller
{
public:
    Remotecontroller(iDisplay& display);
    ~Remotecontroller() {}; 

    void SendAction(Events event);





};