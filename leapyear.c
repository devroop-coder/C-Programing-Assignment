#include <stdio.h>

int main()
{

    printf("Kaushik Ranjan Rajkumar\n");

    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    (year % 400 == 0) ? printf("%d is a leap year.\n", year) : (year % 100 == 0) ? printf("%d is not a leap year.\n", year)
                                                           : (year % 4 == 0)     ? printf("%d is a leap year.\n", year)
                                                                                 : printf("%d is not a leap year.\n", year);

    return 0;
}