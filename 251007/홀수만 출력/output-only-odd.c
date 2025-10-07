#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d", &a, &b);

    for (int i = a; i < b + 1; i++){
        if (i % 2 == 1){
            printf("%d ", i);
        }
    }
    return 0;
}