#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    if (N < 0){
        printf("ice");
    }
    else if (N >= 100){
        printf("vapor");
    }
    else{
        printf("water");
    }

    return 0;
}