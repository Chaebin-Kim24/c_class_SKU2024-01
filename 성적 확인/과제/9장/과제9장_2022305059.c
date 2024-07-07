// 학번 2022305059
// 이름 이다경

// 9번
#include <stdio.h>
void reverse();
int main(void) {
	printf("문장을입력하시오: ");
	reverse();
	printf("\n");
	return 0;
}
void reverse() {
	char c;
	scanf("%c", &c);

	if (c != '\n') {
		reverse();
		printf("%c", c);
	}
	else printf("역순문장: ");
}

// 10번
#include <stdio.h>
float recursive(int n);
int main(void) {
	int n = 0;
	float k = 0.0;
	printf("1/1+1/2+1/3+...+1/n\n");
	printf("n을입력하세요: ");
	scanf("%d", &n);
	k = recursive(n);
	printf("결과: %.6f", k);
	return 0;
}
float recursive(int n) {
	if (n == 1)
		return 1.0;
	else
		return 1.0 / n + recursive(n - 1);
}

// 11번
#include <stdio.h>
int fib(int n);
int main(void) {
	int k = 0;
	printf("피보나치수열계산프로그램\n");
	printf("n을입력하세요: ");
	scanf("%d", &k);
	for(int i=0; i<=k; i++)
		printf("fib(%d) = %d\n", i, fib(i));
	return 0;
}
int fib(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
}

12번
#include <stdio.h>
int n;
int m = 10000;
void menu();
void atm();
int main(void) {
	int k = 0;
	printf("************ Welcome to Express ATM ************\n");
	menu();
	printf("하나를선택하시오: ");
	scanf("%d", &n);
	atm();
	return 0;
}
void menu() {
	printf("(1) 잔고확인\n");
	printf("(2) 입금\n");
	printf("(3) 출금\n");
	printf("(4) 종료\n");
}
void atm() {
	int k = 0;
	switch (n) {
	case 1:
		printf("현재잔고는%d원입니다.\n", m);
		break
	case 2:
		printf("입금금액: ");
		scanf("%d", &k);
		m += k;
		printf("새로운잔고는%d원입니다.\n", m);
		break
	case 3:
		printf("출금금액: ");
		scanf("%d", &k);
		if (k > m) {
			printf("계좌의잔액이부족합니다.\n");
			printf("다시입력해주세요.\n");
			atm();
		}
		else {
			m -= k;
			printf("새로운잔고는%d원입니다.\n", m);
		}
		break
	case 4:
		printf("이용해주셔서감사합니다.\n");
		break
	default:
		printf("메뉴에없는번호입니다.\n");
		break
	}
}