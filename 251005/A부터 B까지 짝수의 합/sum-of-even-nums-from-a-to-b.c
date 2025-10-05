#include <stdio.h>

int main() {
    // Please write your code here.
    int A, B;
    int total = 0;
    scanf("%d %d", &A, &B);

    for (int i = A; i <= B; i++){
        if (i % 2 == 0){
            total += i;
        }
    }
    printf("%d", total);

    return 0;
}