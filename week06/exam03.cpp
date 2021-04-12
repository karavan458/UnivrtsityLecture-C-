#include<iostream>

using namespace std;

/* 
복사생성자
1. 값의 의한 호출시 매개변수로 객체가 전달될 때
2. 객체가 생성되자 마자 다른 객체를 이용해 초기화되는 객체의 경우
3. 함수의 반환값으로 객체가 반환되는 경우
*/

class Point{
    int m_x;

public:
    Point(){
        cout<< "생성자 함수 호출" << endl;
        m_x =10;
    }

    Point(int a){
        m_x = a;
    }
    
    void Set_Point(int num){
        m_x = num;
    }
    
    //매개변수를 객체로 받는 함수
    void CopyPoint(Point p){
        p.Set_Point(100);
        cout << p.m_x << endl;
    }

    ~Point(){
        cout << "소멸자 호출" << endl;
    }

    void show() {
        cout << m_x << endl;
    }
    
    Point(const Point& p) {
        cout << "복사 생성자 호출" << endl;
    }
};

Point getPoint() {
    Point p;
    p.Set_Point(100);
    return p;
}

int main() {

    Point p;
    p.CopyPoint(p);
    p = getPoint();

    //객체 치환 복사생성자 호출 X
    Point p2;
    p2 = p;

    //복사생성자 호출 O
    Point p3 = p;
    
    
    return 0;
}


