#define _crt_secure_no_warnings
#include <stdio.h> // 표준 입출력
#include <string.h>// 문자열

int main() {
	char a[30] = "apple";

	int size = strlen(a);	// 문자열의 길이를 구하는 함수
	//for (int i = 0; i < 30; i++) {
	//	if (a[i] == '\0') {
	//		size = i;
	//		break; // for문을 빠져나옴
	//	}			
	//}
	printf("size : %d\n", size);

	/************************/
	char left[100] = "left";
	char right[100] = "right";
	
	strcpy(left, right); // 문자열 복사
	/*for (int j = 0; j < 100; j++) {
		left[j] = right[j];
	}*/
	printf("left : %s\n", left);

	/************************/
	char arr1[100] = "aaaa";
	char arr2[100] = "bbbb";

	int result = strcmp(arr1, arr2);
	// arr1 == arr2 : 이건 같지 않음. 주소값 비교
	/*for (int k = 0; k < 100; k++) {
		if (arr1[k] == arr2[k]) {
			printf("같습니다.\n");
		} else {
			printf("같지 않습니다.\n");
		}
	}*/

	return 0;
}