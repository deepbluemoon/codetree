#include <stdio.h>

int main() {
    // Please write your code here.
    int age_a, age_b;
    char gender_a, gender_b;

    scanf("%d %c\n", &age_a, &gender_a);
    scanf("%d %c", &age_b, &gender_b);

    if ((age_a >= 19 && gender_a == 'M') || (age_b >= 19 && gender_b == 'M'))
    {
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}