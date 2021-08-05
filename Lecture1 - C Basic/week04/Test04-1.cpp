#include<stdio.h>

int main() {
    int num;

    printf("1개의 정수를 입력해주세요 : ");
    scanf("%d", &num);

    num = ~num + 1; 

    printf("입력 받은 정수의 NOT값은 = %d\n", num);
    
    return 0;
}