#include <stdio.h>

// getGPA(0~100) 
// ~ 90 : return 'A'
// 89~80 : return 'B'
// 79~70 : return 'C'
// 69~   : return 'F'
// ~11:13 

int main() {
	char GPA = getGPA(93);
	printf("내 학점은 %c 입니다.", GPA);
	return 0;
}