#include <stdio.h>

/*
	���� �Լ�
	1) init(Stack*) : �ʱ�ȭ
	2) push : item�� ���ÿ� ����
	3) pop : item�� ���ÿ��� ����
	4) peek : item�� ���� �������� ��
	5) isFull(Stack*) : ������ �� á����
	6) isEmpty(Stack*) : ������ �� ����ִ���
	7) display : ���� item�� �� ���
*/

typedef struct {
	int stack[5]; // ���� ������ ���� �迭
	int size; // ���� ���� ����; size -1 = ���� ���� �ִ� ��
} Stack;

// 1) �ʱ�ȭ
void init(Stack* S) {
	S->size = 0;
}

// 2) push : item�� ���ÿ� ����
void push(Stack* S, int item) {
	// �� ������ ������, ���� �߰� ����
	if (isFull(S) == 0) {
		S->stack[S->size] = item;
		//******������ �� ���� ������ �� �ÿ���µ�..?
		//******�ٵ� �Ǵ� ô �ϰ� ���ſ���...?
	} else {
		printf("������ �� ����, ���� ���� ������ �����մϴ�.");
	}
}

// 3) pop : item�� ���ÿ��� ����
void pop(Stack* S) {
	// ������� ������, 
	if (isEmpty(S) == 0) { // isEmpty(S) != 1
						   // !isEmpty(S)
		S->size--;
	} else {
		printf("������ ����־, ������ item�� �����ϴ�.");
	}
}

// 4) peek : item�� ���� �������� ��
int peek(Stack* S) {
	if (isEmpty(S) == 1) {
		// isEmpty(S) != 1 >> !isEmpty(S)
		// isEmpty(S) == 1 >> isEmpty(S)
		printf("������ ����ֽ��ϴ�.\n");
		// TODO :: ���߿� �ٽ� ����
	} else {
		return S->stack[S->size - 1];
	}	
}

// 5) isFull(Stack) : �� á���� Ȯ��
int isFull(Stack* S) {
	if (S->size == 5) {
		return 1;
	}
	else {
		return 0;
	}
}

// 6) isEmpty(Stack*)
int isEmpty(Stack* S) {
	if (S->size == 0) {
		return 1;
	} else {
		return 0;
	}
}

// 7) display
void display(Stack* S) {
	if (isEmpty(S) != 1) { // ������� ������
						   // == !isEmpty(S)
		for (int i = 0; i < S->size; i++) {
			printf("stack[%d] \ %d\n", i, S->stack[i]);
		}
	} else {
		printf("������ ����־, ����� item�� �����ϴ�.\n");
	}
}

int main() {

	return 0;
}