#include <stdio.h>

int main(void) {
    char a[201], b[101];
    scanf("%100s", a);
    scanf("%100s", b);

    int i = 0;
    while (a[i] != '\0') i++;

    int j = 0;
    while (b[j] != '\0') {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';

    printf("%s\n", a);
    return 0;
}

