//#include<stdio.h>
//
//int main() {
//	// for, i, arr[5]
//	// arr[0] = 1, arr[1] = 2 ... 
//
//	int arr[5]; // 5칸짜리 배열 선언
//	
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		// i = 0, 1, 2, 3, 4
//		//     1, 2, 3, 4, 5
//		arr[i] = i + 1;
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//
//	return 0;
//}