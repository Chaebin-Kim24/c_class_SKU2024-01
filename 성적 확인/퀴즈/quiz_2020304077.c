// 학번 2020304077
// 이름 조현우

#include <stdio.h>

int quiz1_2020304077(void)
{
    int num1, num2, result;
    char c;
    
    printf("숫자, 문자, 숫자 입력(문자는 +,-,*,/ 중 하나 선택): ");
    scanf("%d %c %d", &num1, &c, &num2);
    
    switch (c){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("잘못된 값\n");
            return 1;
    }
    
    printf("%d %c %d = %d\n", num1, c, num2, result);
    
    return 0;
}

int quiz2_2020304077(void)
{
    int i, j;
    
    for (i = 1; i <= 5; i++) {
        for (j = 2; j < i; j++) {
            printf(" ");
        }
        for (j = 5; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
