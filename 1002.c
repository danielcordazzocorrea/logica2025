#include <stdio.h>
#include <math.h> 
int main() {
    double raio;
    const double n = 3.14159;
    scanf("%lf", &raio);
    printf("A=%.4lf\n", (raio*raio)*n);
    return 0;
}