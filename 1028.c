#include <stdio.h>
int mdc(int a, int b){
    int res = 1;
    if (a > b){
        while (1){
            res = a%b;
            if (res == 0){
                return b;
            }else{
                a = b;
                b = res;
            }
        }
    }else{
        while (1){
            res = b%a;
            if (res == 0){
                return a;
            }else{
                b = a;
                a = res;
            }
        }
    }
}
int main() {
    int num, num1, num2;
    scanf("%d", &num);
    for (int c = 0; c < num; c++){
        scanf("%d %d", &num1, &num2);
        printf("%d\n", mdc(num1, num2));  
    }
    return 0;
    }