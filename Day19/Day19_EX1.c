//#include <stdio.h>
//
//int multiple(int a, int b); // �ؿ� �Լ��� �ִٰ� �˷���
//
//int main() {
//	printf("%d\n", multiple(2, 3)); // 6 --> 1
//	printf("%d\n", multiple(10, 5)); // 50 --> 2
//	return 0;
//}
//
//int multiple(int a, int b) {
//	static int count = 0; // ���α׷� ���۰� ���ÿ�
//						  // ��ġ ��������ó��
//	count = count + 1;
//	return count;
//}