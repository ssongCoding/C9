#include <iostream> // stdio.h
using namespace std;// std:: �� �ڸ��� �ڵ� ��ü

int main() {
	int corona;

	cout << "�ڷγ� Ȯ���� ���� �Է��ϼ���."; //printf("hello world\n");
	cin >> corona;		//scanf_s("%d", &corona);
	
	cout << "�ڷγ� Ȯ���� ���� " << corona << "�Դϴ�." << endl;

	if (corona >= 100) {
		cout << "�Ÿ��α� 4�ܰ� �Դϴ�.";
	} else if (corona >= 75) {
		cout << "�Ÿ��α� 3�ܰ� �Դϴ�.";
	} else if (corona >= 50) {
		cout << "�Ÿ��α� 2�ܰ� �Դϴ�.";
	} else if (corona >= 20) {
		cout << "�Ÿ��α� 1�ܰ� �Դϴ�.";
	} else {
		cout << "�Ÿ��α⸦ �������� �ʽ��ϴ�.";
	}

	return 0;
}