#include<iostream>

using namespace std;

class Point{
    int m_x;
    int m_y;
public:
    // 매개변수가 있는 생성자 함수 (두 매개변수의 디폴트 인수로 0을 사용)
    Point(int x = 0, int y = 0);
    void Get_XY(int &a, int &b);
    Point operator+(Point ob2);
    Point operator=(Point ob2);
};

Point::Point(int x, int y) {
    m_x = x;
    m_y = y;
}

void Point::Get_XY(int &a, int &b) {
    a = m_x;
    b = m_y;
}

Point Point:: operator+(Point ob2) {
    Point temp;
    temp.m_x = this->m_x + ob2.m_x;
    temp.m_y = this->m_y + ob2.m_y;
    return temp;
}

Point Point:: operator=(Point ob2) {
    this->m_x = ob2.m_x;
    this->m_y = ob2.m_y;
    return *this; //자기자신을 반환한다는 의미
}

int main() {
    Point ob1(5, 4), ob2(4, 7), ob3, ob4;
    int x, y;

    ob3 = ob1 + ob2; //ob3 = b1.operator+(ob2); 와 같음
    ob3.Get_XY(x, y);
    cout << "ob3 의 x 는 " << x << " y 는 " << y << "\n";
    
    ob4 = ob3 = ob2 = ob1;
    ob4.Get_XY(x, y);
    cout << "ob4 의 x 는 " << x << " y 는 " << y << "\n";

    system("PAUSE");
    return 0;
}