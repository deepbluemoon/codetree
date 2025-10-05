#include <stdio.h>

int main() {
    // Please write your code here.
    int matrix[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
        }

    }

    for (int x = 0; x < 3; x++){
        for (int y = 0; y < 3; y++){
            printf("%d ", matrix[x][y]*3);
        }
        printf("\n");
    }
    return 0;
}