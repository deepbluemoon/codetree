#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[4][4];


    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (int i = 0; i < 4; i++){
        int a = 0;
        for (int j = 0; j < 4; j++){
            a += arr[i][j];
        }
        printf("%d\n", a);
    }

    return 0;
}