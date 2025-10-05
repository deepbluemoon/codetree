#include <stdio.h>

int main() {
    // Please write your code here.
    int A,B;
    int i;
    scanf("%d %d", &A, &B);

    i = A;

    while (i <= B){
        printf("%d ", i);
        if (i % 2 == 1){
            i = i * 2;
        }
        else{
            i = i + 3;
        }

        
    }
    return 0;
}