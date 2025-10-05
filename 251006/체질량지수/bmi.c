#include <stdio.h>

int main() {
    // Please write your code here.
    int h, kg;
    int b;
    scanf("%d %d", &h, &kg);

    b = (kg * 10000) / (h*h);

    printf("%d\n", b);
    if (b >= 25){
        printf("Obesity");
    }


    return 0;
}