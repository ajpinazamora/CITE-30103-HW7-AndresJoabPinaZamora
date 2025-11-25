#include <stdio.h>

int main(void) {
    int x;
    int *px;

    scanf("%d", &x);
    px = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void *)&x);
    printf("Value via pointer: %d\n", *px);

    return 0;
}

