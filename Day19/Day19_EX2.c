//#include <stdio.h>
//#include <stdlib.h> // ǥ�� ���̺귯��
//
//int main() {
//	
//	int num = 10;
//	scanf_s("%d", &num); // �迭 ĭ ��
//
//	int* arr = malloc(num * sizeof(int));
//						// ĭ �� * �� ĭ ũ��
//	// = int arr[num]; �� �����Ҵ�
//
//	for (int i = 0; i < num; i++) {
//		arr[i] = (i + 1) * 10;
//		printf("%d\n", arr[i]);
//	}
//	/*    10 20 30 40 ...    110 ... 
//	arr[0] [1] [2] [3]... [10] ...  
//        1   2   3   4       11   : i + 1
//	    10  20  30  40           : (i + 1) * 10*/
//
//
//	return 0;
//}