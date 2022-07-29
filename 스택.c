#include <stdio.h>

/*
	스택 함수
	1) init(Stack*) : 초기화
	2) push : item을 스택에 삽입
	3) pop : item을 스택에서 제거
	4) peek : item의 값을 가져오는 거
	5) isFull(Stack*) : 스택이 꽉 찼는지
	6) isEmpty(Stack*) : 스택이 텅 비어있는지
	7) display : 스택 item들 다 출력
*/

typedef struct {
	int stack[5]; // 스택 역할을 해줄 배열
	int size; // 스택 원소 개수; size -1 = 제일 위에 있는 값
} Stack;

// 1) 초기화
void init(Stack* S) {
	S->size = 0;
}

// 2) push : item을 스택에 삽입
void push(Stack* S, int item) {
	// 꽉 차있지 않으면, 값을 추가 해줌
	if (isFull(S) == 0) {
		S->stack[S->size] = item;
		//******여러분 나 여기 사이즈 안 늘여줬는데..?
		//******다들 되는 척 하고 간거에요...?
	} else {
		printf("스택이 꽉 차서, 값을 넣을 공간이 부족합니다.");
	}
}

// 3) pop : item을 스택에서 제거
void pop(Stack* S) {
	// 비어있지 않으면, 
	if (isEmpty(S) == 0) { // isEmpty(S) != 1
						   // !isEmpty(S)
		S->size--;
	} else {
		printf("스택이 비어있어서, 제거할 item이 없습니다.");
	}
}

// 4) peek : item의 값을 가져오는 거
int peek(Stack* S) {
	if (isEmpty(S) == 1) {
		// isEmpty(S) != 1 >> !isEmpty(S)
		// isEmpty(S) == 1 >> isEmpty(S)
		printf("스택이 비어있습니다.\n");
		// TODO :: 나중에 다시 구현
	} else {
		return S->stack[S->size - 1];
	}	
}

// 5) isFull(Stack) : 꽉 찼는지 확인
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
	if (isEmpty(S) != 1) { // 비어있지 않으면
						   // == !isEmpty(S)
		for (int i = 0; i < S->size; i++) {
			printf("stack[%d] \ %d\n", i, S->stack[i]);
		}
	} else {
		printf("스택이 비어있어서, 출력할 item이 없습니다.\n");
	}
}

int main() {

	return 0;
}