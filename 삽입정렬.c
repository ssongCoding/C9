#include <stdio.h>

int main() {
	int arr[5] = { 8, 5, 6, 2, 4 }; // 초기 배열

	int key; // 5, 6, 2, 4
	for (int i = 1; i < 5; i++) { // 1~4
		key = arr[i];

		int j;
		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > key) { // 만약 arr[j]이 key보다 크면
				arr[j + 1] = arr[j]; // 한 칸 뒤로 민다.
				//arr[j] = key; // key값을 비교하면서 다 넣어주고 다니는 방법
			} else { // arr[j] <= key
				//arr[j + 1] = key; // 이건 왜 안될까요??
				printf("else 문 안에 j + 1 = %d\n", j + 1);
				printf("else 문 안에 key = %d\n", key);
				break;
			}
		}
		printf("break 이후에 j + 1 = %d\n", j + 1);
		printf("break 이후에 key = %d\n", key);
		arr[j + 1] = key; // 찐으로 개발자가 의도한 방법
							// key값은 제일 마지막에, 자리를 찾은 다음에 넣어주는 방법
	}

	// 출력
	for (int k = 0; k < 5; k++) {
		printf("arr[%d] = %d\n", k, arr[k]);
	}

	return 0;
}