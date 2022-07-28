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
	// 리스트가 꽉차진 않았는지, position이 배열의 범위에 들어오는지)
	if (isFull(L) == 0 && position >= 0 && position <= L->size) {
		// 원소 기존 7개짜리에다가 제일 마지막 꼬리에 붙
		// size = 7
		// 배열 번호 : 0 ~ 6번
		// position : 7번
		for (int i = L->size - 1; i >= position; i--) {
			L->list[i + 1] = L->list[i]; // 한칸 미룸
		}

		L->list[position] = item;
		L->size++; // 원소의 개수 + 1
	}	
}

void delete(ArrayList* L, int position) {
	// 비었는지 안비었는지 && position이 배열 안에 들어오는지
	if (isEmpty(L) == 0 && position >= 0 && position <= L->size - 1) {
		for (int i = position; i < L->size; i++) {
			L->list[i] = L->list[i + 1]; // 하나씩 앞으로 땡겼어요
			// 5개, 0~4
			// list[5] = list[6]
		}
		L->size--; // 원소 개수 -1
	}	
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

	init(&arrList); // 초기화

	/* 테스트용 데이터 3개 삽입 */
	add(&arrList, 0, 7);
	add(&arrList, 1, 8);
	add(&arrList, 2, 10);

	display(&arrList); // 3개 잘 들어있는지 확인 출력!
	printf("******************\n");

	add(&arrList, 1, 170);
	display(&arrList); // 4개 잘 들어있는지 확인 출력!
	printf("******************\n");

	delete(&arrList, 1);
	display(&arrList); // 3개 잘 들어있는지 확인 출력!
	printf("******************\n");
	return 0;
}
