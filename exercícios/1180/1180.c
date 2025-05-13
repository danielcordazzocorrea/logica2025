#include <stdio.h>
int main() {
    int inicio, valor, pos;
    scanf("%d", &inicio);
    int lista[inicio];
    for (int c = 0; c < inicio; c ++){
        scanf("%d", &valor);
        lista[c] = valor;
    }
    int menor = lista[0];
    for (int i = 0; i < inicio; i ++){
        if (lista[i] < menor){
            menor = lista[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    return 0;
}