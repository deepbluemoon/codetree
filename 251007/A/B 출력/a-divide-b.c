#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d.", a/b);
    int c = a % b;

    for (int i = 0; i < 20; i++){
        c *= 10;
        int d = c / b;

        printf("%d", d);
        c %= b;
        if (c == 0) {
            for (int j = i + 1; j < 20; j++) {
                printf("0");
            }
            break;
        }
    }

    return 0;
}