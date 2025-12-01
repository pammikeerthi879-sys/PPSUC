#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    // Check if the sides form a valid triangle
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("0.0000");
        return 0;
    }
    
    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("%.4lf", area);
    return 0;
}

