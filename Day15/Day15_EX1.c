//#include <stdio.h>
//
//int main() {
//	/*
//		Good!
//	*/
//
//	// 문자(배)열
//	char good[] = "Good!"; // 맨 마지막 칸엔 공백
//						   // 6칸
//	printf("%s\n", good);
//	printf("%d\n", sizeof(good)); // sizeof
//
//	for (int i = 0; i < 6; i++) {
//		printf("%c\n", good[i]);
//	}
//
//	// 배열 한칸의 문자도 바꿀 수 있음
//	good[1] = 'g';
//	printf("%c\n", good[1]);
//
//	return 0;
//}