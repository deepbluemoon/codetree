#include <stdio.h>

int main() {
    // Please write your code here.
    int A,B;
    int sum;
    float avg;

    scanf("%d %d", &A, &B);
    sum = A + B;
    avg = (float)sum / 2;

    printf("%d %.1f", sum, avg);

    return 0;
}