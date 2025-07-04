#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, nota_exame;
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    float media = (nota1*2 + nota2*3 + nota3*4 + nota4)/10;
    printf("Media: %.1f\n", media);
    if (media >= 7){
        printf("Aluno aprovado.\n");
    }else if(media < 7 && media >= 5){
        printf("Aluno em exame.\n");
        scanf("%f", &nota_exame);
        printf("Nota do exame: %.1f\n", nota_exame);
        if ((media + nota_exame)/2 >= 5){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (media + nota_exame)/2);
    }else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}