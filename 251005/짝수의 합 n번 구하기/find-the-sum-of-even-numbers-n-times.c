#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    int a,b;
    int cnt;

    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        scanf("%d %d", &a, &b);
        cnt = 0;
        for (int j = a; j < b + 1; j++){
            if (j % 2 == 0){
                cnt += j;
            }
        }
        printf("%d\n", cnt);
        
    }   

    return 0;
}