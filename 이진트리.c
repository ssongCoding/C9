//#include <stdio.h>
//
////typedef int Node; // 앞으로 이 코드에서 int 대신 Node
//
//typedef struct {
//	int item; // Node안에 넣을 값 : 정수
//} Node;
//
//typedef struct {
//	Node tree[9]; // 트리용 배열
//	int cur; // 커서 - add, delete
//} Tree;
//
//// 초기화
//void init(Tree* T) {
//	T->cur = 1;
//}
//
//// 노드 add
//void add(Tree* T, int data) {
//	if (T->cur == 9) { // Tree Cur가 배열 사이즈랑 같으면
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
//	if (T->cur == 1) { // 트리가 비었으면,
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
//		printf("parents node의 자리 : %d, 값 : %d\n",
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
//	printf("left child node의 자리 : %d, 값 : %d\n",
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