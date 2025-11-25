#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main(void) {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        scanf("%39s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%f", &s[i].marks);
    }

    printf("Name\tRoll\tMarks\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}

