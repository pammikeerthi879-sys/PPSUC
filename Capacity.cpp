#include <stdio.h>

int main() {
    int T, S, B;
    scanf("%d %d %d", &T, &S, &B);
    
    long capacity_bytes = 2L * T * S * B * 512;  // total capacity in bytes
    long capacity_kb = capacity_bytes / 1024;    // convert bytes to KB
    
    printf("%ld KB", capacity_kb);
    
    return 0;
}

