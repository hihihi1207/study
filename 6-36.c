#include<stdio.h>

int main(void){
    char blood;
    printf("A형 : A 또는 a\n");
    printf("B형 : B 또는 b\n");
    printf("AB형 :  C 또는 c\n");
    printf("O형 : O 또는 o\n");
    printf("%c",&blood, sizeof(blood));  //혈액형 받기

    if(blood == 'A' || blood == 'a')  // || = or   ||가 들어가면 앞에있는 조건이나 뒤에있는 조건이 하나라도 맞으면 true
    {
        printf("A형 입니다.\n");
        printf("부드럽고 섬세한 성향\n");
    }
    else if(blood == 'C' || blood == 'c'){
        printf("AB형 입니다.\n");
        printf("예술적인 감각을 가진 성향\n");
    }
    else if(blood == 'O' || blood == 'o'){
        printf("O형입니다.\n");
        printf("활발하고 쾌활한 성향\n");
    }
    else if(blood == 'B' || blood == 'b'){
        printf("B형입니다.\n");
        printf("주위 변화에 민감한 성향\n");
    }
    else   // else는 if문, else if문이 모두 false일때 실행되는 부분
    {
        printf("허용하지 않는 문자입니다.\n");
        printf("대소 문자 구별 없이 A,B,C,O만 허용됩니다.\n");
        printf("프로그램을 다시 시작하세요.\n");
    }
}