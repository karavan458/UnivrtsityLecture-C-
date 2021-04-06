#include<iostream>
#include<math.h>

using namespace std;
class Vector{
    double m_x, m_y;

public:
    Vector(double x, double y);
    double Get_Magnitude();
};

Vector::Vector(double x, double y){
    m_x = x;
    m_y = y;
}

double Vector::Get_Magnitude() {
    return sqrt(m_x * m_x + m_y * m_y);
}

int main() {
    std::cout.setf(ios::fixed | ios::showpoint);
    std::cout.precision(2);

    Vector *p;
    p = new Vector(3.0, 4.0);

    if(!p){
        std::cout<< "동적 메모리 할당 에러\n";
        return 1;
    }

    std::cout << "p의 벡터의 크기는  : "<< p->Get_Magnitude() << std::endl;

    Vector ob1(5.0, 6.0);
    std::cout << "op1의 벡터의 크기는 : " << ob1.Get_Magnitude() << std::endl;

    Vector ob2[3] = { Vector(2.0, 1.0), Vector(2.0, 2.0), Vector(2.0, 3.0) };

    for(int i = 0; i < 3; i++){
        std::cout << "ob2[" << i << "]의 백터의 크기는 : " << ob2[i].Get_Magnitude() << std::endl;
    }

    delete p;

    system("PAUSE");
    return 0;
    

}