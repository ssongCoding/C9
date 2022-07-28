//#include <stdio.h>
//
//int main() {
//	int arr[5] = { 8, 5, 6, 2, 4 }; // 초기 배열
//
//	int key; // 5, 6, 2, 4
//	for (int i = 1; i < 5; i++) { // 1~4
//		key = arr[i];
//
//		int j;
//		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
//			arr[j + 1] = arr[j]; // 한 칸 뒤로 민다.
//		}
//		arr[j + 1] = key; 
//	}
//
//	// 출력
//	for (int k = 0; k < 5; k++) {
//		printf("arr[%d] = %d\n", k, arr[k]);
//	}
//
//	return 0;
//}