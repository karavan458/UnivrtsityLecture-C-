//이론적으로 오차없이 모든 실수를 완벽하게 표한할 수 있는 컴퓨팅 환경은 존재하지 않는다. 

#include<stdio.h>

int main() {
    int i;
    float num = 0.0;

    for(i = 0; i < 100; i++){
        num += 0.1;
    }
    printf("0.1을 100번 더한 결과 = %f\n",num);
    
    return 0;
}