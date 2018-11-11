#include "Communication.h"

Communication::Communication()
{

}
Communication::~Communication(){

}

int Communication::ClientToServerConnect()
{
	    int socketFd = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);

		if (socketFd == -1)
	    {
	        perror("cannot create socket");
	        exit(EXIT_FAILURE);
	    }

	    struct sockaddr_in sa;
	    memset(&sa, 0, sizeof sa);
	    sa.sin_family = AF_INET;
	    sa.sin_port = htons(PortNumber);

	    int result = inet_pton(AF_INET, "127.0.0.1", &sa.sin_addr);
	    if (result != 1)
	    {
	        perror("could not convert ip address to network address structure");
	        exit(EXIT_FAILURE);
	    }
	    else
	    {
	        result = connect(socketFd, (struct sockaddr*)&sa, sizeof sa);
	        //connected = true;
	        std::cout << result;
	        if (result < 0)
	        {
	            perror("connect failed");
	            close(socketFd);
	            exit(EXIT_FAILURE);
	        }
	    }
        return result;
}

void Communication::Close(int &socketFd)
{
    if (shutdown(socketFd, SHUT_RDWR) < 0)
    {
        perror("shutdown failed");
        close(socketFd);
        exit(EXIT_FAILURE);
    }
    close(socketFd);
    //connected = false;
}

void Communication::Read(int &connectFd)
{
    const int BufferSize = 100;
    char buffer[BufferSize];
    std::string ack = "ACK";
    int nrBytes = read(connectFd, buffer, BufferSize - 1);
    if (nrBytes > 0)
    {
        buffer[nrBytes] = '\0';
        std::cout << "received " << nrBytes << " bytes: " << buffer << std::endl;
        //  size_t nrBytes = send(connectFd, ack.c_str(), ack.length(), 0);            
    }
    else if(nrBytes == 0)
    {
        //connecting = true;
        //close(socketFd);
    }
}

int Communication::ServerSetup()
{
        int socketFd = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
        std::cout << socketFd;
        if (socketFd < 0)
        {
            perror("cannot create socket");
            exit(EXIT_FAILURE);
        }

        struct sockaddr_in sa;
        memset(&sa, 0, sizeof sa);
        sa.sin_family = AF_INET;
        sa.sin_port = htons(PortNumber);
        sa.sin_addr.s_addr = htonl(INADDR_ANY);

        if (bind(socketFd, (struct sockaddr*)&sa, sizeof sa) < 0)
        {
            perror("bind failed");
            close(socketFd);
            exit(EXIT_FAILURE);
        }

        if (listen(socketFd, 10) < 0)
        {
            perror("listen failed");
            close(socketFd);
            exit(EXIT_FAILURE);
        }

        int connectFd = accept(socketFd, NULL, NULL);

        if (connectFd < 0)
            {
                perror("accept failed");
                close(socketFd);
                exit(EXIT_FAILURE);
            }
        std::string message;
        return connectFd;
}

void Communication::Write(int &socketFd, std::string message)
{
    bool exit = false;
    std::cout << "Welcome to the messager, type exit to leave \n";
    while(!exit)
    {
        std::cout << "your message was: " << message << std::endl;
        size_t nrBytes = send(socketFd, message.c_str(), message.length(), 0);

        if (nrBytes != message.length())
        {
            std::cout << "not everything is sent (" << nrBytes << "/" << message.length() << " bytes sent)\n";
        }

        const int BufferSize = 100;
        char buffer[BufferSize];

        int incBytes = read(socketFd, buffer, BufferSize - 1);

        if (incBytes >= 0)
        {
            buffer[incBytes] = '\0';
            std::cout << "received " << incBytes << " bytes: " << buffer << std::endl;
        }
    }
}