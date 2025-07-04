#include <stdio.h>
#include <string.h>
int main() {
    double pib = 1;
    double ano1, ano2;
    scanf("%lf %lf", &ano1, &ano2);
    pib *= 1 + ano1/100;
    pib *= 1 + ano2/100;
    printf("%.6lf\n", (pib - 1)* 100);
    return 0;
}