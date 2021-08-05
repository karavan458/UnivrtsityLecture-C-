#include<stdio.h>

int main() {
    int num1 = 15;  //00000000 00000000 00000000 00001111
    
    int result1 = num1 << 1;    //num의 비트 열을 왼쪽으로 1칸씩 이동 
    int result2 = num1 << 2;    //num의 비트 열을 왼쪽으로 2칸씩 이동 
    int result3 = num1 << 3;    //num의 비트 열을 왼쪽으로 3칸씩 이동 

    //비트가 왼쪽으로 한칸 이동시 2배, 오른쪽으로 한칸 이동시 반으로 적어짐
    printf("1칸 이동 결과 = %d\n", result1);
    printf("2칸 이동 결과 = %d\n", result2);
    printf("3칸 이동 결과 = %d\n", result3);

    return 0;
}