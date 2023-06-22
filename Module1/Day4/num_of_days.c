#include <stdio.h>
#include <stdlib.h> 

int count_Days(char str[]) {
    int total_days = 0;
    int day = 0, Month = 0, year = 0;
    int i = 0;

    while (str[i] != '/') {                                  //day
        day = day * 10 + (str[i] - '0');
        i++;
    }
    i++;    
    while (str[i] != '/') {                                 //month
        Month = Month * 10 + (str[i] - '0');
        i++;
    }
    i++; 
    while (str[i] != '\0') {                               //year
        year = year * 10 + (str[i] - '0');
        i++;
    }

    int Months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        Months[1] = 29;                              // Leap year, so February has 29 days.
    }

    for (int i = 0; i < Month - 1; i++) {           // Calculate the total number of days
        total_days += Months[i];
    }
    total_days += day;

    return total_days;
}

int main() {
    char str[50];
    printf("Enter the date (DD/MM/YYYY): ");
    scanf("%s", str);

    int result = count_Days(str);
    printf("Total number of days elapsed is : %d\n", result);

    return 0;
}