#include<iostream>
using namespace std;

class Point{
    int m_x, m_y;

    public:
    void Set_Point(int x, int y);
    void Print_Coord();
    void Is_Equal(Point& p);
};

void Point::Set_Point(int x, int y){
    m_x = x;
    m_y = y;
}

void Point::Print_Coord() {
    cout<<"(" << m_x << ", " << m_y << ")";
}

void Point::Is_Equal(Point& p){
    
    if(m_x == p.m_x && m_y == p.m_y){
        Print_Coord();
        cout<<"과";
        p.Print_Coord();
        cout<<"은 좌표가 같습니다.\n";
    } else{
        Print_Coord();
        cout<<"과";
        p.Print_Coord();
        cout <<"은 좌표가 다릅니다.\n";
    }
}

int main() {
    Point p1, p2;
    p1.Set_Point(30, 30);
    p2.Set_Point(40, 40);

    cout<<"p1의 좌표는 ";
    p1.Print_Coord();
    cout<<endl;

    cout<<"p2의 좌표는 ";
    p2.Print_Coord();
    cout << endl;

    p1.Is_Equal(p2);
    p1.Is_Equal(p1);


    return 0;

}