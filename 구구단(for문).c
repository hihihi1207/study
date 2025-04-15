#include <stdio.h>

int main(void) {
	for (int i = 1; i <= 9; i++) {
		for (int a = 0; a <= 9; a++) {
			printf("%d x %d = %d \n", i, a, i * a);
		}
	}
}