#include <stdio.h>

int main() {
    // Please write your code here.
    int gender, age;
    scanf("%d", &gender);
    scanf("%d", &age);

    if (gender == 0){
        if(age >= 18){
            printf("MAN");
        }
        else{
            printf("BOY");
        }
    }
    else{
        if (age >= 18){
            printf("WOMAN");
        }
        else{
            printf("GIRL");
        }
    }

    return 0;
}