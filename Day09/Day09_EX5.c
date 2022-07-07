#include <stdio.h>

int main(void) {
	// 포인터(가리키는거) : 상자(변수)의 위치

	int a = 100;
	int * numPtr; // 주소(위치)를 담을 수 있는 변수
				// pointer
	numPtr = &a;

	printf("%p", numPtr);

	return 0;
}