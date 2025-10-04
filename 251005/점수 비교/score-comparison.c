#include <stdio.h>

int main() {
    // Please write your code here.
    int A_math, A_eng;
    int B_math, B_eng;

    scanf("%d %d", &A_math, &A_eng);
    scanf("%d %d", &B_math, &B_eng);

    if ( A_math > B_math && A_eng > B_eng){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}