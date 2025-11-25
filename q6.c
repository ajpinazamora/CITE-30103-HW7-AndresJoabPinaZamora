/* question6.c */
#include <stdio.h>

int main(void) {
    int n, arr[100], sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float avg = (float) sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}

