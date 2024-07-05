// 학번 2020305052
// 이름 이종현

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int quiz1_2020305052(void)
{
    char op;
    int n1, n2;
    float n3;
    scanf("%d %c %d", &n1, &op, &n2);
    switch (op) {
        case '+':
            printf("%d + %d = %d", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%d - %d = %d", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%d * %d = %d", n1, n2, n1 * n2);
            break;
        case '/':
            if (n2 != 0) {
                n3 = (float)n1 / n2;
                printf("%d / %d = %f", n1, n2, n3);
            }
            else {
                printf("0으로 나눌 수 없음");
            }
            break;
    }
    return 0;
}

int quiz2_2020305052(void)
{
    int i, j;
    for (i = 0; i < 5; i++){
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < 5 - i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
