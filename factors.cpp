#include <stdio.h>

int main() {
    float CP, SP, loss, lossPercent;

    // Input
    scanf("%f %f", &CP, &SP);

    // Calculate loss
    loss = CP - SP;

    // Calculate loss percentage
    lossPercent = (loss / CP) * 100;

    // Output with 2 decimal places
    printf("%.2f", lossPercent);

    return 0;
}

