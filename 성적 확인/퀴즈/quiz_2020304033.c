// 학번 2020304033
// 이름 손영빈

#include <stdio.h>

int quiz1_2020304033(void)
{
    int x, y, z;
    int sum = x + y;
    int dif = x - y;
    int mul = x * y;
    int div = x / y;
    int result;

    printf("계산하고자 하는 숫자와 계산방식을 입력하여 주세요: (숫자 사칙연산 기호 숫자) \n");
    scanf("%d %c %d", &x, &z, &y);

    if (z == '+') {
        result = sum;
        printf("계산결과는 &d입니다.\n", &result);
    }
    else if (z == '-') {
        result = dif;
        printf("계산결과는 &d입니다.\n", &result);
    }
    else if (z == '*') {
        result = mul;
        printf("계산결과는 &d입니다.\n", &result);
    }
    else if (z == '/') {
        result = div;
        printf("계산결과는 &d입니다.\n", &result);
    }
    else {
        printf("잘못된 입력입니다. 다시 입력하여 주세요.");
    }

    return 0;
}

int quiz2_2020304033(void)
{
    printf("*****");
    printf(" ****");
    printf("  ***");
    printf("   **");
    printf("    *");

    return 0;
}
