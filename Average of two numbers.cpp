#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    float avg = (num1 + num2) / 2.0;  // Use 2.0 to get float result
    printf("Average of %d and %d is: %.2f", num1, num2, avg);

    return 0;
}

