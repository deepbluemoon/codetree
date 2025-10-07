#include <stdio.h>

int main() {
    // Please write your code here.
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A > B){
        if (C > A){
            printf("%d", A);
        }
        else{
            if (B > C){
                printf("%d", B);
            }
            else{
                printf("%d", C);
            }
        }
    }
    else{
        if (C > B){
            printf("%d", B);
        }
        else{
            if (A > C){
                printf("%d", A);
            }
            else{
                printf("%d", C);
            }
        }
    }
    return 0;
}