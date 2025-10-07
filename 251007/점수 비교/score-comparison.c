#include <stdio.h>

int main() {
    // Please write your code here.
    int math_a, eng_a;
    int math_b, eng_b;
    scanf("%d %d", &math_a, &eng_a);
    scanf("%d %d", &eng_a, &eng_b);

    if (math_a > math_b && eng_a > eng_b){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;

}