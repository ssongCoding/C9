#include <stdio.h>
#include <stdlib.h> // ���̺귯��!

typedef struct {
	int num;
	Box* nextBox;
}Box;

int main() {

	Box box1;
	box1.num = 10;
	// box1�� �� ��� �־��? box2�� �ּҸ� �����ѿ�
	Box box2;
	box2.num = 20;

//	Box box[] = { box1, box2 };

	int num1 = 10;
	int* ptr1 = &num1;
//	Box* nextPtr = &box2;

	printf("%d\n", num1);
	printf("%p\n", ptr1);
	printf("%d\n", *ptr1);

	return 0;
}