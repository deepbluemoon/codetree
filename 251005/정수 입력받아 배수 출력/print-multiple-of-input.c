#include <stdio.h>

int main() {
    // Please write your code here.
    int N, i, M;
    scanf("%d", &N);

    for (i = 1; i < 6; i++){
        M = i*N;
        printf("%d ", M);
    }
    return 0;
}