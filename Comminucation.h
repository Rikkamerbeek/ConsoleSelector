#ifndef COMMINUCATION_H
#define COMMINUCATION_H

class Comminucation
{
public:
    Comminucation();
    ~Comminucation();

    virtual void ClientToServerConnect() = 0;
    virtual void Close() = 0;
    virtual void Read() = 0;
    virtual void ServerSetup() = 0;
    virtual void Write() = 0;

    
    
};

#endif