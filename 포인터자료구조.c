#include <stdio.h>
#include <stdlib.h> // malloc

//typedef struct BOX BOX;

struct BOX { // ����ü
	int num; // ���� ����
	struct BOX* nextBox; // ���� Box�� �ּ�
};

int main() {
	/*
	struct BOX box1;
	box1.num = 10;

	struct BOX box2;
	box2.num = 20;

	box1.nextBox = &box2;
	printf("%d", box1.nextBox->num);
	*/

	struct BOX box3;
	box3.num = 30;
	box3.nextBox = malloc(sizeof(struct BOX));
	box3.nextBox->num = 40;

	/*** �����Ҵ� ***/
	char* arr = malloc(7 * sizeof(char));
	// 7ĭ * int ����

	int* arr2 = malloc(sizeof(int));
	// int ���� 1��

	return 0;
}