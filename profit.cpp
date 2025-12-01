#include <stdio.h>

int main() {
    float CP, SP, profitPercent;
    
    // Taking input
    scanf("%f %f", &CP, &SP);
    
    // Calculating profit percentage
    profitPercent = ((SP - CP) / CP) * 100;
    
    // Printing with 2 decimal places
    printf("%.2f", profitPercent);
    
    return 0;
}

