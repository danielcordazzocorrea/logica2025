#include <stdio.h>

int main() {
    int cod;
    float qnt;
    float lista_precos[6] = {0, 4, 4.5, 5, 2, 1.5};
    scanf("%d %f", &cod, &qnt);
    printf("Total: R$ %.2f\n", lista_precos[cod]*qnt);
    return 0;
}