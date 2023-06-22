#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char time_Str[] = "08:08:08"; // given time string
    char *token;
    unsigned long hr, min, sec;
    unsigned long total_Sec;

    token = strtok(time_Str, ":");
    hr = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    min = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    sec = strtoul(token, NULL, 10);

    total_Sec = (hr * 3600) + (min * 60) + sec;

    printf("Total seconds: %lu\n", total_Sec);

    return 0;
}