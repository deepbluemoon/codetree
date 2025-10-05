#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    for (int i = 1; i < N + 1; i++){
        for (int j = 0; j < i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}