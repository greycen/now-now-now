#include <stdio.h>
#include <time.h>

int main(){
  time_t pureTime;
  struct tm* timeInfo;
  time(&pureTime);
  timeInfo = localtime(&pureTime);
  printf("%s", asctime(timeInfo));
  return 0;
}
