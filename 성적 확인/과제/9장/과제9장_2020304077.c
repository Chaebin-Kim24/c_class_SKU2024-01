// 학번 2020304077
// 이름 조현우

9.c
#include <stdio.h>

void reverse() {
    char c;
    scanf_s("%c", &c);

    if (c != '\n') {
        reverse();
        printf("%c", c);
    }
}

int main() {
    printf("문자열을 입력하세요 (엔터로 종료): ");
    reverse();
    printf("\n");
    return 0;
}


10.c
#include <stdio.h>

double sum_reciprocal(int n) {
    if (n == 1)
        return 1.0;
    else
        return 1.0 / n + sum_reciprocal(n - 1);
}

int main() {
    int n;
    printf("n 값을 입력하세요: ");
    scanf_s("%d", &n);

    double result = sum_reciprocal(n);
    printf("1/1 + 1/2 + 1/3 + ... + 1/%d = %.5f\n", n, result);
    return 0;
}


11.c
#include <stdio.h>

int fibonacci(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  
}

int main() {
    int n;
    printf("피보나치 수열의 n번째 항을 계산합니다. n을 입력하세요: ");
    scanf_s("%d", &n);

    int result = fibonacci(n);
    printf("피보나치 수열의 %d번째 수는 %d입니다.\n", n, result);
    return 0;
}


12.c
#include <stdio.h>


int balance = 10000;


void display_menu() {
    printf("\n***************** Welcome to Express ATM *****************\n");
    printf("1. 잔고 확인\n");
    printf("2. 입금\n");
    printf("3. 출금\n");
    printf("4. 종료\n");
    printf("하나를 선택하시오: ");
}


void check_balance() {
    printf("현재 잔고는 %d입니다.\n", balance);
}


void deposit() {
    int amount;
    printf("입금 금액: ");
    scanf_s("%d", &amount);
    balance += amount;
    printf("새로운 잔고는 %d입니다.\n", balance);
}

void withdraw() {
    int amount;
    printf("출금 금액: ");
    scanf_s("%d", &amount);
    if (amount > balance) {
        printf("잔고가 부족합니다.\n");
    }
    else {
        balance -= amount;
        printf("새로운 잔고는 %d입니다.\n", balance);
    }
}

int main() {
    int choice;

    while (1) {
        display_menu();
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
            return 0;
        default:
            printf("잘못된 입력입니다. 다시 입력해주세요.\n");
        }
    }

    return 0;
}