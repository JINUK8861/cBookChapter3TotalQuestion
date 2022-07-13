#include <stdio.h>

int main(void) {
		//194p 종합문제 3
	/*
		사용자로부터 정수를 입력받아 자릿수별로 분리하여 출력하는 프로그램 작성
		이때 높은 자릿수부터 차례대로 제외해 가며 반복 출력
	*/

	//최초 정수 입력
	int num;
	printf("입력받을 정수 : ");
	scanf_s("%d", &num);

	//입력받은 정수의 크기 판정
	int first = num;
	int size = 1;
	while (num / 10 != 0) {
		size++;
		num /= 10;
	}
	num = first;
	// (자릿수 검산)
	printf("입력한 정수 %d는 %d 자리의 수이다.\n", num, size);

	//입력받은 정수를 높은 자릿수부터 제외하며 배열에 저장
	int divider = 1;
	for (int j = 0; j < size - 1; j++) { //divider 조정 반복문
		divider *= 10;
	}

	int arr[] = { 0, };
	for (int i = 0; i < size; i++) {
		arr[i] = num;
		num %= divider;
		printf("arr[%d] = %d ", i, arr[i]); // 경고 : 'arr'에서 잘못된 데이터를 읽는 중입니다?
		divider /= 10;
	}
	printf("\n");

	//각 배열의 요소를 높은 자릿수부터 차례대로 제외해 가며 반복 출력
	int cycle;
	int count = size;

	for (int i = 0; i < count; i++) { // arr[0], arr[1], ...... arr[end] 배열 스코프 이동
		divider = 1;
		cycle = 0;
		for (int j = 0; j < size; j++) { // arr[i]에 저장된 수를 높은자리 수부터 하나씩 출력
			//for (int k = cycle; k < size - 1; k++) { //divider 조정
			// ※ for문의 초기화는 반복에 포함되지 않음! => int k = cycle 잘못된 초기화
			for (int k = cycle; k < size - 1; k++) { //divider 조정
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

	////높은 자릿수부터 차례대로 제외해 가며 반복 출력
	//int cycle = 0;
	//divider = 1;

	//for (int i = 0; i < size; i++) { // 목표 정수를 높은 수부터 끊어 출력하는 반복문
	//	for (int j = cycle; j < size - 1; j++) { //divider 조정 반복문
	//		divider *= 10;
	//	}
	//	printf("%d ", first / divider);
	//	first %= divider;
	//	divider = 1;
	//	cycle++;
	//}

	return 0;
}