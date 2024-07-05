// 학번 2022304501
// 이름 김준수

#include <stdio.h>

int quiz1_2022304501(void)
{
    char op;
    int x, y, result;
    
    printf("수식을 입력하시오(예: 2 + 5) >> ");
    scanf("%d %c %d", &x, &op, &y);
    if( op == '+' )
        result = x + y;
    else if( op == '-' )
        result = x - y;
    else if( op == '*' )
        result = x * y;
    else if( op == '/' )
        result = x / y;
    else if( op == '%' )
        result = x % y;
    else
        printf("지원되지 않는 연산자입니다. ");
    printf("%d %c %d = %d \n", x, op, y, result);
    return 0;
}

int quiz2_2022304501(void)
{
    int x, y;
    for(y = 5; y >= 1; y--) {
        for(x = 0; x < y; x++)
            printf("*");
        printf("\n"); // 내부 반복문이 종료될 때마다 실행
    }
    return 0;
}
