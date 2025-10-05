#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    int cnt = 0;
    scanf("%d", &N);

    for (int i = 1; i < N+1; i++){
        if (i % 2 == 0){
            continue;
        }
        else if(i % 3 == 0){
            continue;
        }
        else if(i % 5 == 0){
            continue;
        }
        else{
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}