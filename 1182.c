#include <stdio.h>

int main() {
    float m[12][12];
    int num;
    char res;
    float soma = 0;
    scanf("%d", &num);
    scanf(" %c", &res);
    for (int c = 0; c <= 11; c++){
        for (int b = 0; b <= 11; b ++){
            scanf("%f", &m[c][b]);
        }
    }
    for (int c = 0; c <= 11; c++){
       soma += m[c][num];
    }
    if (res == 's' || res == 'S'){
        printf("%.1f\n", soma);
    }else{
        printf("%.1f\n", soma/12);
    }
    return 0;
}