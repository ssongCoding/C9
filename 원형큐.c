#include <stdio.h>

typedef struct {
	int front;
	int rear;
	int queue[6];
}Queue;

// �ʱ�ȭ
void init(Queue* Q) {
	Q->front = 0;
	Q->rear = 0;
}

// ����ֳ�?
int isEmpty(Queue* Q) {
	if (Q->front == Q->rear) {
		return 1;
	}
	else {
		return 0;
	}
}

// �� ���ִ���?
int isFull(Queue* Q) {
	if ((Q->rear + 1)%6 == Q->front) { // rear ���� front�� ��ĭ �տ� �ִ���
		return 1;
	}
	else {
		return 0;
	}
}

// enqueue : �� rear�� �߰�, rear ��ĭ ����
void enqueue(Queue* Q, int item) {
	if (isFull(Q)) { // �� ��������,
		printf("Queue is Full!\n");
	}
	else {
		Q->queue[Q->rear] = item;
		Q->rear = (Q->rear + 1) % 6;
	}
}

// dequeue : (front �� ����), front ��ĭ ����
void dequeue(Queue* Q) {
	if (isEmpty(Q)) {
		printf("Queue is Empty!\n");
	}
	else {
		Q->front = (Q->front + 1) % 6;
	}
}

// ���
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
	init(&Q); // �ʱ�ȭ front, rear = 0

	enqueue(&Q, 3); // 3�� ť�� �߰�
	enqueue(&Q, 4); // 4�� ť�� �߰�
	enqueue(&Q, 5); // 5�� ť�� �߰�

	display(&Q); // 3 4 5 ���

	dequeue(&Q); // 3�� ť���� ����
	display(&Q); // 4 5 ���

	peek(&Q); // 4 ���

	return 0;
}