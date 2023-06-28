//Q.5 Write a Program to print leap years between two given numbers using a while loop.

#include <stdio.h>
#include<conio.h>


int main() {
    int startYear, endYear;

    printf("Enter the start year: ");
    scanf("%d", &startYear);

    printf("Enter the end year: ");
    scanf("%d", &endYear);

    printf("Leap years between %d and %d are:\n", startYear, endYear);

    //int year = startYear;

    while (startYear <= endYear) {
        if ((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0)) {
            printf("%d\n",startYear);
        }
        startYear++;
    }

    return 0;
}

/*
Input:
Enter the first number: 2020
Enter the second number: 2040

Output:
2020
2024
2028
2032
2036
2040
*/


