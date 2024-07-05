// 학번 2020305083
// 이름 한용빈

#include <stdio.h>

int quiz1_2020305083(void) {
    int num1, num2, result;
    char operator;
    char choice;
    do {
        printf("키보드 입력 (정수 문자 정수 순서로 입력하세요 ): ");
        scanf("%d %c %d", &num1, &operator, &num2);
        
        if (operator == '+') {
            result = num1 + num2;
        }
        else if (operator == '-') {
            result = num1 - num2;
        }
        else if (operator == '*') {
            result = num1 * num2;
        }
        else if (operator == '/') {
            if (num2 == 0) {
                printf("오류: 0으로 나눌 수 없습니다.\n");
                continue;
            }
            result = num1 / num2;
        }
        else {
            printf("오류: 잘못된 연산자입니다.\n");
            continue;
        }
        printf("계산 결과: %d %c %d = %d\n", num1, operator, num2, result);
        printf("계속 하시겠습니까? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    return 0;
}

int quiz2_2020305083(void) {
    int i, j;
    
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
