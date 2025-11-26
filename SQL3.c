#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    int lastTwo = year % 100; // Get the last two digits

    // Print with leading zero if needed
    printf("%02d", lastTwo);

    return 0;
}

