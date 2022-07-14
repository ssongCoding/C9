//#include <stdio.h>
//
//void swapNumber(int n1, int n2) { // 선언만 해둠.
//	// 매개변수 n1, n2 = 지역 변수
//	// 호출할때 초기화 해줌.
//	int temp = n1;
//	n1 = n2;
//	n2 = temp;
//	printf("num1 = %d, num2 = %d\n", n1, n2);
//}
//
//int main() {
//	int num1 = 100;
//	int num2 = 700;
//	printf("num1 = %d, num2 = %d\n", num1, num2); // 100 700
//
//	swapNumber(num1, num2);
//	// n1 = num1, n2 = num2 
//	// --> 함수를 호출하면서 매개변수를 초기화 함!
//	printf("num1 = %d, num2 = %d", num1, num2); // 100 700
//	
//	return 0;
//}