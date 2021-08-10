#include<stdio.h>

int main() {
    char sel;

    printf("M은 오전, A는 오후, E는 저녁 \n");
    printf("입력 : ");
    scanf("%c", & sel);

    switch(sel) {
    case 'M':
    case 'm':
        printf("Morning\n");
        break;

    case 'A':
    case 'a':
        printf("Afternoon\n");
        break;
    
    case 'E': case 'e':
        printf("Evening\n");
    }

    return 0;
}