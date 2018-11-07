#include "Communication.h"

int main(void)
{
        int result;

        Communication* communication = new Communication();
        result = communication->ClientToServerConnect();
        while(result < 0)
        {
            communication->Write(result, "LOL");
            sleep(1);
        }
    return 0;
}