#include <stdio.h>

int main() {
    // Please write your code here.
    int A, N, sum;
    int i = 0;

    scanf("%d %d", &A, &N);
    
    for(i = 1; i <= N; i++){
        sum = A;
        sum += i*N;
        printf("%d\n", sum);
    }
    return 0;
}