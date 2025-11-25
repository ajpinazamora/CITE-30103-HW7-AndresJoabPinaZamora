#include <stdio.h>

int main(void) {
    char s[101];
    scanf("%100s", s);

    int i = 0;
    int j = 0;
    while (s[j] != '\0') j++;
    j--;

    int isPal = 1;
    while (i < j) {
        if (s[i] != s[j]) {
            isPal = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPal) printf("Palindrome\n");
    else printf("Not Palindrome\n");

    return 0;
}

