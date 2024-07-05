// 학번 2020305063
// 이름 장준혁

#include <stdio.h>

int quiz1_2020305063(void)
{
    char op;
    int x, y, result;
    printf("수식을 입력 >> ");
    scanf("%d %c %d", &x, &op, &y);

    if (op == '+')
    result = x + y;
    else if (op == '-')
    result = x - y;
    else if (op == '*')
    result = x * y;
    else if (op == '/')
    result = x / y;
    else if (op == '%')
    result = x % y;
    else
    printf("올바른 연산을 입력");

    printf("%d %c %d = %d \n", x, op, y, result);

    return 0;
}

int quiz2_2020305063(void)
{
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 5; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j <= i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
