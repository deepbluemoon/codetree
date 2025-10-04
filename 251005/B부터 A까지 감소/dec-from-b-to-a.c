#include <stdio.h>

int main() {
    // Please write your code here.
    int A, B, i;
    scanf("%d %d", &A, &B);

    for (int i = B; i >= A; i--){
        printf("%d ", i);
    }
        
    return 0;
}