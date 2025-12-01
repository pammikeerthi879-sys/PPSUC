#include <stdio.h>

int main() {
    int N;
    long long M;
    scanf("%d %lld", &N, &M);
    
    long long result = (M / 2) + 1;
    printf("%lld", result);
    
    return 0;
}

