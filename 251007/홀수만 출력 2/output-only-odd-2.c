#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &b, &a);

    for(int i = b; i > a - 1; i--){
        if (i % 2 == 1){
            printf("%d ", i);
        }
    }
    return 0;
}