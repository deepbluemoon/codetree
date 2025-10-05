#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char arr[100];
    scanf("%s", arr);

    int len1 = strlen(arr);

    arr[1] = (char) 'a';
    arr[len1 - 2] = (char) 'a';

    printf("%s", arr);

    return 0;
}