//#include <stdio.h>
//
//int main() {
//	int arr[10];
//	for (int i = 0; i < 10; i++) { // 배열 값 입력
//		// 0 1 2 3 4 5 ... 9   : i
//		// 1 2 3 4 5 6 ... 10  : i + 1
//		// 2 4 6 8 10 12 . 20  : (i + 1 ) * 2
//		arr[i] = (i + 1) * 2;
//	}
//
//	for (int j = 9; j >= 0; j--) { // 거꾸로 출력
//		printf("%d ", arr[j]);
//	}
//
//	return 0;
//}