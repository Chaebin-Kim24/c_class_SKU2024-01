// 학번 2022304503
// 이름 이채원

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverseSentence();

int main() {
	printf("문장을 입력하시오: ");
	reverseSentence();
	printf("\n");
	return 0;
}

void reverseSentence() {
	char c;
	scanf("%c", &c);
	if (c != '\n') {
		reverseSentence();
		printf("%c", c);
	}
}