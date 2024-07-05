// 학번 2020305502
// 이름 김민석

#include <stdio.h>

int quiz1_2020305502(void)
{
    int x, y,result;
    char op;
    
    scanf("%d %c %d", &x,&op,&y);
    
    switch (op)
    {
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
            printf("지원되지 않는 연산자입니다. \n");
            break;
    }
    printf("%d %c %d = %d \n", x, op, y, result);

    return 0;
}

int quiz2_2020305502(void)
{
    int i, j;
    for (i = 5; i > 0; i--) {
    for (j = 0; j < i; j++) {
    printf("*");
    }
    printf("\n");
    }
    
    return 0;
}
