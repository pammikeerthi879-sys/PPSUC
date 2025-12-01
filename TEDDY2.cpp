#include <stdio.h>
#include <stdlib.h> // for abs()

int main() {
    int N;
    scanf("%d", &N); // Read size of array

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    int sumEvenIndex = 0;
    int sumOddIndex = 0;

    // Loop through array
    for(int i = 0; i < N; i++) {
        if(i % 2 == 0) {
            sumEvenIndex += arr[i]; // Even index
        } else {
            sumOddIndex += arr[i];  // Odd index
        }
    }

    // Calculate and display absolute difference
    int difference = abs(sumEvenIndex - sumOddIndex);
    printf("%d
", difference);

    return 0;
}


