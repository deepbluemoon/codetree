#include <stdio.h>

int main() {
    // Please write your code here.
    int math_a, eng_a;
    int math_b, eng_b;
    scanf("%d %d\n", &math_a, &eng_a);
    scanf("%d %d", &math_b, &eng_b);

    if (math_a == math_b){
        if (eng_a > eng_b){
            printf("A");
        }
        else{
            printf("B");
        }
    }
    else if (math_a > math_b){
        printf("A");
    }
    else{
        printf("B");
    }


    return 0;
}