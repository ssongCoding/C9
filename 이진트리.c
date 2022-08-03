#include <stdio.h>

//typedef int Node; // 앞으로 이 코드에서 int 대신 Node

typedef struct {
	int item; // Node안에 넣을 값 : 정수
} Node;

typedef struct {
	Node tree[9]; // 트리용 배열
	int cur; // 커서
} Tree;

int main() {

	return 0;
}