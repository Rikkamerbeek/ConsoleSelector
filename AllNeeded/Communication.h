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

    virtual void ClientToServerConnect(int &socketFd) = 0;
    virtual void Close(int &socketFd) = 0;
    virtual void Read(int &connectFd) = 0;
    virtual void ServerSetup() = 0;
    virtual void Write(int &socketFd, std::string message) = 0;

private:
    const uint16_t PortNumber = 1100;
};

#endif