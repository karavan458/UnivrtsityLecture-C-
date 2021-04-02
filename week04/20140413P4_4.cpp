#include<iostream>
#include<string>
#include<string.h>

//맥북에서는 conio.h 헤더를 사용할수 없으므로 C언어에서 사용하던 코드를 사용했습니다.
#include<stdio.h>
#include<unistd.h>
#include<termios.h>

int getch(void)
{
    struct termios oldt, newt;
    int ch;
    tcgetattr( STDIN_FILENO, &oldt );
    newt = oldt;
    newt.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newt );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
    return ch;
}
// getch()를 사용하기 위해 작성

using namespace std;

class Dogs{
    int m_year;
    char m_breed[20];

    public:
    Dogs(const char *br, int yr);
    int Get_Year();
    void Print_Breed();
};

Dogs::Dogs(const char *br, int yr){
    strcpy(m_breed, br);
    m_year = yr;
}

int Dogs::Get_Year(){
    return m_year;
}

void Dogs::Print_Breed(){
    cout << "품종 : " << m_breed << endl;
}

int main() {
    Dogs toto("저먼 셰퍼드", 4), chi("그레이 하운드", 2);
    toto.Print_Breed();

    //객체 toto 나이 출력
    cout<<"저먼 셰퍼드의 나이 = " << toto.Get_Year() << endl;

    chi.Print_Breed();

    //객체 chi 나이 출력
    cout<<"그레이 하운드의 나이 = " << chi.Get_Year() << endl;

    getch();
    return 0;

}



