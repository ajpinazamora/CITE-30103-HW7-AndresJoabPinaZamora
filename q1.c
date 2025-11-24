/* question1.c */
#include <stdio.h>

float toCelsius(float f) {
    return (f - 32.0f) * 5.0f / 9.0f;
}

int main(void) {
    float f;
    scanf("%f", &f);
    float c = toCelsius(f);
    printf("Celsius: %.2f\n", c);
    return 0;
}

