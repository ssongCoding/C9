#define _crt_secure_no_warnings
#include <stdio.h> // ǥ�� �����
#include <string.h>// ���ڿ�

int main() {
	char a[30] = "apple";

	int size = strlen(a);	// ���ڿ��� ���̸� ���ϴ� �Լ�
	//for (int i = 0; i < 30; i++) {
	//	if (a[i] == '\0') {
	//		size = i;
	//		break; // for���� ��������
	//	}			
	//}
	printf("size : %d\n", size);

	/************************/
	char left[100] = "left";
	char right[100] = "right";
	
	strcpy(left, right); // ���ڿ� ����
	/*for (int j = 0; j < 100; j++) {
		left[j] = right[j];
	}*/
	printf("left : %s\n", left);

	/************************/
	char arr1[100] = "aaaa";
	char arr2[100] = "bbbb";

	int result = strcmp(arr1, arr2);
	// arr1 == arr2 : �̰� ���� ����. �ּҰ� ��
	/*for (int k = 0; k < 100; k++) {
		if (arr1[k] == arr2[k]) {
			printf("�����ϴ�.\n");
		} else {
			printf("���� �ʽ��ϴ�.\n");
		}
	}*/

	return 0;
}