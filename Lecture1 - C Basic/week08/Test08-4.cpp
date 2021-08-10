#include<stdio.h>

int main() {
    int num = 0;
    int num1 =0;

    for(num = 2; num < 10; num++){
        if(num % 2 != 0){
            continue;
        }
        for(num1 = 1; num1 < 10; num1++){
            if(num < num1){
                break;
            }
            printf("%d X %d = %d\n", num, num1, num * num1);      
        }
        printf("\n");
    }
    
    return 0;
}