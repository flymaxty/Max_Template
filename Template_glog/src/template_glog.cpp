#include <iostream>
#include <sys/time.h>

#include "glog/logging.h"

int main(int argc, char* argv[])
{
    google::InitGoogleLogging(argv[0]);
    FLAGS_logtostderr = true;
    FLAGS_colorlogtostderr = true;

    double timeUse;
    struct timeval startTime, stopTime;

    gettimeofday(&startTime, NULL);

    int i = 9999;
    while(i--);

    gettimeofday(&stopTime, NULL);
    timeUse = stopTime.tv_sec - startTime.tv_sec + (stopTime.tv_usec - startTime.tv_usec)/1000000.0;

    LOG(INFO) << "Time: " << std::fixed << timeUse << "s";
    LOG(WARNING) << "Time: " << std::fixed << timeUse << "s";
    LOG(ERROR) << "Time: " << std::fixed << timeUse << "s";
    //LOG(FATAL) << "Time: " << std::fixed << timeUse << "s";

    return 0;
}