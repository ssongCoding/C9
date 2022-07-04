//#include <stdio.h>
//
//int main(void) {
//
//	int score;	// 선언
//	scanf_s("%d", &score);
//
//
//	// 똑같은 역할 하는 if문 만들기 - 제한시간 4분 (~10:43)
//	switch (score) {
//		case 100 :
//			printf("만점");
//			break;
//		case 50 :
//			printf("반타작");
//			break;
//		case 0 :
//			printf("빵점");
//			break;
//		default :
//			printf("이도 저도 아니네요.");
//	}
//
//	if (score == 100) {
//		printf("만점");
//	} else if (score == 50) {
//		printf("반타작");
//	} else if (score == 0) {
//		printf("빵점");
//	} else {
//
//	}
//	
//	// 100점도, 50점도, 빵점도 아닐 때는.. 어떻게 하지?
//	// if (score != 100 && score != 50 && score != 0) {
//		printf("이도 저도 아님.");
//
//	return 0;
//}
//
///*
//* int score;
//* scanf_s로 score 입력
//* 
//* switch문으로,
//* 50이면 "반타작"
//* 100이면 "만점"
//* 0이면 "빵점"
//* 출력
//* 
//* 제한시간 : 5분. (~10:24)
//*/
