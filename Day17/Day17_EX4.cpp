#include <iostream> // stdio.h
using namespace std;// std:: 쓸 자리를 자동 대체

int main() {
	int corona;

	cout << "코로나 확진자 수를 입력하세요."; //printf("hello world\n");
	cin >> corona;		//scanf_s("%d", &corona);
	
	cout << "코로나 확진자 수는 " << corona << "입니다." << endl;

	if (corona >= 100) {
		cout << "거리두기 4단계 입니다.";
	} else if (corona >= 75) {
		cout << "거리두기 3단계 입니다.";
	} else if (corona >= 50) {
		cout << "거리두기 2단계 입니다.";
	} else if (corona >= 20) {
		cout << "거리두기 1단계 입니다.";
	} else {
		cout << "거리두기를 시행하지 않습니다.";
	}

	return 0;
}