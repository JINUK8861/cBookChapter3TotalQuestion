#include <stdio.h>
#include <string.h>

int main(void) {
		//194p ���չ��� 4
	/*
		���ڿ� ���� ����, ���ڿ� ����
		�ش� ���ڿ��� �տ������� �о��� ���� �ڿ������� �о��� �� ������ ���ڿ����� �˻��ϴ� ���α׷�
	*/
	char* str = "";
	printf("���ڿ� �Է� : ");
	scanf_s("%s", str);

	int length = strlen(str);
	printf("%s", str);

	for (int i = 0; i < length/2 ; i++) {
		if (strcmp(str[i], str[length-i]) != 1) {
			printf("���� �ʽ��ϴ�.");
			break;
		}
		else {
			continue;
		}
		printf("�����ϴ�.");
	}

	return 0;
}