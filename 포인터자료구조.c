#include <stdio.h>
#include <stdlib.h> // malloc

//typedef struct BOX BOX;

struct BOX { // 구조체
	int num; // 숫자 변수
	struct BOX* nextBox; // 다음 Box의 주소
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

	/*** 동적할당 ***/
	char* arr = malloc(7 * sizeof(char));
	// 7칸 * int 상자

	int* arr2 = malloc(sizeof(int));
	// int 상자 1개

	return 0;
}