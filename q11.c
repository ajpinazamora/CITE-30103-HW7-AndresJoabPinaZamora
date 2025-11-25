#include <stdio.h>

int main(void) {
    char s[101];
    scanf("%100s", s);

    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    printf("Length = %d\n", len);
    return 0;
}

