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

    int idx = 0;
    for (int i = 1; i < 5; i++) {
        if (s[i].marks > s[idx].marks) {
            idx = i;
        }
    }

    printf("Top Student:\n");
    printf("Name: %s\n", s[idx].name);
    printf("Roll: %d\n", s[idx].roll);
    printf("Marks: %.2f\n", s[idx].marks);

    return 0;
}

