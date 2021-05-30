#include<iostream>
using namespace std;

class Animal {
public :
    virtual void bark() {
        cout << "짖기" << endl;
    }
    virtual ~Animal() {
        cout << "animal 소멸자";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "멍멍" << endl;
    }
    ~Dog() {
        cout << "Dog 소멸자";
    }
};

class Cat : public Animal {
public:
    void bark() {
        cout << "야옹" << endl;
    }
};

class Pig : public Animal {
public:
    void bark() {
        cout << "꿀꿀" << endl;
    }
};

int main() {
    Animal *pointer;
    //Dog pug;
    
    //1. 업캐스팅 
    pointer = new Dog;
    delete pointer;
    
    //동물 포인터가 가르키는 대상은 강아지 이지만
    //업캐스팅 된 포인터는 부모의 맴버에만 접근 가능
    //pointer-> bark();   //정적 바인딩

    //2. 다운캐스팅
    //((Dog*)pointer)->bark();    //동적 바인딩 
    

    //3. 업캐스팅된 포인터가 가르키는 대상의 함수가 호출되게 하는 것이 가능함
    /*
    다시 말해 pointer가 가르키는 것이 dog라면 dog의 bark함수가 호출될수 
    있도록 정적 바인딩이 아닌 동적바인딩이 이루어질수 있게 

    동적 바인딩 : 런타임에 호출되는 함수가 정해질 수 있도록 하는 것 
    *virtual 키워드 : 동적바인딩 지시 
    */
    return 0;
}