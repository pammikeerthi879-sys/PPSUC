#include <stdio.h>
#include <math.h>  // for sqrt() and pow()

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    double hypotenuse = sqrt((X * X) + (Y * Y));
    printf("%.2f", hypotenuse);
    
    return 0;
}

