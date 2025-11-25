#include <stdio.h>

int main(void) {
    char s[100];
    int vowels = 0, cons = 0, digits = 0;

    fgets(s, 100, stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c >= '0' && c <= '9') digits++;
        else if (c >= 'A' && c <= 'Z') {
            if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U') vowels++;
            else cons++;
        }
        else if (c >= 'a' && c <= 'z') {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vowels++;
            else cons++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", cons);
    printf("Digits = %d\n", digits);

    return 0;
}

