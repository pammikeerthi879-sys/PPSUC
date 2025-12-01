#include <stdio.h>

int main() {
    int average, w1, w2;
    scanf("%d %d %d", &average, &w1, &w2);
    
    int total_weight = average * 3; // since average = (w1 + w2 + w3) / 3
    int w3 = total_weight - (w1 + w2); // find the third boy's weight
    
    printf("%d", w3);
    
    return 0;
}

