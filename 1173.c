#include <stdio.h>
#include <math.h>
int main() {
    int lista[10];
    int inicio;
    scanf("%d", &inicio);
    for (int c = 0; c < 10; c ++){
        lista[c] = inicio * pow(2, c);
    }
    for (int i = 0; i < 10; i ++){
        printf("N[%d] = %d\n", i, lista[i]);
    }
    return 0;
}