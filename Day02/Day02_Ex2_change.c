//#include <stdio.h>
//
///*
//	Ctrl + s : 저장
//*/
//int main(void) {
//	
//	int a = 100;
//	printf("hello\n");
//	printf("%d\n", a); // decimal
//	//printf("%d", 100); <-- 이것도 되요~
//
//	// 정수 변수 b 300, 출력; 제한 시간 : 1분
//	int b = 300;
//	printf("%d\n", b);
//
//	// char c, int i, double d
//	// 'C', -123, 1.23
//	char c = 'C';  // %c
//	int i = -123;  // %d
//	double d = 1.23;// %f
//
//	printf("char c는 %c 입니다.\n", c);
//	printf("int i는 %d\n", i);
//	printf("double d는 %0.2f", d);
//
//
//	/******************************/
//	int num1 = 5; // num1 = 5
//	num1 = 7;		// num1 = 7
//	num1 = 100;		// num1 = 100;
//
//	int num2 = 200;  // num2 = 200
//	num1 = num2;     // num1 = 200;
//
//	int num3 = 300;
//	int num4 = 400;
//	num3 = num4;
//	// 여기서 num3의 값을 출력하면? 400
//	// 여기서 num4의 값을 출력하면? 400
//
//
//	/*
//		int number1, number2;
//		     1111     2222
//	    int temp;
//		     0
//	    문제. temp를 이용해서
//		number1의 값과 number2의 값을 바꾸고
//	    출력으로 확인해주세요.
//	*/
//	int number1 = 1111;
//	int number2 = 2222;
//	int temp = 0;
//
//	temp = number1; // temp : 1111
//	number1 = number2; // number1 : 2222
//	number2 = temp;	// number2 : 1111
//
//	printf("number1 : %d\n", number1);
//	printf("number2 : %d", number2);
//
//	printf("number1 : %d, number2 : %d\n", number1, number2);
//
//
//	/*
//		char p 'P', double marathon 42.195
//		printf(); // P, 42.195
//	*/
//	char p = 'P';
//	double marathon = 42.195;
//	printf("%c, %0.3f", p, marathon);
//
//	return 0;
//}