#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person {
    char* name;
    int id;
public:
    Person(const Person& p){
        this-> id = p.id;
        int len = strlen(p.name);
        this->name = new char[len + 1];
        strcpy(this -> name, p.name);
    }
    
    Person(int id, char* name) {  
        this->id = id;
        int len = strlen(name);
        this->name = new char[len + 1];
        strcpy(this->name, name);
    }
    
    ~Person(){
        if (name)
        delete[] name;
    }
 
    void changeName(char* name){
        if (strlen(name) > strlen(this->name))
        return;
        strcpy(this->name, name);
    }
    
    void show(){
        cout << id << ',' << name << endl;
    }
};

int main(){
    Person fa(1, "Kim");
    Person da(fa); //Person da = fa; 와 같은 표현 

    cout << "-----da 객체생성-----" << endl;
    fa.show();
    da.show();
    cout << endl;

    da.changeName("Lee");
    cout << "-----da 이름을 Lee로 변경-----" << endl;
    fa.show();
    da.show();


 return 0;
}