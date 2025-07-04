#include <stdio.h>

int main() {
    float m[12][12];
    char resp;
    float soma = 0;
    int valor = 0;
    float cont = 0;
    scanf("%c", &resp);
    for (int l = 0; l < 12; l++){
        for (int c = 0; c < 12; c++){
            scanf("%f", &m[l][c]);    
        }
    }
    for (int l = 11; l > 0; l --){
        for (int c = 11; c > valor; c --){
           soma += m[l][c]; 
           cont ++;
        }
        valor ++;
    }
    if (resp == 'M'){
        printf("%.1f\n", soma/cont);
    }else{
        printf("%.1f\n", soma);
    }
    return 0;
}