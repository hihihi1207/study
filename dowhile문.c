#include <stdio.h>
int main(void) {
    int Count,Num,Sum; // Num는 입력받은 수(반복할 횟수) Count은 반복한 횟수 Sum은 합계
    printf("반복횟수를 입력하세요 : ");
    scanf_s("%d", &Num); // 반복횟수 입력받기
    if (Num < 0) // 반복횟수가 0보다 작을때
    {
        printf("잘못된 횟수입니다.\n"); // 잘못된 횟수입니다 출력
        return 0; // 프로그램 종료
    }
    Sum = 0; // sum을 0으로 초기화
    Count = 1; // num을 0으로 초기화
    do // do while문 시작
    {
        Sum += Count; // sum에 num을 더함
        printf("%d회 반복 누적합: %d \n", Count, Sum);
        Count++; // num에 1을 더함
    }while (Num >= Count); // 반복한 횟수가 입력받은 수보다 작거나 같을때 반복
}
