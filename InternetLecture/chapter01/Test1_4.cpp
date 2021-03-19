//판매원들의 급여 계산 프로그램을 작성해보자 
//이 회사는 모든 판매원에게 기본급여 50만원과 물품 판매 가격의 12%에 해당하는 돈을 지급한다.

#include<iostream>

int main(){
    int val1 = 50;
    int val2;
    
    do{
        std::cout<<"판매금액을 만원 단위로 입력(-1 to end) : ";
        std::cin>>val2;

        if(val2 != -1){
            std::cout<<"이번 달 급여 : "<< val1 + val2 * 0.12 <<"만원\n";
        }
        if(val2 == -1){
            std::cout<<"프로그램을 종료합니다."<<std::endl;
            break;
        }
    } while(val2 >= 0);
    
    return 0;
}