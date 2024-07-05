// 학번 2022304008
// 이름 김성수

#include <stdio.h>

int quiz1_2022304008(void)
{
    int a, b, sum;
    char x;
    
    scanf("%d %c %d", &a, &x, &b);
    
    if(x =='*'){
        sum = a * b;
    }
    
    else if(x == '%'){
        sum = a / b;
    }
    
    else if(x == '+'){
        sum = a + b;
    }
    
    else{
        sum = a - b;
    }
    
    printf("%d %c %d = %d", a, x, b, sum);
    
    return 0;
}

int quiz2_2022304008(void)
{
    int num = 5;
    
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j < i; j++) {
            printf(" ");
        }
        for(int k = i; k <= num; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
