// 학번 2022304008
// 이름 김성수

// 9번
#include <stdio.h>

int main() {
    char str[100]; 
    char c;
    int length = 0;

    printf("문자열을 입력하세요: ");

    while (scanf("%c", &c) == 1 && c != '\n') {
        str[length] = c;
        length++;
    }

    printf("입력한 문자열의 역순: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

// 10번
#include <stdio.h>

double recursive(double n) {
	if (n != 1)
		return 1.0 / n + recursive(n - 1);
	else
		return(n);
}
int main(void) {
	double num;
	scanf("%lf", &num);
	printf("%f", recursive(num));
	return 0;
}

// 11번
#include <stdio.h>

int fib(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
}
int main(void) {
	int i;
	for (i = 0; i < 10; i++)
		printf("fib(%d)=%d\n", i, fib(i));
	return 0;
}

// 12번
#include <stdio.h>
float account_balance = 1000.0;

void displayMenu();
void deposit();
void withdraw();
void checkBalance();

int main() {
    int choice;

    do {
        displayMenu();
        printf("원하는 작업을 선택하세요: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            deposit();
            break;
        case 2:
            withdraw();
            break;
        case 3:
            checkBalance();
            break;
        case 4:
            printf("ATM을 종료합니다.\n");
            break;
        default:
            printf("잘못된 선택입니다. 다시 선택해주세요.\n");
        }
    } while (choice != 4);

    return 0;
}

void displayMenu() {
    printf("\n=== ATM 메뉴 ===\n");
    printf("1. 입금\n");
    printf("2. 출금\n");
    printf("3. 잔고 확인\n");
    printf("4. 종료\n");
}

void deposit() {
    float amount;
    printf("입금할 금액을 입력하세요: ");
    scanf("%f", &amount);
    account_balance += amount;
    printf("입금이 완료되었습니다.\n");
}

void withdraw() {
    float amount;
    printf("출금할 금액을 입력하세요: ");
    scanf("%f", &amount);
    if (amount > account_balance) {
        printf("잔액이 부족합니다.\n");
    }
    else {
        account_balance -= amount;
        printf("출금이 완료되었습니다.\n");
    }
}

void checkBalance() {
    printf("현재 잔액은 %.2f원 입니다.\n", account_balance);
}