#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    int arr[100];
    int anoarr[100];

    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < N; i++){
        anoarr[i] = arr[i] * arr[i];
    }

    for (int i = 0; i < N; i++){
        printf("%d ", anoarr[i]);
    }

    return 0;
}