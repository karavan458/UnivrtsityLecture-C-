#include<stdio.h>

int main() {
    int num;
FIRST:   
    printf("자연수 입력 : ");
    scanf("%d", &num);

    if(num == 1){
        goto ONE;
    }
    else if(num == 2){
        goto TWO;
    }
    else {
        goto OTHER;
    }

ONE:
    printf("1을 입력하셨습니다.! \n");
    goto END;

TWO:
    printf("2를 입력하셨습니다.!\n");
    goto END;

OTHER:
    printf("다시 입력하세요!\n");
    goto FIRST;

END:
    return 0;
}