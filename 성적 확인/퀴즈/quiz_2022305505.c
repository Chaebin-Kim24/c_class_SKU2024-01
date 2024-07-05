// 학번 2022305505
// 이름 양민철

#include <stdio.h>

int quiz1_2022305505(void)
{
    
    char op;
    int x, y, result;
    printf("수식을 입력하시오(예: 2 + 5)>>");
    scanf("%d %c %d", &x, &op, &y);
    switch (op)
    {//산술 계산기
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        result = x / y;
        break;
    case '%':
        result = x % y;
        break;
    default:
        printf("지원되지 않는 연산자입니다. /n");
        break;
    }
    printf("%d %c %d = %d |n",x, op, y, result);
    
    return 0;
}

int quiz2_2022305505(void)
{
    //*
    int i, j;
    for (i = 5; i > 0; i--) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
        return 0;
}
