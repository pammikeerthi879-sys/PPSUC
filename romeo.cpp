#include <stdio.h>

int main() {
    int X, Y, Z;
    int total_money, chocolates;

    // Input values
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);

    // Calculate total money
    total_money = (X * 5) + (Y * 10);

    // Calculate number of chocolates
    chocolates = total_money / Z;

    // Output result
    printf("%d", chocolates);

    return 0;
}

