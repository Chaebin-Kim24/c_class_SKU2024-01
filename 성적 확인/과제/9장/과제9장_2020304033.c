// 학번 2020304033
// 이름 손영빈

// 9.c
#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    int length = strlen(str);
    for(int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    char ch[BUFSIZ];
    char r_ch[BUFSIZ];

    printf("문장을 입력하시오: ");
    fgets(ch, sizeof(ch), stdin);

    int length = strlen(ch);
    int r_ch_length = 0;

    for(int i = 0; i < length; i++)
    {
        if(ch[i] == ' ' || ch[i] == '\n')
        {
            r_ch[r_ch_length] = '\0';
            reverse(r_ch);
            printf(" ");
            r_ch_length = 0;
        }

        else
        {
            r_ch[r_ch_length++] = ch[i];
        }
    }

    printf("\n");

    return 0;
}

// 10.c
#include <stdio.h>

int main()
{
    int i, n = 0;
    double sum = 0;

    printf("몇 번째 분수까지 더할 것인지 입력하세요: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + 1.0/i;
    }

    printf("%f\n", sum);
    
    return 0;
}

// 11.c
#include <stdio.h>

int main()
{
    int n = 0, i = 0;

    printf("피보나치 수열로 더하고 싶은 마지막 순서를 입력하시오: ");
    scanf("%d", &n);

    int fib[n];

    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i <= n; i++)
    {
        fib[i] = (fib[i - 2] + fib[i - 1]);
    }
    
    printf("%d\n", fib[n]);

    return 0;
}

// 12.c
#include <stdio.h>
#include <stdlib.h>

int cur_balance = 100000;
int menu = 0;
int add = 0;
int dif = 0;

int main()
{
    int menu = 0;
    int add = 0;
    int dif = 0;
    do
    {
    printf("**********Welcome to Express ATM**********\n");
    printf("(1) 잔고 확인\n");
    printf("(2) 입금\n");
    printf("(3) 출금\n");
    printf("(4) 종료\n");
    scanf("%d", &menu);

    switch(menu)//첫 번째 시작화면에서의 동작 선택
    {
       case 1:
        {
           printf("현재 잔고: %d원 입니다\n", cur_balance);
           break;
        }

       case 2:
        {
            printf("입금 금액: ");
            scanf("%d", &add);
            cur_balance += add;
            printf("새로운 잔고는 %d원 입니다.\n", cur_balance);
            break;
        }

        case 3:
        {
            printf("출금 금액: ");
            scanf("%d", &dif);
            cur_balance -= dif;
            printf("새로운 잔고는 %d원 입니다.\n", cur_balance);
            break;
        }

        case 4:
        {
            printf("이용해 주셔서 감사합니다.\n");
            exit(1);
        }

        default :
        {
            printf("잘못된 입력입니다. 다시 입력하여 주세요\n");
            break;
        }
    }
    }while(menu != 4);

    return 0;
}