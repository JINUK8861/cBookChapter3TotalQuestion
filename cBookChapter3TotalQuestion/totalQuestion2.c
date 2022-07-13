#include <stdio.h>

int main(void) {
		//194p 종합문제 2
	/*
		길이가 8인 int형 배열 선언
		정수 8개 입력받아 배열에 저장
		홀수와 짝수를 구별하여 출력하는 프로그램 작성
	*/
	int arr[8]; //배열 선언

	//정수 8개 배열에 저장
	for (int i = 0; i < 8; i++) {
		printf("NUM%d : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	//홀수와 짝수 구별하여 출력
	printf("홀수 : ");
	for (int j = 0; j < 8; j++) {
		if (arr[j] % 2 == 1) {
			printf("%d ", arr[j]);
		}
	}
	printf("\n");
	printf("짝수 : ");
	for (int k = 0; k < 8; k++) {
		if (arr[k] % 2 == 0) {
			printf("%d ", arr[k]);
		}
	}

	return 0;
}