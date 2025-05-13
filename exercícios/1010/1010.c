#include <stdio.h>
int main() {
    int cd1, cd2, qnt1, qnt2;
    float pre1, pre2;
    scanf("%d", &cd1);
    scanf("%d", &qnt1);
    scanf("%f", &pre1);
    scanf("%d", &cd2);
    scanf("%d", &qnt2);
    scanf("%f", &pre2);
    float res = (qnt1 * pre1) + (qnt2 * pre2);
    printf("VALOR A PAGAR: R$ %.2f\n", res);
    return 0;
}