#include <stdio.h>

void minus(int a, int b) {
	if (a == 0 || b == 0) { // a != 1 || b != 1 , !a || !b
		return; // void일 때, 함수를 빠져나가는 용도
	}
	
	printf("%d %d\n", a, b);

	minus(a - 1, b - 1);
}

int main() {
	minus(5, 3);
	return 0;
}