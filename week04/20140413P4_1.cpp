#include<iostream>
using namespace std;

class myclass{
    int data;

    public:
    myclass(int x);
    int get();
};

myclass::myclass(int x){
    data = x;
}

int myclass::get(){
    return data;
}

int main() {
    myclass ob(120);
    cout <<ob.get()<<endl;
    system("pause");
    
    return 0;
}