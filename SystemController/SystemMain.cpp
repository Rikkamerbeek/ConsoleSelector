#include "SystemController.h"

int main(void)
{
    int connectFd;

    Communication* communication = new Communication();
    connectFd = communication->ServerSetup();
    while(connectFd < 0)
    {
        communication->Read(connectFd);
    }
    return 0;
}