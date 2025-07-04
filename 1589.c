#include <stdio.h>
#include <string.h>
int main() {
    int vez, num1, num2;
    scanf("%d", &vez);
    for (int c = 0; c < vez; c++){
        scanf("%d %d", &num1, &num2);
        printf("%d\n", num1 + num2);
    }
    return 0;
}