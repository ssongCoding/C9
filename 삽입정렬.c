#include <stdio.h>

int main() {
	int arr[5] = { 8, 5, 6, 2, 4 }; // �ʱ� �迭

	int key; // 5, 6, 2, 4
	for (int i = 1; i < 5; i++) { // 1~4
		key = arr[i];

		int j;
		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > key) { // ���� arr[j]�� key���� ũ��
				arr[j + 1] = arr[j]; // �� ĭ �ڷ� �δ�.
				//arr[j] = key; // key���� ���ϸ鼭 �� �־��ְ� �ٴϴ� ���
			} else { // arr[j] <= key
				//arr[j + 1] = key; // �̰� �� �ȵɱ��??
				printf("else �� �ȿ� j + 1 = %d\n", j + 1);
				printf("else �� �ȿ� key = %d\n", key);
				break;
			}
		}
		printf("break ���Ŀ� j + 1 = %d\n", j + 1);
		printf("break ���Ŀ� key = %d\n", key);
		arr[j + 1] = key; // ������ �����ڰ� �ǵ��� ���
							// key���� ���� ��������, �ڸ��� ã�� ������ �־��ִ� ���
	}

	// ���
	for (int k = 0; k < 5; k++) {
		printf("arr[%d] = %d\n", k, arr[k]);
	}

	return 0;
}