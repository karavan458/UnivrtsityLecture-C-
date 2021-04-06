#include<iostream>
//C++의 객체는 참조변수가 아닌 값의 변수로 생성된다. 
class Point {
    int x, y;

public :
    Point() {
        x = 0;
        y = 0;
    }

    Point(int a, int b){
        x = a;
        y = b;
    }

    void ShowPoint(){
        std::cout<<x<<","<<"y"<<std::endl;
    }
};
//c++에서 객체 포인터와 객체 배열은 접근지정자 private 는 직접적으로 접근할 수 없다.
int main(){
    Point p;
    p.ShowPoint();

    Point p2(100, 200);
    p2.ShowPoint();

    //객체 포인터
    Point *p3 = &p2;
    return 0;
}