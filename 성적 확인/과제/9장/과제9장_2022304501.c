// 학번 2022304501
// 이름 김준수

9번
#include <stdio.h>

// 재귀 함수 정의
void reversePrint() {
    char c;
    scanf_s("%c", &c, sizeof(c)); // 사용자로부터 문자 입력 받기

    if (c != '\n' && c != EOF) { // 개행 문자나 파일의 끝이 아닌 경우
        reversePrint(); // 재귀 호출로 다음 문자 입력 받기
        printf("%c", c); // 입력 받은 문자 출력
    }
}

int main() {
    printf("문자열을 입력하세요: ");
    reversePrint(); // 재귀 함수 호출하여 역순 출력

    return 0;
}
10번
#include <stdio.h>

// 주어진 수식을 순환적으로 계산하는 함수
float recursive(int n) {
    if (n == 1) // n이 1일 때는 1/1로 계산
        return 1.0;
    else // 그 외의 경우에는 1/n + recursive(n-1)로 계산
        return 1.0 / n + recursive(n - 1);
}

int main() {
    int n;
    printf("n 값 입력: ");
    scanf("%d", &n);
    
    // 주어진 수식 계산
    float result = recursive(n);
    
    // 결과 출력
    printf("결과: %.6f\n", result);
    
    return 0;
}

11번
#include <stdio.h>

// 피보나치 수열을 계산하는 함수
int fibonacci(int n) {
    if (n <= 1) // n이 0이거나 1이면 해당 값 리턴
        return n;
    else // 그 외의 경우에는 이전 두 수의 합 리턴
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("몇 번째 피보나치 수를 계산할까요? ");
    scanf_s("%d", &n);

    // 피보나치 수 출력
    printf("피보나치 수열의 %d번째 수는 %d입니다.\n", n, fibonacci(n));

    return 0;
}

12번
#include <stdio.h>

// 전역 변수로 계좌의 잔고 선언
float accountBalance = 1000.0;

// 메뉴를 표시하는 함수
void displayMenu() {
    printf("\n********************** Welcome to Express ATM **********************\n");
    printf("(1) 잔고 확인\n");
    printf("(2) 입금\n");
    printf("(3) 출금\n");
    printf("(4) 종료\n");
    printf("*********************************************************************\n");
}

int main() {
    int choice;
    float amount;

    do {
        displayMenu(); // 메뉴 표시

        printf("하나를 선택하시오: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            printf("현재 잔고: %.2f 원\n", accountBalance);
            break;
        case 2:
            printf("입금 금액: ");
            scanf_s("%f", &amount);
            if (amount > 0) {
                accountBalance += amount;
                printf("새로운 잔고는 %.2f 원 입니다.\n", accountBalance);
            }
            else {
                printf("유효하지 않은 금액입니다.\n");
            }
            break;
        case 3:
            printf("출금 금액: ");
            scanf_s("%f", &amount);
            if (amount > 0 && amount <= accountBalance) {
                accountBalance -= amount;
                printf("새로운 잔고는 %.2f 원 입니다.\n", accountBalance);
            }
            else {
                printf("잔고가 부족하거나 유효하지 않은 금액입니다.\n");
            }
            break;
        case 4:
            printf("프로그램을 종료합니다.\n");
            break;
        default:
            printf("잘못된 선택입니다. 다시 선택하세요.\n");
        }
    } while (choice != 4);

    return 0;
}

