#include<iostream>

using namespace std;

//1. 사물을 갖고 데이터 적인 측면과 기능적인 측면을 정의하자(추상화 작업)
//2. 추상화돈 것을 토대로 class를 정의(클래스화 과정)

/*
필드 : 위치, 체력, 레벨, 경험치, 보호막, 보유한 무기 
메서드 : 걷기, 점프, 시점변환, 적공격, 공격당함, 방어하기, 죽기
*/

//젤다 클래스 정의 = 클래스 선언부 
//클래스가 정의 되면 클래스 내부는 접근제어가 전부 private됨
class zelda{
    //필드구현 = 멤버변수
    // 접근제어 키워드(default == private임)     
    int x, y, hp, level, shield;
    double exp;

    //메서드 구현 = 멤버함수
public: // 접근제어 키워드
    // 간단하게 구현하는 거 아니면 클래스 내부에서 메서드 정의는 안한다. 
    void walk(){
        cout<<"걷는다."<<endl;
    } 
    void jump();
    void turn();
    void attack();
    
    //생성자 함수 -> 만약 없다면 컴파일러가 기본적으로 생성해줌 = 디폴트 생성자 함수
    //반환값도 존재하지 않음 (void도 존재하지 않음)
    //객체를 초기화 하기 위해 생성함
    //생성자는 클래스와 이름이 항상 같다
    zelda(){
        x = 0;
        y = 0;
        hp = 100;
        exp = 100.0;
    }
    
    // 매개변수를 통해 값을 초기화할수 있게 선택지를 줌
    zelda(int x1, int y1){
        x = x1;
        y = y1;
        hp = 100;
        exp = 100.0;
    } 

    //객체 소멸시 (생성자와 반대되는 개념)
    //1. 소멸자 호출 -> 객체가 소멸되는 시점에서 자동으로 호출되는 함수 
    //2. 메모리 반환 
    ~zelda(){
        cout << "소멸자 함수 호출" << endl;
    }

};
// 클래스 구현부
void zelda::jump() {} 
void zelda::turn() {} 
void zelda::attack() {} 

int main() {
    //클래스 선언(자료형으로 변수를 만들듯이 클래스명 객체명)
    zelda link;
    //1. 메모리 할당
    //2. 생성자 호출 : 객체를 초기화 하기 위해서 호출되는 함수 컴파일러가 자동으로 호출되는 멤버 함수 
    link.walk();
    link.jump();
    return 0;
}