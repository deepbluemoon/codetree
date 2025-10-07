#include <stdio.h>

int main() {
    // Please write your code here.
    int b, a;
    scanf("%d %d", &b, &a);

    while(b > a-1){
        if (b % 2 == 0){
            printf("%d ", b);
        }
        b--;
    }
    return 0;
}