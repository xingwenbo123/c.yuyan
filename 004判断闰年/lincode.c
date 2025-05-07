#include <stdio.h>

int main() {
    // Write your code here
    int year = 0;
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else {
        printf("%d is not a leap year.", year);
    }

    return 0;
}