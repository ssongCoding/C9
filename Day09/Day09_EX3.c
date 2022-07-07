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
//	// 이건, 문자열이야. 
//	// 문자열이 끝날때, 공백을 넣어줄거에요.
//
//	printf("%s\n", arr); // arr 출력
//	printf("%s\n", apple); // apple 문자열 출력
//	printf("%d", sizeof(apple));  // 
//
//	printf("%c\n\n", apple[2]);
//
//	// 한글자씩 떼서 출력!
//	for (int i = 0; i < sizeof(apple)/sizeof(apple[0])-1; i++) {
//		printf("이번 글자는 : %c\n", apple[i]);
//	}
//
//	return 0;
//}