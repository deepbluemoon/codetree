#include <stdio.h>

int main() {
    // Please write your code here.
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix1[N][M];
    int matrix2[N][M];
    int matrix3[N][M];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (matrix1[i][j] == matrix2[i][j]){
                matrix3[i][j] = 0;
            }
            else{
                matrix3[i][j] = 1;
            }
        }
    }   

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}