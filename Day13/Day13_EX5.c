#include <stdio.h>

int main() {
	int n1, n2, n3; 
	// 1~9
	printf("���� 3���� �Է��ϼ���.\n");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	printf("%d %d %d", n1, n2, n3);

	while (1) { // ���� ����
		if (n1 == -1) {
			break;
		}
	}

	return 0;
}