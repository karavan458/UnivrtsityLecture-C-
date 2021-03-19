//숫자하나를 입력받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해 보자.
//예를 들어 사용자가 5를 입력한다면 구구단에서 5단을 출력해야한다. 

#include<iostream>

int main() {
    int val;
    std::cout<<"숫자 하나를 입력해주세요 : ";
    std::cin>>val;

    for(int i = 1; i < 10; i++){
        std::cout<<val<<" * "<<i<< " = "<<val * i<<std::endl;
    }

    return 0;
}