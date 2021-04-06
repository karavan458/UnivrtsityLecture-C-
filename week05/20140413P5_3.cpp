#include<iostream>

#define SIZE 10

class Stack{
    char m_stack[SIZE];
    int m_top_index;

public:
    void Init();
    void Push(char ch);
    char Pop();
    void Show_Data();
};

void Stack::Init(){
    m_top_index = 0;
}

void Stack::Push(char ch){
    if(m_top_index == SIZE){
        std::cout << "Stack is full";
        return ;
    }
    m_stack[m_top_index] = ch;
    m_top_index++;
}

char Stack::Pop() {
    if(m_top_index == 0){
        std::cout << "Stack id empty";
        return 0;
    }
    m_top_index--;
    return m_stack[m_top_index];
}

void Stack::Show_Data(){
    std::cout << "스택에 저장된 데이터 : ";

    for(int i = 0; i < m_top_index; i++){
        std::cout <<m_stack[i] << " ";
    } 
    std::cout << "\n";
}

int main() {
    Stack *s1 = new Stack;
    s1->Init();

    s1->Push('a');
    s1->Push('b');
    s1->Pop();
    s1->Push('c');
    s1->Push('x');

    s1->Show_Data();

    delete s1;

    system("PAUSE"); 
    return 0;
}