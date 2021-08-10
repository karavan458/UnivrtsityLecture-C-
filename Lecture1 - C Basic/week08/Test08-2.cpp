#include<stdio.h>

int main() {
    int x, y;
    int result;

    printf("정수 2개를 입력 : ");
    scanf("%d %d", &x, &y);

    if(x > y) {
        result = x - y;
    }
    else {
        result = y - x;
    }

    printf("연산 결과 : %d", result);
    return 0;
}