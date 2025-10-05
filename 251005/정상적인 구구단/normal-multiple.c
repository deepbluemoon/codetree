#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    for (int i = 1; i < N + 1; i++){
        for (int j = 1; j < N + 1; j++){
            printf("%d * %d = %d", i, j, i * j);
            if (j != N){
                printf(", ");                
            }

        }
        printf("\n");
    }
    return 0;
}