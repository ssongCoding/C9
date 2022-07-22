//#include <stdio.h>
//
//int multiple(int a, int b); // 밑에 함수가 있다고 알려줌
//
//int main() {
//	printf("%d\n", multiple(2, 3)); // 6 --> 1
//	printf("%d\n", multiple(10, 5)); // 50 --> 2
//	return 0;
//}
//
//int multiple(int a, int b) {
//	static int count = 0; // 프로그램 시작과 동시에
//						  // 마치 전역변수처럼
//	count = count + 1;
//	return count;
//}