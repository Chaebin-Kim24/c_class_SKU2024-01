// 학번 2021602024
// 이름 유시은

#include <stdio.h>

int quiz1_2021602024(void)
{
    int a = 100;
     int b = 50;
     int c, d;
     int f, g;
     printf("계산에 필요한 첫번째 숫자를 입력하십시오 : \n");
     scanf("%d", &c);
     printf("계산에 필요한 숫자를 입력하십시오 : \n");
     scanf("%d", &d);
     printf("%d + %d = %d 입니다.\n", c, d, c + d);
     printf("%d - %d = %d 입니다.\n", c, d, c - d);
     printf("%d * %d = %d 입니다.\n", c, d, c * d);
     printf("%d / %d = %d 입니다.\n", c, d, c / d);
     
     return 0;
}

int quiz2_2021602024(void)
{
    int i = 0, j = 0, k = 0;
 
    for ( i = 0; i < 5; i++ )
    {
        for ( k = 0; k < i; k++ )
        {
            printf(" ");
        }
        for ( j = 0; j < 5-i; j++ )
            printf("*");
        printf("\n");
    }
    
    return 0;
}
