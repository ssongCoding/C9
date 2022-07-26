#include <stdio.h>

typedef struct {
	int list[100];
	int size; // 원소 개수
} ArrayList;

/*
	리스트 관련 함수
	1) init(ArrayList) : 초기화
	2) isEmpty(ArrayList) : 비었는지 확인
	3) isFull(ArrayList) : 꽉 찼는지 확인
	4) add(ArrayList, position, item) : 원소 삽입
	5) delete(ArrayList, position) : 원소 제거
	6) display(ArrayList) : 전체 원소 출력
*/

// 1) 초기화
void init(ArrayList* L) { // 포인터를 받아서 값을 바꿔줘야해.
	L->size = 0; // 구조체 포인터의 요소를 사용
	             // ->
}

// 2) isEmpty(ArrayList) : 비었는지 확인
int isEmpty(ArrayList* L) { // 사실, 매개변수로
	                        // 그냥 변수 받아도 되는데,
	                        // 함수 호출 시 통일감 주려고
	                        // 포인터로 통일함
	if (L->size == 0) {
		return 1; // true
	} else {
		return 0; // false
	}
}

// 3) isFull(ArrayList) : 꽉 찼는지 확인
int isFull(ArrayList* L) { 
	if (L->size == 100) {
		return 1;
	}
	else {
		return 0;
	}
}

// 4) add(ArrayList, position, item) : 원소 삽입
void add(ArrayList* L, int position, int item) {

}


// 6) display(ArrayList) : 전체 원소 출력
void display(ArrayList* L) {
	if (isEmpty(L) == 0) { // 비어있지 않으면,
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