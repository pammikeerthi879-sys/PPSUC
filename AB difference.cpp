#include <stdio.h>
#include <stdlib.h>  // for abs()

int main() {
    int A, B;
    
    // Read two integers
    scanf("%d %d", &A, &B);
    
    // Calculate the correct sum and wrong product
    int correct = A + B;
    int wrong = A * B;
    
    // Compute absolute difference
    int difference = abs(correct - wrong);
    
    // Print the result
    printf("%d
", difference);
    
    return 0;
}

