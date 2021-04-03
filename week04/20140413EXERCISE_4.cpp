#include<iostream>

class Restaurant{
    int m_order[4];
    int m_price[4];
    int m_total;
    bool m_coupon;

    public:
        Restaurant(){
        m_order[0] = 1;
        m_order[1] = 1;
        m_order[2] = 1;
        m_order[3] = 1;
        m_price[0] = 15000;
        m_price[1] = 10000;
        m_price[2] = 7000;
        m_price[3] = 2000;
        m_total = 0;
        m_coupon = false;
        }
        
        Restaurant(int o1, int o2, int o3, int o4, bool cp){
        m_order[0] = o1;
        m_order[1] = o2;
        m_order[2] = o3;
        m_order[3] = o4;
        m_price[0] = 15000;
        m_price[1] = 10000;
        m_price[2] = 7000;
        m_price[3] = 2000;
        m_total = 0;
        m_coupon = cp; 
        }
        
        int Get_Total();
        void Show_Food();
        void Num_Order();
        void Check_Money();
        void Check_Discount();
};

int Restaurant::Get_Total() {
    return m_total;
}

void Restaurant::Show_Food() {
    std::cout<<"====================================메뉴===================================\n";
    std::cout<<"1.피자(15,000원), 2.스파게티(10,000원), 3.샐러드(7,000원), 4.음료수(2,000원)\n";
    std::cout<<"===========================================================================\n";
}

void Restaurant::Num_Order(){
    std::cout<<"주문하신 음식은 피자 "<<m_order[0]<<"개"<<"스파게티 "<<m_order[1]<<"개"<<"샐러드 "<<m_order[2]<<"개" << "음료수 "<<m_order[3]<<"개 입니다.\n";
}

void Restaurant::Check_Money(){
    for(int i = 0; i < 4; i++){
        m_total += (m_order[i] * m_price[i]);    
    }
}

void Restaurant::Check_Discount() {
    if(m_coupon == true){
        std::cout << "할인전 가격은 " << m_total << "입니다." << std::endl;
        std::cout << "할인쿠폰을 사용합니다.\n";
        m_total *= 0.8;
    } else {
        std::cout << "할인쿠폰을 사용하지 않습니다. \n";
    }
}

int main() {
    Restaurant r1(1, 1, 1, 1, true);
    Restaurant r2;
    
    r1.Show_Food();
    r1.Num_Order();
    r1.Check_Money();
    r1.Check_Discount();
    std::cout << "1번째 팀의 총 계산 금액은"  << r1.Get_Total()<< "입니다." << std::endl;

    r2.Show_Food();
    r2.Num_Order();
    r2.Check_Money();
    r2.Check_Discount();
    std::cout << "2번째 팀의 총 계산 금액은"  << r2.Get_Total()<< "입니다." << std::endl;
    return 0;
}