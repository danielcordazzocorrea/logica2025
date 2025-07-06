#include <stdio.h>

int main() {
    int num, num2;
    scanf("%d", &num);
    for (int c = 0; c < num; c++){
        scanf("%d", &num2);
        printf("resposta %d: %d\n", c + 1, num2);
    }
    return 0;
}