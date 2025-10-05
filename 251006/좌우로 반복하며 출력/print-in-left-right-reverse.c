#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    int arr[N][N];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (i % 2 == 0){
                arr[i][j] = j + 1;
                printf("%d", arr[i][j]);
                }
            else{
                arr[i][j] = N - j;
                printf("%d", arr[i][j]);
            }
        }
        printf("\n");
    }



    return 0;
}