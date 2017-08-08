#include <iostream>
#include <sys/time.h>

#include "version.h"

int main(int argc, char* argv[]) {
  double timeUse;
  struct timeval startTime, stopTime;

  gettimeofday(&startTime, NULL);

  std::cout << "Template version: " << GIT_REPO_VERSION << std::endl;

  gettimeofday(&stopTime, NULL);
  timeUse = stopTime.tv_sec - startTime.tv_sec + (stopTime.tv_usec - startTime.tv_usec)/1000000.0;
  std::cout << "Time: " << timeUse << "s" << std::endl;

  return 0;
}