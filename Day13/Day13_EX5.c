#include <stdio.h>

int main() {
	int n1, n2, n3; 
	// 1~9
	printf("정수 3개를 입력하세요.\n");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	printf("%d %d %d", n1, n2, n3);

	while (1) { // 무한 루프
		if (n1 == -1) {
			break;
		}
	}

	return 0;
}