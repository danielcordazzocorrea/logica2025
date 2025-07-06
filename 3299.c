#include <stdio.h>
#include <string.h>
int main() {
    char num[100];
    int cont = 0;
    scanf("%s", &num);
    for (int c = 0; c < strlen(num) - 1; c ++){
        if (num[c] == '1' && num[c + 1] == '3'){
            cont ++;
        }
    }
    if (cont > 0){
        printf("%s es de Mala Suerte\n", num);
    }else{
        printf("%s NO es de Mala Suerte\n", num);
    }
    return 0;
}