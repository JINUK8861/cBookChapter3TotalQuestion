#include <stdio.h>

int main(void) {
		//194p ���չ��� 3
	/*
		����ڷκ��� ������ �Է¹޾� �ڸ������� �и��Ͽ� ����ϴ� ���α׷� �ۼ�
		�̶� ���� �ڸ������� ���ʴ�� ������ ���� �ݺ� ���
	*/

	//���� ���� �Է�
	int num;
	printf("�Է¹��� ���� : ");
	scanf_s("%d", &num);

	//�Է¹��� ������ ũ�� ����
	int first = num;
	int size = 1;
	while (num / 10 != 0) {
		size++;
		num /= 10;
	}
	num = first;
	// (�ڸ��� �˻�)
	printf("�Է��� ���� %d�� %d �ڸ��� ���̴�.\n", num, size);

	//�Է¹��� ������ ���� �ڸ������� �����ϸ� �迭�� ����
	int divider = 1;
	for (int j = 0; j < size - 1; j++) { //divider ���� �ݺ���
		divider *= 10;
	}

	int arr[] = { 0, };
	for (int i = 0; i < size; i++) {
		arr[i] = num;
		num %= divider;
		printf("arr[%d] = %d ", i, arr[i]); // ��� : 'arr'���� �߸��� �����͸� �д� ���Դϴ�?
		divider /= 10;
	}
	printf("\n");

	//�� �迭�� ��Ҹ� ���� �ڸ������� ���ʴ�� ������ ���� �ݺ� ���
	int cycle;
	int count = size;

	for (int i = 0; i < count; i++) { // arr[0], arr[1], ...... arr[end] �迭 ������ �̵�
		divider = 1;
		cycle = 0;
		for (int j = 0; j < size; j++) { // arr[i]�� ����� ���� �����ڸ� ������ �ϳ��� ���
			//for (int k = cycle; k < size - 1; k++) { //divider ����
			// �� for���� �ʱ�ȭ�� �ݺ��� ���Ե��� ����! => int k = cycle �߸��� �ʱ�ȭ
			for (int k = cycle; k < size - 1; k++) { //divider ����
				divider *= 10;
			}
			printf("%d ", arr[i] / divider);
			arr[i] %= divider;
			divider /= 10;
			cycle++;
		}
		printf("\n");
		size--; // @@
	}

	////���� �ڸ������� ���ʴ�� ������ ���� �ݺ� ���
	//int cycle = 0;
	//divider = 1;

	//for (int i = 0; i < size; i++) { // ��ǥ ������ ���� ������ ���� ����ϴ� �ݺ���
	//	for (int j = cycle; j < size - 1; j++) { //divider ���� �ݺ���
	//		divider *= 10;
	//	}
	//	printf("%d ", first / divider);
	//	first %= divider;
	//	divider = 1;
	//	cycle++;
	//}

	return 0;
}