#include<iostream>

void input_Food(){
    std::cout<<"====================================메뉴===================================\n";
    std::cout<<"1.피자(15,000원), 2.스파게티(10,000원), 3.샐러드(7,000원), 4.음료수(2,000원)\n";
    std::cout<<"===========================================================================\n";
}

void Check_Discount(int *money){
    int coupon;
    std::cout <<"* 할인쿠폰을 입력하세요. [1 : 5%, 2 : 10%, 3 :20%] >> ";
    std::cin >> coupon;

    if(coupon == 1){
        *money *= 0.95;
    } else if(coupon == 2){
        *money *= 0.9;
    } else if(coupon == 3){
        *money *= 0.8;
    } else {
        *money = *money;
    }

}

int main() {
    int price[4] = { 15000, 10000, 7000, 2000 };
    int order[4];
    int team, sum, totalsum = 0;

    std::cout << "총 몇 팀이 식사했습니까? ";
    std::cin >> team;

    input_Food();

    for(int i = 1; i <= team; i++){
        std::cout <<"* " << i << "번째 팀의 메뉴별 주문 개수를 입력하세요 : ";
        
        for(int k = 0; k <= 3; k++){
        std::cin >> order[k];
        }
        
        for(int j = 0; j <= 3; j++){
            sum += (order[j] * price[j]);
        }
        Check_Discount(&sum);

        std::cout <<"* " << i << "번째 팀의 식사 금액는 " << sum << "입니다.\n"; 
        totalsum += sum;
        sum = 0;
    }
    std::cout << "하루 동안 총 판매 금액은 " << totalsum << "입니다.";

    return 0;
}