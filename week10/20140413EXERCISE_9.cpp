#include<iostream>

using namespace std;

// Time 클래스 정의
class Time{
    int hour, min, sec;             //시, 분, 초 맴버 변수 
public:
    Time() {}                       //디폴트 생성자 
    Time(int h, int m, int s){      //매개변수 생성자
        hour = h;
        min = m;
        sec = s;
    }

    void OutTime() {                //시간을 출력해주는 맴버 함수 
        cout << hour << "시" << min << "분" << sec << "초";
    }

    //오퍼레이터 오버로딩(+)
    Time operator+(Time& other){
        Time t;                     //저장 받을 객체 생성
        t.sec = sec + other.sec;    //저장 받을 객체의 맴버변수 초 (저장받을 객체의 초 = 피연산 객체1의 초 + 피연산 객체2의 초)
        t.min = min + other.min;    //저장 받을 객체의 맴버변수 분 (저장받을 객체의 분 = 피연산 객체1의 분 + 피연산 객체2의 분)
        t.hour = hour + other.hour; //저장 받을 객체의 맴버변수 시 (저장받을 객체의 시 = 피연산 객체1의 시 + 피연산 객체2의 시)

        t.min += t.sec / 60;        //60진수로 초의 캐리를 분에 저장
        t.sec %= 60;                //초를 60진수로 저장
        t.hour += t.min / 60;       //60진수로 분의 캐리를 시에 저장
        t.min %= 60;                //분을 60진수로 저장
        return t;                   //저장된 객체를 반환
    }

    Time operator- (Time& other){
        Time t;
        t.hour = hour - other.hour;
        t.min = min - other.min;
        t.sec = sec - other.sec;
        
        if( t.min < 0 ){
            t.hour -= 1;
            t.min = 60 - other.min + min;
        }

        if( t.sec < 0 ){
            t.min -= 1;
            t.sec = 60 - other.sec + sec;
        }
        return t;
    }
};

int main() {
    Time t1(1, 10, 30);
    Time t2(2, 20, 40);
    Time t3;

    t3 = t1 + t2;
    t3.OutTime();
    cout << endl;

    Time t4(3, 10, 30);
    Time t5(1, 20, 20);

    t3 = t4 - t5;
    t3.OutTime();
    cout << endl;

    return 0;
}