#include<iostream>

using namespace std;

class myclass{
    static int m_data;

public :
    void SetData(int n){
        m_data = n;
    }

    int GetData(){
        return m_data;
    }
};

int myclass::m_data;

int main() {
    myclass ob1, ob2;
    
    ob1.SetData(100);
    cout << "ob1의 m_data 값은 " << ob1.GetData() << "\n";
    cout << "ob2의 m_data 값은 " << ob2.GetData() << "\n";
    
    return 0;
}