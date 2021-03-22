#include<iostream>

using namespace std;

void NoSwap(int x, int y){
    int temp;
    temp = x; 
    x = y;
    y = temp;
}

void Swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a ,b;
    cout << "두 수를 입력하세요 : ";
    cin >> a >> b;

    NoSwap(a, b);
    cout << "NoSwap 호출 후 결과 a = " << a << ", b = " << b << endl;
    
    Swap(&a, &b);
    cout << "Swap 호출 후 결과 a = " << a << ", b = " << b << endl;
    return 0;
}