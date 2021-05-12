#include<iostream>

using namespace std;

class Time{
    int hour, min, sec;
public:
    Time() {}
    Time(int h, int m, int s){
        hour = h;
        min = m;
        sec = s;
    }

    void OutTime() {
        cout << hour << "시" << min << "분" << sec << "초";
    }

    Time operator+(Time& other){
        Time t;
        t.sec = sec + other.sec;
        t.min = min + other.min;
        t.hour = hour + other.hour;

        t.min += t.sec / 60;
        t.sec %= 60;
        t.hour += t.min / 60;
        t.min %= 60;
        return t;
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
    Time t5(1, 20, 40);

    t3 = t4 - t5;
    t3.OutTime();
    cout << endl;

    return 0;
}