#include <iostream>
#include <sys/time.h>

int main(int argc, char* argv[])
{
    double timeUse;
    struct timeval startTime, stopTime;

    gettimeofday(&startTime, NULL);

    int i = 9999;
    while(i--);

    gettimeofday(&stopTime, NULL);
    timeUse = stopTime.tv_sec - startTime.tv_sec + (stopTime.tv_usec - startTime.tv_usec)/1000000.0;

    std::cout << "Time: " << timeUse << "s" << std::endl;

    return 0;
}