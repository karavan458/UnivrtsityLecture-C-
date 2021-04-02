#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<time.h>

using namespace std;

class Date{
    int m_year, m_month, m_day;

    public:
    void Set_Today();
    void Print_Date();
};

void Date::Set_Today(){
    time_t current_date;
    time(&current_date);

    tm *today = localtime(&current_date);

    m_year = today->tm_year + 1900;
    m_month = today->tm_mon + 1;
    m_day = today->tm_mday;
}

void Date::Print_Date(){
    cout << m_year << "년 " << m_month << "월 " << m_day << "일";
}

int main() {
    Date d1;
    d1.Set_Today();

    cout<<"오늘 날짜는 ";
    d1.Print_Date();
    cout<< "입니다.\n";
    system("PAUSE");

    return 0;
}