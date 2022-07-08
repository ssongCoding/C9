#include <stdio.h>

/*
	휴대폰, 빔 프로젝트, 
	에어컨, 자동문, 
	CCTV, 스피커, 컴퓨터, 웹캠
	"임베디드 시스템"

	+ 
*/
int main(void) {

	// 포인터 : 변수의 위치(주소)
	// 구체적으로는...

	int num = 30;
	printf("num = %d\n", num); // 30

	printf("********************\n");
	
	int* ptr; // 선언할 때 * : ptr이 포인터 변수라고 알려주는
	ptr = &num; // &변수 : 변수의 주소(위치)
	printf("ptr = %p\n", ptr);

	printf("####################\n");

	char cnum = 'z';
	char* cptr = &cnum;
	printf("cptr = %p\n", cptr);

	double dnum = 3.14;
	double* dptr = &dnum;
	printf("dptr = %p\n", dptr);

	// 확인용 출력
	printf("dnum = %f\n", dnum);	 // 3.14
	printf("&dnum = %p\n", &dnum); // dnum의 주소
	printf("dptr = %p\n", dptr);  // dnum의 주소
	printf("*dptr = %f\n", *dptr);// 3.14

	printf("####################\n\n");

	/*
		"*" 의 역할
		1) 포인터변수라고 선언할 때 : 공지해주는 역할
		2) 사용(호출)할 때 : 포인터 변수에 저장된
		                     주소값에 저장된 값을 가져오라는 뜻.
	*/

	int n = 10;
	int* pNum = &n; // n의 위치

	n = 20;
	printf("%d", *pNum);


	return 0;
}