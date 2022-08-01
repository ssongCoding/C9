//#include <stdio.h>
//
//void display(int* num, int size) {
//	// int size = sizeof(num) / sizeof(int); - 2
//	for (int i = 0; i < size; i++) {
//		printf("%d", num[i]);
//	}
//}
//
//int main() {
//	int arr[] = { 7, 4, 5, 1, 3, 7, 8 };
//	int size = sizeof(arr) / sizeof(int);
//
//	int temp;
//	for (int j = 3; j >= 0; j--) {
//		for (int i = 0; i <= j; i++) {
//			if (arr[i] > arr[i + 1]) {
//				temp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = temp;
//			}
//		}
//	}
//
//	display(arr, size);
//
//	return 0;
//}