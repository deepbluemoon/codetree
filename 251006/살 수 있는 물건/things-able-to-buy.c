#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int book, mask;
    scanf("%d", &n);

    book = 3000;
    mask = 1000;

    if(n >= 3000){
        printf("book");
    }
    else if (n >= 1000){
        printf("mask");
    }
    else{
        printf("no");
    }

    return 0;
}