#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    int save = 0;
    scanf("%d", &N);

    for (int i = 1; i < 101; i++){
        save += i;
        if (save >= N){
            printf("%d", i);
            break;
        }
    }
    return 0;
}