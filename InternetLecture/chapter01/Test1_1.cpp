//사용자로부터 총 5개의 정수를 입력 받아서, 그 합을 구하는 프로그램을 작성해보자.

#include<iostream>

int main(){
    int val1, val2, val3, val4, val5;

    std::cout<<"1번째 정수를 입력해주세요 : ";
    std::cin>>val1;

    std::cout<<"2번째 정수를 입력해주세요 : ";
    std::cin>>val2;

    std::cout<<"3번째 정수를 입력해주세요 : ";
    std::cin>>val3;

    std::cout<<"4번째 정수를 입력해주세요 : ";
    std::cin>>val4;

    std::cout<<"5번째 정수를 입력해주세요 : ";
    std::cin>>val5;

    int result = val1 + val2 + val3 + val4 + val5;
    std::cout<<"합계 : "<<result<<std::endl;

    return 0;
}