#include <stdio.h>
#include <string.h>
int main() {
    char nome[100];
    int f, num;
    char digno[] = {"Thor"};
    scanf("%d", &num);
    for (int c = 0; c < num; c++){
        scanf("%s %d", nome, &f);
        if (strcmp(digno, nome) == 0){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }
    return 0;
}