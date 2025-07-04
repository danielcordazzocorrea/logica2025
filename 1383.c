#include <stdio.h>

int ver_int(int valor[9]){
    int num[10] = {0};
    for (int i = 0; i < 9; i++){
        if (valor[i] < 1 || valor[i] > 9) return 1; 
        num[valor[i]]++;
    }
    for (int i = 1; i <= 9; i++){
        if (num[i] != 1) return 1; 
    }
    return 0; 
}

int verificar_linhas(int lista[9][9]){
    int linha[9];
    for (int l = 0; l < 9; l++){
        for (int c = 0; c < 9; c++) linha[c] = lista[l][c];
        if (ver_int(linha)) return 1;
    }
    return 0;
}

int verificar_colunas(int lista[9][9]){
    int coluna[9];
    for (int c = 0; c < 9; c++){
        for (int l = 0; l < 9; l++) coluna[l] = lista[l][c];
        if (ver_int(coluna)) return 1;
    }
    return 0;
}

int verificar_blocos(int lista[9][9]){
    int bloco[9];
    for (int base_l = 0; base_l < 9; base_l += 3){
        for (int base_c = 0; base_c < 9; base_c += 3){
            int idx = 0;
            for (int l = base_l; l < base_l + 3; l++){
                for (int c = base_c; c < base_c + 3; c++){
                    bloco[idx++] = lista[l][c];
                }
            }
            if (ver_int(bloco)) return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    for (int instancia = 1; instancia <= n; instancia++){
        int lista[9][9];
        for (int l = 0; l < 9; l++){
            for (int c = 0; c < 9; c++){
                scanf("%d", &lista[l][c]);
            }
        }
        int invalido = verificar_linhas(lista) || verificar_colunas(lista) || verificar_blocos(lista);

        printf("Instancia %d\n", instancia);
        if (invalido == 0){
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n");
    }
    return 0;
}
