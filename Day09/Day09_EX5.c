#include <stdio.h>

int main(void) {
	// ������(����Ű�°�) : ����(����)�� ��ġ

	int a = 100;
	int * numPtr; // �ּ�(��ġ)�� ���� �� �ִ� ����
				// pointer
	numPtr = &a;

	printf("%p", numPtr);

	return 0;
}