#include <stdio.h>
#include <string.h>

int main() {
    char d, n[105];

    while (1) {
        scanf(" %c %s", &d, n);

        if (d == '0' && strcmp(n, "0") == 0)
            break;

        char resultado[105];
        int k = 0;

        for (int i = 0; n[i] != '\0'; i++) {
            if (n[i] != d) {
                resultado[k++] = n[i];
            }
        }
        resultado[k] = '\0';

        int i = 0;
        while (resultado[i] == '0') {
            i++;
        }

        if (i == k) {
            printf("0\n");
        } else {
            printf("%s\n", resultado + i);
        }
    }

    return 0;
}