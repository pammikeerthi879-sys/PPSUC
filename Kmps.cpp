#include <stdio.h>

int main() {
    float speed_kmph, speed_mps;
    scanf("%f", &speed_kmph);

    speed_mps = speed_kmph * (1000.0 / 3600.0);  // 1 km/h = 1000/3600 m/s
    printf("%.2f", speed_mps);

    return 0;
}

