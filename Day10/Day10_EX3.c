#include <stdio.h>

/*
	�޴���, �� ������Ʈ, 
	������, �ڵ���, 
	CCTV, ����Ŀ, ��ǻ��, ��ķ
	"�Ӻ���� �ý���"

	+ 
*/
int main(void) {

	// ������ : ������ ��ġ(�ּ�)
	// ��ü�����δ�...

	int num = 30;
	printf("num = %d\n", num); // 30

	printf("********************\n");
	
	int* ptr; // ������ �� * : ptr�� ������ ������� �˷��ִ�
	ptr = &num; // &���� : ������ �ּ�(��ġ)
	printf("ptr = %p\n", ptr);

	printf("####################\n");

	char cnum = 'z';
	char* cptr = &cnum;
	printf("cptr = %p\n", cptr);

	double dnum = 3.14;
	double* dptr = &dnum;
	printf("dptr = %p\n", dptr);

	// Ȯ�ο� ���
	printf("dnum = %f\n", dnum);	 // 3.14
	printf("&dnum = %p\n", &dnum); // dnum�� �ּ�
	printf("dptr = %p\n", dptr);  // dnum�� �ּ�
	printf("*dptr = %f\n", *dptr);// 3.14

	printf("####################\n\n");

	/*
		"*" �� ����
		1) �����ͺ������ ������ �� : �������ִ� ����
		2) ���(ȣ��)�� �� : ������ ������ �����
		                     �ּҰ��� ����� ���� ��������� ��.
	*/

	int n = 10;
	int* pNum = &n; // n�� ��ġ

	n = 20;
	printf("%d", *pNum);


	return 0;
}