#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int height;

    // Height is the maximum of numerator and denominator
    if (x > y)
        height = x;
    else
        height = y;

    // Print the result
    printf("%d", height);

    return 0;
}

