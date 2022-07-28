//#include <stdio.h>
//
//int main() {
//	int arr[] = { 9, 6, 7, 3, 5 }; // 초기 상태
//	int arr_size = sizeof(arr)/sizeof(int); // 5
//	
//	int min; // 선택값(최소값이라 가정)을 저장할 변수
//	int minIndex;
//
//	for (int i = 0; i < arr_size-1; i++) { // 0 1 2 3
//		min = arr[i]; // 최소값이라 가정
//		minIndex = i; // 선택값 자리
//
//		for (int j = i + 1; j < arr_size; j++) {
//			if (arr[j] < min) {
//				min = arr[j];
//				minIndex = j; // 최소값 자리
//			}
//		} // 최소값 찾음! 
//
//		/*
//		arr[i] = 7 / arr[j] = 10; / min = 10
//			arr[i] = min;  // arr[i] = 10 -> 7값이 사라져요
//			arr[j] = arr[i]
//
//		그래서, arr[j] = arr[i] // arr[j] = 7
//			    arr[i] = min;
//		*/
//
//		// 선택값 자리 <-- 최소값 이동
//		arr[i] = min; // 
//		// 최소값 자리 <-- 선택값
//		arr[minIndex] = arr[i];
//	}
//
//	for (int k = 0; k < arr_size; k++) {
//		printf("%d\n", arr[k]);
//	}
//	
//	return 0;
//}
