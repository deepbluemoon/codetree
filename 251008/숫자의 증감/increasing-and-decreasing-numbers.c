#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    char C;
    scanf("%c %d", &C, &n);

    if (C == 'A'){
        for(int i = 1; i <= n; i++){
            printf("%d ", i);
        }
    }
    else if(C == 'D'){
        for(int j = n; j > 0; j--){
            printf("%d ", j);
        }
    }

    return 0;
}