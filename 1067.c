#include <stdio.h>

int main() {
    int num;
    int cont = 1; 
    scanf("%d", &num);
    while (cont < num){
        printf("%d\n", cont);
        cont += 2;
    }
    if (cont % 2 == 1){
        printf("%d\n", cont);
    }
    return 0;
}