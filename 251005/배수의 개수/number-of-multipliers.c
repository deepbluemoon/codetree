#include <stdio.h>

int main() {
    // Please write your code here.
    char arr[10];
    int time3 = 0, time5 = 0;

    for (int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++){
        if (arr[i] % 3 == 0 && arr[i] % 5 == 0){
            time3 += 1;
            time5 += 1;
        }
        else if (arr[i] % 5 == 0){
            time5 += 1;
        }
        else if (arr[i] % 3 == 0){
            time3 += 1;
        }
        else{
            continue;
        }
    }

    printf("%d %d", time3, time5);


    return 0;
}