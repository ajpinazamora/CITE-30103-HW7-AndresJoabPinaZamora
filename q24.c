#include <stdio.h>

int square(int x) {
    return x * x;
}

int main(void) {
    int n;
    scanf("%d", &n);

    int (*fp)(int);
    fp = square;

    int result = fp(n);
    printf("%d\n", result);

    return 0;
}

