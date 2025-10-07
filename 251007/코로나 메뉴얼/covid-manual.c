#include <stdio.h>

int main() {
    // Please write your code here.
    char t1, t2, t3;
    int s1, s2, s3;

    scanf("%c %d\n", &t1, &s1);
    scanf("%c %d\n", &t2, &s2);
    scanf("%c %d\n", &t3, &s3);

    if (t1 == 'Y' && s1 >= 37){
        if ((t2 == 'Y' && s2 >= 37) || (t3 == 'Y' && s3 >= 37)){
            printf("E");
        }
        else{
            printf("N");
        }
    }
    else if (t2 == 'Y' && s2 >= 37){
        if ((t1 == 'Y' && s1 >= 37) || (t3 == 'Y' && s3 >= 37)){
            printf("E");
        }
        else{
            printf("N");
        }
    }
    else{
        if ((t1 == 'Y' && s1 >= 37) || (t2 == 'Y' && s2 >= 37)){
            printf("E");
        }
        else{
            printf("N");
        }
    }

    return 0;
}