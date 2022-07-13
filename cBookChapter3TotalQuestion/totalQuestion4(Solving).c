#include <stdio.h>
#include <string.h>

int main(void) {
		//194p 종합문제 4
	/*
		문자열 변수 선언, 문자열 저장
		해당 문자열을 앞에서부터 읽었을 때와 뒤에서부터 읽었을 때 동일한 문자열인지 검사하는 프로그램
	*/
	char* str = "";
	printf("문자열 입력 : ");
	scanf_s("%s", str);

	int length = strlen(str);
	printf("%s", str);

	for (int i = 0; i < length/2 ; i++) {
		if (strcmp(str[i], str[length-i]) != 1) {
			printf("같지 않습니다.");
			break;
		}
		else {
			continue;
		}
		printf("같습니다.");
	}

	return 0;
}