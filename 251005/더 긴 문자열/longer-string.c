#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str1[21];
    char str2[21];
    scanf("%s %s", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 > len2){
        printf("%s %d", str1, len1);
    }
    else if (len1 == len2){
        printf("same");
    }
    else{
        printf("%s %d", str2, len2);
    }

    return 0;
}