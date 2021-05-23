#include<iostream>

using namespace std;

class A {
private:
    int a;

public:
    void set(int x) {
        a = x;
    }

    int get() {
        return a;
    }   
};

class B : public A {
public:
    void show() {
        cout << get() << endl;
    }
};

int main() {
    B ob1;
    
    ob1.set(10);
    cout << ob1.get() << endl;
    
    ob1.show();
    return 0;
}