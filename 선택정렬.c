#include <stdio.h>

int main() {
	int arr[] = { 9, 6, 7, 3, 5 }; // �ʱ� ����
	int arr_size = sizeof(arr)/sizeof(int); // 5
	
	int min; // ���ð�(�ּҰ��̶� ����)�� ������ ����
	int minIndex;

	for (int i = 0; i < arr_size-1; i++) { // 0 1 2 3
		min = arr[i]; // �ּҰ��̶� ����
		minIndex = i; // ���ð� �ڸ�

		for (int j = i + 1; j < arr_size; j++) {
			if (arr[j] < min) {
				min = arr[j];
				minIndex = j; // �ּҰ� �ڸ�
			}
		} // �ּҰ� ã��! 

		// ���ð� �ڸ� <-- �ּҰ� �̵�
		arr[i] = arr[minIndex];
		// �ּҰ� �ڸ� <-- ���ð�
		arr[minIndex] = arr[i];
	}

	for (int k = 0; k < arr_size; k++) {
		printf("%d\n", arr[k]);
	}
	
	return 0;
}