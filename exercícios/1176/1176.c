#include <stdio.h>
#include <math.h>
long long int fib(int x){
    long long int v1 = 0;
    long long int v2 = 1;
    long long int aux = v1;
    for (int c = 0; c < x; c ++){
    if (c > 0){
        aux = v1;
          v1 = v2;
          v2 += aux;
        } 
    }
    if (x == 0){
        return 0;
    }else{
        return v2;
    }
}
int main() {
    int inicio;
    int valor;
    scanf("%d", &inicio);
    for (int c = 1; c <= inicio; c ++){
        scanf("%d", &valor);
        printf("Fib(%d) = %lld\n",valor, fib(valor));
    }
    return 0;
}