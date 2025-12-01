#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    if (X >= N) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

