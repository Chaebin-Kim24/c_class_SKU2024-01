// 학번 2020305083
// 이름 한용빈

# include <stdio.h>
int balance = 10000;
void display_menu() {
	printf("******************************\n");
	printf("Welcome to Express ATM\n");
	printf("******************************\n");
	printf("(1) 잔고 확인\n");
	printf("(2) 입금\n");
	printf("(3) 출금\n");
	printf("(4) 종료\n");
}
void check_balance() {
	printf("현재 잔고는 %d입니다.\n", balance);
}
void deposit( int amount ) {
	balance += amount;
	printf("입금 금액: %d, 새로운 잔고는 %d입니다.\n", amount, balance);
}
void withdraw( int amount ) {
	if (amount <= balance) {
		balance -= amount;
		printf("출금 금액: %d, 새로운 잔고는 %d입니다.\n", amount, balance);
	}
	else {
		printf("잔고가 부족합니다.\n");
	}
}
int main() {
	char choice;
	int amount;

	while ( 1 ) {
		display_menu( );
		printf("하나를 선택하시오: ");
		scanf_s(" %c", &choice);
		switch (choice) {
		case '1':
			check_balance();
			break;
		case '2':
			printf("입금 금액: ");
			scanf_s("%d", &amount);
			deposit(amount);
			break;
		case '3':
			printf("출금 금액: ");
			scanf_s("%d", &amount);
			withdraw(amount);
			break;
		case '4':
			printf("프로그램을 종료합니다.\n");
			return 0;
		default:
			printf("올바른 선택을 해주세요.\n");
		}
	}
	return 0;
}