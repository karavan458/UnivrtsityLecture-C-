#include<iostream>
#include<math.h>

using namespace std;

class Point{
    int m_x;
    int m_y;
    double Length() {
        return(sqrt(double(m_x * m_x + m_y * m_y)));
    }
public:
    Point(int x, int y) {
        m_x = x;
        m_y = y;
    }
    void ShowPoint();
    friend void ShowMe(Point &p);    // 프렌드 함수로 정의
};

void Point::ShowPoint() {
    cout << "객체 멤버함수로 (" << m_x << ',' << m_y << ')' << "   Length = " << Length() << endl;      // length 함수 호출
}

void ShowMe(Point &p) {     // 프렌드 함수 구현(객체의 내용을 출력)
    cout << "프렌드 함수로 (" << p.m_x << ',' << p.m_y << ')' << "   Length  = " << p.Length() << endl;    // length 함수 호출
}

int main() {
    Point obj(4,5);    // Point 클래스로 obj 라는 객체 선언(초기 값 4, 5)
    obj.ShowPoint();    // 객체 멤버 함수를 사용하여 객체의 내용을 출력
    ShowMe(obj);    // 프렌드 함수를 사용하여 객체의 내용을 출력

    system("PAUSE");
    return 0;
}