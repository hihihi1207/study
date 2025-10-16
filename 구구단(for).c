#include <stdio.h>

int main(void) {
	for (int i = 2; i <= 9; i++)// i = 구구단 앞부분에 들어가는 수    for문 해석 i=1이고 안에있는 코드를 실행하고 i에 1을 더한다 i가 9보다 작거나 같을때까지 반복
		{
		printf("%d단",i);
		for (int a = 1; a <= 9; a++) // a = 구구단 뒷부분에 들어가는 수        for문 해석  a는 0이고 코드를 실행하고 a에 1을더한다  a가 9보다 작거나 같을때까지 반복
		{
			printf("%d x %d = %d \n", i, a, i * a);    
		} // 이부분에서 2번째 for문 끝나고 첫번째 for문으로 올라감
	}
}
