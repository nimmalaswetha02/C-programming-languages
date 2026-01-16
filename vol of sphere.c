#include <stdio.h>
#define PI 3.14159

int main() {
    int R;
    float volume;

    // Input radius
    scanf("%d", &R);

    // Calculate volume of sphere
    volume = (4.0 / 3.0) * PI * R * R * R;

    // Output volume
    printf("%.2f", volume);

    return 0;
}

