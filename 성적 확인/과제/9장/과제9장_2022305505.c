//학번 2022305505
//이름 양민철

/*#include <stdio.h> define# CRT_SECURE_NO_WARNINGS


void reversel() {
	char c;
	scanf_s("%c", &c);
	if (c != '\n') {
		reversel();
		printf("%c", c);
	}
}
int main() {
	printf("i like programming");
	reversel();
	printf("\n");
	return 0;
}

#include <stdio.h> define# CRT_SECURE_NO_WARNINGS

float recursive(int n) {
	if (n == 1)
		return 1.0;
	else
		return 1.0 / n + recursive(n - 1);
}

int main() {
	int n;
	printf("n 값을 입력하세요: ");
	scanf_s("%d", &n);

	float result = recursive(n);

	printf("1/1 + 1/2 + 1/3 + ... + 1/%d = %f\n", n, result);

	return 0;
}
#include <stdio.h>define# CRT_SECURE_NO_WARNINGS

int fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int n;
	printf("n 값을 입력하세요: ");
	scanf_s("%d", &n);

	printf("피보나치 수열의 %d번째 숫자는 %d입니다.\n", n, fibonacci(n));

	return 0;
}
#include <stdio.h>define# CRT_SECURE_NO_WARNINGS


int balance = 10000;


void display_menu() {
	printf("\n********** ATM 메뉴 **********\n");
	printf("1. 잔고 확인\n");
	printf("2. 입금\n");
	printf("3. 출금\n");
	printf("4. 종료\n");

}

void check_balance() {
	printf("새로운 잔고는 %d입니다.\n", balance);
}


void deposit() {
	int amount;
	printf("입금할 금액을 입력하세요: ");
	scanf_s("%d", &amount);
	balance += amount;
	printf("입금 금액: %d.\n", amount);
	check_balance();
}

void withdraw() {
	int amount;
	printf("출금할 금액을 입력하세요: ");
	scanf_s("%d", &amount);
	if (amount > balance) {
		printf("잔액이 부족합니다.\n");
	}
	else {
		balance -= amount;
		printf("%d원이 출금되었습니다.\n", amount);
	}
}

int main() {
	int choice;

	do {
		display_menu();
		printf("하나를 선택하시오 : ");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			check_balance();
			break;
		case 2:
			deposit();
			break;
		case 3:
			withdraw();
			break;
		case 4:
			printf("프로그램을 종료합니다.\n");
			break;
		default:
			printf("잘못된 입력입니다. 다시 선택하세요.\n");
		}
	} while (choice != 4);

	return 0;
}*/