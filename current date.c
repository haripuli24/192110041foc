#include <stdio.h>
#include <time.h>

int main() 
{	
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);
    localTime = localtime(&currentTime);
    
    printf("Current Date: %02d-%02d-%04d\n",
           localTime->tm_mday, localTime->tm_mon + 1, localTime->tm_year + 1900);

    return 0;
}

