#include <stdio.h>

int main() {
    int num;
    int cont = 2; 
    scanf("%d", &num);
    while (cont <= num){
        printf("%d^2 = %d\n", cont, cont*cont);
        cont += 2;
    }
    return 0;
}