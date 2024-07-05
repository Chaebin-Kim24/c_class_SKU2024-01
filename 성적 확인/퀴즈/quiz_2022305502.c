// 학번 2022305502
// 이름 서수빈

#include <stdio.h>

int quiz1_2022305502(void)
{
    int x, y, result;
    printf("7,4");
    scanf ("%d%d",&x,&y);
    
    result = x + y;
    printf("%d+%d=%d", x, y, result);
    
    return 0;
}

int quiz2_2022305502(void)
{
    int a = 11;

    for (int i = 0; i < 6; i++)

    {

        for (int j = i; j > 0; j--)

        {

            printf(" ");

        }

        for (int k = a; k > 0; k--)

        {

            printf("*");

        }

        a -= 2;

        printf("\n");

    }
    return 0;
}
