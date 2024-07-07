// 학번 2019315029 
// 이름 임승호

#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

// 9번 문제
//
//void reverse() {
//    char c;
//    scanf_s("%c", &c);
//    if (c != '\n') {
//        reverse();
//        printf("%c", c);
//    }
//}
//
//int main() {
//    printf("문장을 입력하시오: ");
//    reverse();
//    printf("\n");
//    return 0;
//}

// 10번 문제
//
//double recursive(int n) {
//    if (n == 1)
//        return 1.0;
//    else
//        return 1.0 / n + recursive(n - 1);
//}
//
//int main() {
//    int n;
//    printf("n 값을 입력하세요: ");
//    scanf_s("%d", &n);
//
//    double result = recursive(n);
//    printf("결과: %lf\n", result);
//
//    return 0;
//}

// 11번 문제
//
//int fibonacci(int n) {
//    if (n == 0)
//        return 0;
//    else if (n == 1)
//        return 1;
//    else
//        return fibonacci(n - 2) + fibonacci(n - 1);
//}
//
//int main() {
//    int n;
//    printf("n 값을 입력하세요: ");
//    scanf_s("%d", &n);
//
//    for (int i = 0; i <= n; i++) {
//        printf("fib(%d) = %d\n", i, fibonacci(i));
//    }
//
//    return 0;
//}

//12번 문제
//
//int balance = 10000;
//
//void displayMenu() {
//    printf("**************welcome to express ATM**************\n");
//    printf("(1) 잔고 확인\n");
//    printf("(2) 입금\n");
//    printf("(3) 출금\n");
//    printf("(4) 종료\n");
//    printf("하나를 선택하시오: ");
//}
//
//int main(void) {
//    int choice;
//    int amount;
//
//    do {
//        displayMenu();
//        scanf_s("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("현재 잔고는 %d원입니다.\n", balance);
//            break;
//        case 2:
//            printf("입금 금액: ");
//            scanf_s("%d", &amount);
//            balance += amount;
//            printf("새로운 잔고는 %d원입니다.\n", balance);
//            break;
//        case 3:
//            printf("출금 금액: ");
//            scanf_s("%d", &amount);
//            if (amount > balance) {
//                printf("잔고가 부족합니다.\n");
//            }
//            else {
//                balance -= amount;
//                printf("새로운 잔고는 %d원입니다.\n", balance);
//            }
//            break;
//        case 4:
//            printf("ATM을 종료합니다.\n");
//            break;
//        default:
//            printf("잘못된 선택입니다. 다시 선택해주세요.\n");
//            break;
//        }
//    } while (choice != 4);
//
//    return 0;
//}