// 학번 2020305052
// 이름 이종현

#9
#include <stdio.h>

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}

int main(void) {
    printf("문장을 입력하시오: ");
    reverseSentence();
    return 0;
}

#10
#include <stdio.h>

float recursive(int n) {
    if (n <= 1)
        return 1.0;
    else
        return 1.0 / n + recursive(n - 1);
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%f", recursive(n));
    return 0;
}

#11
#include <stdio.h>

int fib(int n) {
if (n == 0) return 0;
if (n == 1) return 1;
return (fib(n - 1) + fib(n - 2));
}

int main(void) {
for (int i = 0; i < 10; i++)
printf("fib(%d) = %d\n", i, fib(i));
return 0;
}

#12
#include <stdio.h>

int money;

void menu(void) {
    printf("***************Welcome to Express ATM***************\n");
    printf("(1) 잔고 확인\n");
    printf("(2) 입금\n");
    printf("(3) 출금\n");
    printf("(4) 종료\n");
}

void balance(void) {
    printf("현재 잔고는 %d입니다.\n", money);
}

void deposit(void) {
    int n;
    printf("입금 금액: ");
    scanf("%d", &n);
    money += n;
    printf("새로운 잔고는 %d입니다.\n", money);
}

void withdraw(void) {
    int n;
    printf("출금 금액: ");
    scanf("%d", &n);
    if (n <= money) {
        money -= n;
        printf("현재 잔고는 %d입니다.\n", money);
    }
    else {
        printf("잔액이 부족합니다.\n");
    }
}

int main(void) {
    int choice;
    menu();
    while (1) {
        printf("하나를 선택하시오: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            balance();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            printf("ATM을 종료합니다.\n");
            return 0;
        default:
            printf("다시 선택하세요.\n");
        }
    }
    return 0;
}
