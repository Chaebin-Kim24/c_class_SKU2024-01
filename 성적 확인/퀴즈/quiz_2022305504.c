// 학번 2022305504
// 이름 이승미

#include <stdio.h>

int quiz1_2022305504(void)
{
    char op;
    int x, y, result;
    printf("수식을 입력하시오(예: 2 + 5) >> ");
    scanf("%d %c %d", &x, &op, &y);


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

int quiz2_2022305504(void)
{
    // 반복을 이용한 네모 그리기
    int i;
    printf("*****");
    for(i = 0;i < 5; i--)

        ;
        
    return 0;
}
