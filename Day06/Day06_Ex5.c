#include <stdio.h>

int main(void) {

	int num = 2;
	int num2 = num++ + 2; // 2 + 2 = 4
						  // num = 3
	int num3 = --num + 1; // (num = 2) 3

	printf("%d\n", num++); // 2
	printf("%d\n", ++num2);// 5
	printf("%d\n", num3--);// 3 (->2)

	return 0;
}