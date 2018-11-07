#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <arpa/inet.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <unistd.h>

class Communication
{
public:
    Communication();
    ~Communication();

    virtual int ClientToServerConnect();
    virtual void Close(int &socketFd);
    virtual void Read(int &connectFd);
    virtual int ServerSetup();
    virtual void Write(int &socketFd, std::string message);

private:
    const uint16_t PortNumber = 1100;
};

#endif