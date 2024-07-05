// 학번 2019304029
// 이름 박성준

#include <stdio.h>

int quiz1_2019304029(void)
{
    char ch;
    int x,y,result;
    printf("키보드 입력: \n");
    scanf("%d,%c,%d",&x, &ch, &y);
    if (ch == '+')
    result = x + y;
    else if (ch == '-')
    result = x - y;
    else if (ch == '*')
    result = x * y;
    else if (ch == '/')
    result = x / y;
    else if (ch == '%')
    result = x % y;
    else
    printf("잘못 입력하였습니다.");
    printf("결과 : %d %c %d = %d", x, ch, y, result);
    return 0;
}

int quiz2_2019304029(void)
{
    int i;
    for (i = 5; i >= 0; i--);
    // printf("*")
    return 0;
}
