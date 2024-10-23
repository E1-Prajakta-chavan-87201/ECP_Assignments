#include<stdio.h>
int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // a. Without using logical operators
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year. There are 366 days.\n", year);
            } else {
                printf("%d is not a leap year. There are 365 days.\n", year);
            }
        } else {
            printf("%d is a leap year. There are 366 days.\n", year);
        }
    } else {
        printf("%d is not a leap year. There are 365 days.\n", year);
    }

    // b. Using logical operators
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year. There are 366 days.\n", year);
    } else {
        printf("%d is not a leap year. There are 365 days.\n", year);
    }

    // c. Conditional operator
    int days = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? 366 : 365;
    printf("%d is a leap year. There are %d days.\n", year, days);

    return 0;
}
