#include <stdio.h>

int main(void) {
		//194p ���չ��� 1
	/*
		���̰� 5�� int�� 1���� �迭 ����
		5���� ������ �Է¹ް� ���� ������ ����ϴ� ���α׷� �ۼ�
		- �Էµ� ���� �� �ִ�
		- �Էµ� ���� �� �ּڰ�
		- �Էµ� ������ ���հ�
	*/
	int arr[5]; // �迭 ����

	//5���� ���� �Է�
	for (int i = 0; i < 5; i++) {
		printf("NUM%d : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	//�ִ�, �ּ�, �հ� ���
	int max = arr[0];
	int min = arr[0];
	int sum = 0;
	for (int j = 0; j < 5; j++) {
		if (max < arr[j]) {
			max = arr[j];
		}
		if (min > arr[j]){
			min = arr[j];
		}
		sum += arr[j];
	}

	//�ִ�, �ּ�, �հ� ���
	printf("�ִ� : %d\n", max);
	printf("�ּڰ� : %d\n", min);
	printf("���հ� : %d\n", sum);

	return 0;
}