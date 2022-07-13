#include <stdio.h>

int main(void) {
		//194p 종합문제 1
	/*
		길이가 5인 int형 1차원 배열 선언
		5개의 정수를 입력받고 다음 내용을 출력하는 프로그램 작성
		- 입력된 정수 중 최댓값
		- 입력된 정수 중 최솟값
		- 입력된 정수의 총합계
	*/
	int arr[5]; // 배열 선언

	//5개의 정수 입력
	for (int i = 0; i < 5; i++) {
		printf("NUM%d : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	//최대, 최소, 합계 계산
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

	//최대, 최소, 합계 출력
	printf("최댓값 : %d\n", max);
	printf("최솟값 : %d\n", min);
	printf("총합계 : %d\n", sum);

	return 0;
}