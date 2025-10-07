#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b){
        for(int i = a; i > b-1; i--){
            printf("%d ", i);
        }
    }
    else if (a < b){
        for(int j = b; j > a -1; j--){
            printf("%d ", j);
        }
    }
    else{
        printf("%d ", a);
    }

    return 0;
}