//#include <stdio.h>
//
//int main(void) {
//	char c1 = 'a';
//	char c2 = 'p';
//	char c3 = 'p';
//	char c4 = 'l';
//	char c5 = 'e';
//
//	char arr[10] = { 'a', 'p', 'p', 'l', 'e'};
//	char apple[] = "apple";
//	// �̰�, ���ڿ��̾�. 
//	// ���ڿ��� ������, ������ �־��ٰſ���.
//
//	printf("%s\n", arr); // arr ���
//	printf("%s\n", apple); // apple ���ڿ� ���
//	printf("%d", sizeof(apple));  // 
//
//	printf("%c\n\n", apple[2]);
//
//	// �ѱ��ھ� ���� ���!
//	for (int i = 0; i < sizeof(apple)/sizeof(apple[0])-1; i++) {
//		printf("�̹� ���ڴ� : %c\n", apple[i]);
//	}
//
//	return 0;
//}