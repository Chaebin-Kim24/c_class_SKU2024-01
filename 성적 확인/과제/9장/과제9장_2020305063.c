// 학번 2020305063
// 이름 장준혁

9번
#include <stdio.h>
#include <string.h>

void reverse() {
    char c = getchar(); // 문자 입력 받기

    if (c != '\n') { // 입력이 '\n'이 아닌 경우에만 재귀 호출
        reverse(); // 역순 출력을 위해 재귀 호출
        printf("%c", c); // 문자 출력
    }
}

int main() {
    printf("문자열을 입력하세요: ");
    reverse(); // 역순으로 출력하기 위해 reverse() 함수 호출
    printf("\n");

    return 0;
}

10번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double recursive(int n) {
    if (n == 1) 
        return 1.0;
    else
        return 1.0 / n + recursive(n - 1); 
}

int main() {
    int n;
    double sum;

    printf("n 값을 입력하세요: ");
    scanf("%d", &n);

    sum = recursive(n); 

    printf("수식의 값: %.5f\n", sum);

    return 0;
}



11번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) 
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int n, i;

    printf("몇 번째 피보나치 수를 계산할까요? ");
    scanf("%d", &n);

    printf("피보나치 수열: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}



12번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int balance = 10000;

void printMenu() {
    printf("*********** welcome to Express ATM **********\n");
    printf("(1) 잔고 확인\n");
    printf("(2) 입금\n");
    printf("(3) 출금\n");
    printf("(4) 종료\n");
    printf("하나를 선택하시오: ");
}

int main() {
    int choice;
    int amount;

    printMenu();

    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("현재 잔고는 %d원입니다.\n", balance);
        break;
    case 2:
        printf("입금 금액: ");
        scanf("%d", &amount);
        balance += amount;
        printf("새로운 잔고는 %d원입니다.\n", balance);
        break;
    case 3:
        printf("출금 금액: ");
        scanf("%d", &amount);
        if (amount > balance) {
            printf("잔고가 부족합니다.\n");
        }
        else {
            balance -= amount;
            printf("새로운 잔고는 %d원입니다.\n", balance);
        }
        break;
    case 4:
        printf("프로그램을 종료합니다.\n");
        break;
    default:
        printf("올바르지 않은 선택입니다.\n");
        break;
    }

    return 0;
}
