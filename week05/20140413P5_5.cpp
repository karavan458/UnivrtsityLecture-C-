#include<iostream>
#include<string>

using namespace std;

int main() { 
    string s;
    cout << "여러줄의 문자열을 입력하세요. 입력의 끝은 &입니다. " << endl;
    getline(cin, s, '&');
    cin.ignore();
    
    string f, r;
    cout<< endl << "find : ";
    getline( cin, r, '\n');
    cout<< "replace : ";
    getline(cin, r, '\n');

    int startIndex = 0;
    int fIndex = 0;

    while(fIndex != -1){
        fIndex = s.find(f, startIndex);

        if(fIndex != -1){
            s.replace(fIndex,f.length(), r);
        }

        startIndex = fIndex + r.length();
    }
    cout << s << endl;

    system("PAUSE");
    return 0;
}