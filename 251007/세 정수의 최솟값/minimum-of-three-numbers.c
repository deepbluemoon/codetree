#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && c >= a){
        printf("%d", a);
    }
    else if (a >= b && c >= b){
        printf("%d", b);
    }
    else{
        printf("%d", c);
    }

    return 0;
}