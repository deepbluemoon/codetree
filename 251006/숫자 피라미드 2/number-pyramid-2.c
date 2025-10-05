#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    int cnt = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        
        for (int j = 1; j <= i; j++){
            cnt++;
            printf("%d ", cnt);
        }
        printf("\n");
    }
    
    return 0;
}