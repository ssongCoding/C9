#include <stdio.h>

typedef struct {
	int front;
	int rear;
	int queue[6];
}Queue;

// 초기화
void init(Queue* Q) {
	Q->front = 0;
	Q->rear = 0;
}

// 비어있나?
int isEmpty(Queue* Q) {
	if (Q->front == Q->rear) {
		return 1;
	}
	else {
		return 0;
	}
}

// 꽉 차있는지?
int isFull(Queue* Q) {
	if ((Q->rear + 1)%6 == Q->front) { // rear 보다 front가 한칸 앞에 있는지
		return 1;
	}
	else {
		return 0;
	}
}

// enqueue : 값 rear에 추가, rear 한칸 전진
void enqueue(Queue* Q, int item) {
	if (isFull(Q)) { // 꽉 차있으면,
		printf("Queue is Full!\n");
	}
	else {
		Q->queue[Q->rear] = item;
		Q->rear = (Q->rear + 1) % 6;
	}
}

// dequeue : (front 값 제거), front 한칸 전진
void dequeue(Queue* Q) {
	if (isEmpty(Q)) {
		printf("Queue is Empty!\n");
	}
	else {
		Q->front = (Q->front + 1) % 6;
	}
}

// 출력
void display(Queue* Q) {
	if (Q->front < Q->rear) {
		for (int i = Q->front; i < Q->rear; i++) {
			printf("%d ", Q->queue[i]);
		}
	}
	else {
		for (int j = Q->front; j < 6; j++) {
			printf("%d ", Q->queue[j]);
		}
		for (int k = 0; k < Q->rear; k++) {
			printf("%d ", Q->queue[k]);
		}
	}
	printf("\n");
}

void peek(Queue* Q) {
	if (isEmpty(Q)) {
		printf("Queue is empty.\n");
	} 
	else {
		printf ("peek! %d\n", Q->queue[Q->front]);
	}
}

int main() {
	
	Queue Q;
	init(&Q); // 초기화 front, rear = 0

	enqueue(&Q, 3); // 3을 큐에 추가
	enqueue(&Q, 4); // 4를 큐에 추가
	enqueue(&Q, 5); // 5를 큐에 추가

	display(&Q); // 3 4 5 출력

	dequeue(&Q); // 3이 큐에서 제거
	display(&Q); // 4 5 출력

	peek(&Q); // 4 출력

	return 0;
}