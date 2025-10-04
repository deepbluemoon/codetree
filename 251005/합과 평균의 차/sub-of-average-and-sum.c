#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;
    int sum, avg, N;
    
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    avg = sum / 3;
    N = sum - avg;

    printf("%d\n%d\n%d\n", sum, avg, N);

    return 0;
}