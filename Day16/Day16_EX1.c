#include <stdio.h>

// ����ü ����
struct student {
	char name[30]; // ũ�Ⱑ 30�� �̸�
	int age;		// ����
};

int main() {
	struct student apple[3]; // student ������ 10�� �迭
	
	// 4�и� �帱�Կ�! ~10:32
	int i = 0;
	while (i<3) { // 3������ ���� ������ּ���.
		printf("�̸��� �Է��ϼ���. ");
		scanf_s("%s", apple[i].name, 30); // 0, 1, 2 ���� �־��ּ���

		printf("���̸� �Է��ϼ���. "); // 0, 1, 2 ���� �־��ּ���
		scanf_s("%d", &apple[i].age);

		if (apple[i].age == 0) { // ���̰� 0���̸�,
			break;
		}

		printf("�̸��� %s�̰�, ���̴� %d���Դϴ�.\n", apple[i].name, apple[i].age);
		i = i + 1; // i++, ++i
	}

	return 0;
}