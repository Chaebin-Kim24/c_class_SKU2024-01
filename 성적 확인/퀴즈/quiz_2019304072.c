// 학번 2019304072
// 이름 조성주

#include <stdio.h>

int quiz1_2019304072(void)
{
    int a, b, d;
    char c;

    printf("정수를 입력하시오");
    scanf("%d", &a);
    printf("연산자를 입력하시오");
    scanf("%c", &c);
    printf("계산할 정수를 입력하시오");
    scanf("%d", &b);

    if (c == '+')
    {
        d = a + b;
    }
    else if (c == '-')
    {
        d = a - b;
    }
    else if (c == '*')
    {
        d = a * b;
    }
    else if (c == '/')
    {
        d = a / b;
    }
    printf("값 : %d", d);
    return 0;
}

int quiz2_2019304072(void)
{
    for (int i = 0; i < 5; i ++) {
        for (int j = 0; j <= i; j ++) {
            printf(" ");
        }
        for (int k = 0; k < (5 - i); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
