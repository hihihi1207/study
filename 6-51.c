#include <stdio.h>

int main(void){
    int Score, Num; // Score는 점수 Num은 점수에서 10 나눈 수
    char Grade; // Grade는 학점
    printf("점수를 입력하세요 : ");
    scanf("%d", &Score); // 점수 입력받기

    if (Score < 0 || Score > 100) // 점수가 0보다 작거나 100보다 클때
    {
        printf("잘못된 점수입니다.\n"); // 잘못된 점수입니다 출력
        return 0; // 프로그램 종료
    }

    Num = Score/10;  // 점수를 10으로 나눈 몫을 Num에 저장

    switch (Num) 
    {
    case 10: // 점수가 100일때
    case 9: // 점수가 90일때
        Grade = "A";
        break;
    case 8: // 점수가 80일때
        Grade = "B"; 
        break;
    case 7: // 점수가 70일때
        Grade = "C"; 
        break;
    case 6: // 점수가 60일때
        Grade = "D"; 
        break;
    default: // 점수가 60보다 작을때
        Grade = "F";
        break;
    }
}