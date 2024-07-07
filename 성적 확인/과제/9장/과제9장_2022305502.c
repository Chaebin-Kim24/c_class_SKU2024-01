// 학번 2022305502
// 이름 서수빈

9번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverseSentence();
int main() {
	printf("문장을 입력하시오: ");
	reverseSentence();
	printf("\n");
	return 0;
}void reverseSentence() {
	char c;
	scanf("%c", &c);
	if (c != '\n') {
		reverseSentence();
		printf("%c", c);
	}
}

10번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double recursive(int x);
int main() {
	int n;
	scanf("%d", &n);
	printf("%lf", recursive(n));
	return 0;
}
double recursive(int x) {
	if (x == 0) return 0;
	return 1.0 / x + recursive(x - 1);
}

11번 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fib(int n) {
	if (n == 0) return 0;
	if (n == 1)return 1;
	return (fib(n - 1) + fib(n - 2));
}
int main() {
	for (int i = 0; i < 10; i++)
		printf("fib(%d) = %d\n", i, fib(i));
	return 0;
}

12번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int balance = 10000;
void show_menu() {
	 printf("********** Welcome to Express ATM **********\n");
	 printf("<1> 잔고 확인\n");
	 printf("<2> 입금\n");
	 printf("<3> 출금\n");
	 printf("<4> 종료\n");
	 printf("하나를 선택하시오: ");
}
void deposit() {
	 int deposit;
	 printf("입금 금액을 입력하시오: ");
	 scanf("%d", &deposit);
	 balance += deposit;
	 printf("새로운 잔고는 %d원입니다.\n", balance);
}
void withdrawal() {
	 int withdrawal;
	 printf("출금 금액을 입력하시오: ");
	 scanf("%d", &withdrawal);
	 if (withdrawal > balance) {
		 printf("잔액이 부족합니다.\n");
	 }
	 else {
		 balance -= withdrawal;
		 printf("잔고는 %d원입니다.\n", balance);
	 }
}
int main() {
	 int menu;
	 while (1) {
		 show_menu();
		 scanf("%d", &menu);

		 switch (menu) {
		 case 1:
			 printf("잔고는 %d원입니다.\n", balance);
			 break;
		 case 2:
			 deposit();
			 break;
		 case 3:
			 withdrawal();
			 break;
		 case 4:
			 printf("ATM을 종료합니다.\n");
			 return 0;
		 default:
			 printf("잘못된 입력입니다.\n");
			 break;
		 }
	 }
	 return 0;
}
