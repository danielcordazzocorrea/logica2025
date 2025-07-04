#include <stdio.h>
int chamadas;
int fibo(int a){
    if (a == 0 || a == 1){
        return a;
    }else{
        chamadas += 2;
    }
    return fibo(a - 1) + fibo(a-2);
}
int main(){
    int num, fib;
    scanf("%d", &num);
    for (int c = 0; c < num; c++){
        scanf("%d", &fib);
        int result = fibo(fib);
        printf("fib(%d) = %d calls = %d\n", fib, chamadas, result);
        chamadas = 0;
    }
    return 0;
}