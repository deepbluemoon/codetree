#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char S[100],T[100];
    char temp[100];
    scanf("%s\n%s", &S,&T);

    strcpy(temp, S);
    strcpy(S, T);
    strcpy(T, temp);
    
    printf("%s\n%s", S,T);
    
    return 0;
}