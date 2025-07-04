#include <stdio.h>
 
#include <stdio.h>
#include <string.h>
int main() {
    int vez, num;
    scanf("%d", &vez);
    for (int c = 0; c < vez; c++){
        scanf("%d", &num);
        if (num % 2 == 0){
            printf("0\n");
        }else{
            printf("1\n");
        }
    }
    return 0;
}