// 학번 2021305002
// 이름 강상연

#include <stdio.h>

int quiz1_2021305002(void)
{
    int x, y, result;
    char op;
    printf("수식을 입력하시오: \n");
    scanf("%d%c%d", &x, &op, &y);

    if (op == 'x')
        result = x + y;
    else if (op == '-')
        result = x - y;
    else if (op == '*')
        result = x * y;
    else if (op == '/')
        result = x / y;

    printf("결과: %d%c%d\n", x, op, y, result);

    return 0;
}

int quiz2_2021305002(void)
{
    return 0;
}
