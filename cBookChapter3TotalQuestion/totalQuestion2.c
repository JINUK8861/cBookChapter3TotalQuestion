#include <stdio.h>

int main(void) {
		//194p ���չ��� 2
	/*
		���̰� 8�� int�� �迭 ����
		���� 8�� �Է¹޾� �迭�� ����
		Ȧ���� ¦���� �����Ͽ� ����ϴ� ���α׷� �ۼ�
	*/
	int arr[8]; //�迭 ����

	//���� 8�� �迭�� ����
	for (int i = 0; i < 8; i++) {
		printf("NUM%d : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	//Ȧ���� ¦�� �����Ͽ� ���
	printf("Ȧ�� : ");
	for (int j = 0; j < 8; j++) {
		if (arr[j] % 2 == 1) {
			printf("%d ", arr[j]);
		}
	}
	printf("\n");
	printf("¦�� : ");
	for (int k = 0; k < 8; k++) {
		if (arr[k] % 2 == 0) {
			printf("%d ", arr[k]);
		}
	}

	return 0;
}