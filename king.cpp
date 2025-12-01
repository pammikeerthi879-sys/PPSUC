#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);       // Input number of 5-seater and 7-seater cars
    
    int total = (N * 5) + (M * 7);  // Calculate total people that can travel together
    
    printf("%d", total);            // Output the result
    
    return 0;
}

