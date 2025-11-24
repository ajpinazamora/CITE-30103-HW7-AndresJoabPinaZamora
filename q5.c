/* question5.c */
#include <stdio.h>

long factorial(int n) {
    long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: factorial not defined for negatives.\n");
    } else {
        printf("%ld\n", factorial(n));
    }
    return 0;
}

