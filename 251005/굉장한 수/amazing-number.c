#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    if (N % 2 == 1 && N % 3 == 0){
        printf("true");
    }
    else if (N % 2 == 0 && N % 5 == 0){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}