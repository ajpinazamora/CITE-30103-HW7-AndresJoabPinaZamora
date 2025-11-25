#include <stdio.h>

int main(void) {
    char s[101];
    fgets(s, 101, stdin);

    int count = 0;
    int inWord = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t') {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("Words = %d\n", count);
    return 0;
}

