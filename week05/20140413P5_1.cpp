#include<iostream>

class Circle{
    int m_radius;
public:
    Circle(int radius);
    double Get_Area();
};

Circle::Circle(int radius) {
    m_radius = radius;
}

double Circle::Get_Area(){
    return 3.14 * m_radius * m_radius;
}

int main() {
    Circle ob[4] = {1, 2, 3, 4};
    Circle *p;
    p = ob;

    std::cout << "객체로 맴버함수 접근" << std::endl;
    for(int i = 0; i < 4; i++){
        std::cout << ob[i].Get_Area() << " "; 
    }
    std::cout << std::endl;

    std::cout << "객체 포인터로 맴버 함수 접근" << std::endl;
    for(int i = 0; i < 4; i++){
        std::cout << p->Get_Area() << " ";
        p++;
    }
    std::cout << std::endl;

    system("PAUSE");
    return 0;
}