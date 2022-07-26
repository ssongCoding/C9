#include <stdio.h>

typedef struct {
	int list[100];
	int size; // ���� ����
} ArrayList;

/*
	����Ʈ ���� �Լ�
	1) init(ArrayList) : �ʱ�ȭ
	2) isEmpty(ArrayList) : ������� Ȯ��
	3) isFull(ArrayList) : �� á���� Ȯ��
	4) add(ArrayList, position, item) : ���� ����
	5) delete(ArrayList, position) : ���� ����
	6) display(ArrayList) : ��ü ���� ���
*/

// 1) �ʱ�ȭ
void init(ArrayList* L) { // �����͸� �޾Ƽ� ���� �ٲ������.
	L->size = 0; // ����ü �������� ��Ҹ� ���
	             // ->
}

// 2) isEmpty(ArrayList) : ������� Ȯ��
int isEmpty(ArrayList* L) { // ���, �Ű�������
	                        // �׳� ���� �޾Ƶ� �Ǵµ�,
	                        // �Լ� ȣ�� �� ���ϰ� �ַ���
	                        // �����ͷ� ������
	if (L->size == 0) {
		return 1; // true
	} else {
		return 0; // false
	}
}

// 3) isFull(ArrayList) : �� á���� Ȯ��
int isFull(ArrayList* L) { 
	if (L->size == 100) {
		return 1;
	}
	else {
		return 0;
	}
}

// 4) add(ArrayList, position, item) : ���� ����
void add(ArrayList* L, int position, int item) {

}


// 6) display(ArrayList) : ��ü ���� ���
void display(ArrayList* L) {
	if (isEmpty(L) == 0) { // ������� ������,
		for (int i = 0; i < L->size; i++) {
			printf("list[%d] = %d\n", i, L->list[i]);
		}
	}
}

int main() {
	ArrayList arrList;

	init(&arrList);
	isEmpty(&arrList);
	
	return 0;
}