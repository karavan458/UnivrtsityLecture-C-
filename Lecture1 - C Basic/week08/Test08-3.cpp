#include<stdio.h>

int main() {
    int kor, math, eng;
    double avg;

    printf("국영수 순대로 성적 입력 : ");
    scanf("%d %d %d", &kor, &math, &eng);

    avg = ((double)kor + math + eng) / 3;

    if(avg >= 90){
        printf("A");
    }
    else if(avg >= 80){
        printf("B");
    }
    else if(avg >= 70){
        printf("C");
    }
    else{
        printf("D");
    }

    return 0;
}