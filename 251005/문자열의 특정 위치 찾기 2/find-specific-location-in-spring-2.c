#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char arr[5][20] = {"apple", "banana", "grape", "blueberry", "orange"};
    char str;
    int cnt = 0;

    scanf(" %c", &str);

    for (int i = 0; i < 5; i++){
        if (arr[i][2] == str || arr[i][3] == str){
            printf("%s\n", arr[i]);
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}