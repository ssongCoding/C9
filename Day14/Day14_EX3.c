//#include <stdio.h>
//
//int main() {
//	int arr[3][2] = { {1,2},
//					  {3,4},
//					  {5,6} };
//
//	printf("%d", arr[2][0]); // 5
//	printf("%d", arr[1][1]); // 4
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 2; j++) {
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	printf("arr = %p\n", arr);
//	//printf("&arr[0][0] = %p\n", &arr[0][0]);
//	//printf("&arr[0][1] = %p\n", &arr[0][1]);
//	//printf("&arr[1][0] = %p\n", &arr[1][0]);
//
//
//	//int (*arrptr)[2] = arr;
//	   //*arrptr = arr[3]
//	            // 열의 개수 = 2
//	                  // arr[3][2]
//	/*
//	                { {1,2},
//					  {3,4},
//					  {5,6} };
//	*/
//
//	return 0;
//}