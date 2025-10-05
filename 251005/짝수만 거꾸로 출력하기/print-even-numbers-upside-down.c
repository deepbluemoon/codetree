#include <stdio.h>

int main() {
    // Please write your code here.
    char arr[100];
    int N;
    scanf("%d" , &N);

    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = N-1; i > -1; i--){
        if ((int) arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}