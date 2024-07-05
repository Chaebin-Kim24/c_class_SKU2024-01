// 학번 2022305059
// 이름 이다경

#include <stdio.h>

int quiz1_2022305059(void)
{
    char t;
    int x, y, result;
    
    printf("수식을 입력하세요: \n");
    scanf("%d %c %d", &x, &t, &y);
    
    if (t == '+')
        result = x + y;
    else if (t == '-')
        result = x - y;
    else if (t == '*')
        result = x * y;
    else if (t == '/')
        result = x / y;
    else if (t == '%')
        result = x % y;
    else
        printf("지원되지 않는 연산자입니다. ");

    printf("%d %c %d = %d \n", x, t, y, result);

    return 0;
}

int quiz2_2022305059(void)
{
    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j <= i; j++) {
            printf(" ");
        }
        
        for (int j = 5; j - i > 0; j--) {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}
