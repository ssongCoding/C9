//#include <stdio.h>
//
////typedef int Node; // ������ �� �ڵ忡�� int ��� Node
//
//typedef struct {
//	int item; // Node�ȿ� ���� �� : ����
//} Node;
//
//typedef struct {
//	Node tree[9]; // Ʈ���� �迭
//	int cur; // Ŀ�� - add, delete
//} Tree;
//
//// �ʱ�ȭ
//void init(Tree* T) {
//	T->cur = 1;
//}
//
//// ��� add
//void add(Tree* T, int data) {
//	if (T->cur == 9) { // Tree Cur�� �迭 ������� ������
//		printf("Tree is Full!");
//	}
//	else {
//		T->tree[T->cur].item = data;
//		T->cur = T->cur + 1;
//	}
//}
//
//// delete
//void delete(Tree* T) {
//	if (T->cur == 1) { // Ʈ���� �������,
//		printf("Tree is Empty.");
//	}
//	else {
//		T->cur = T->cur - 1;
//	}
//}
//
//// show parents
//void show_parents(Tree* T, int position) {
//	if (T->cur == 1) {
//		printf("Tree is Empty.");
//	}
//	else {
//		printf("parents node�� �ڸ� : %d, �� : %d\n",
//			position / 2, T->tree[position / 2].item);
//	}
//}
//
//void show_left_child(Tree* T, int position) {
//	int left_child_position = position * 2;
//
//	if (T->cur == 1) {
//		printf("Tree is Empty.");
//	} else if (left_child_position > 8)
//	printf("left child node�� �ڸ� : %d, �� : %d\n",
//		left_child_position, T->tree[left_child_position].item);
//}
//
//void show_right_child(Tree* T, int position) {
//
//}
//
//int main() {
//
//	Tree T;
//	init(&T);
//	add(&T, 50);
//
//	return 0;
//}