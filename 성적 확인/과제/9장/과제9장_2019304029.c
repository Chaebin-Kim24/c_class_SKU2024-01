// 학번 2019304029
// 이름 박성준

/*  문제9
#define _CRT_NO_WARNINGS
#include <stdio.h>

void reverse();

int main()
{
	printf("문장을 입력하시오: \n");
	reverse();
	return 0;
}

void reverse()
{
	char a;
	scanf_s("%c", &a);
	if (a != '\n')
	{
		reverse();
		printf("%c", a);
	}
}*/


/* 문제10
#define _CRT_NO_WARNINGS
#include <stdio.h>

double recursive(double n)
{
	if (n != 1)
		return 1.0 / n + recursive(n - 1);
	else
		return(n);
}

int main()
{
	double num;
	scanf_s("%lf", &num);
	printf("%f", recursive(num));

	return 0;
}*/


/*문제 11
#define _CRT_NO_WARNINGS
#include <stdio.h>

int fib(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return(fib(n - 1) + fib(n - 2));
}
int main()
{
	for (int i = 0; i < 10; i++)
		printf("fib(%d) = %d\n", i, fib(i));
			return 0;
}
*/


/* 문제 12

#define _CRT_NO_WARNINGS
#include <stdio.h>

int money = 10000;

void show_menu()
{
	printf("********** Welcome to Express ATM **********\n");
	printf("(1) 잔고 확인\n");
	printf("(2) 입금\n");
	printf("(3) 출금\n");
	printf("(4) 종료\n");
	printf("하나를 선택하시오: ");
}

void deposit()
{
	int deposit;
	printf("입금 금액을 입력하시오: ");
	scanf_s("%d", &deposit);

	money += deposit;

	printf("새로운 잔고는 %d입니다", money);
}

void out()
{
	int out;

	printf("출금 금액을 입력하시오: ");
	scanf_s("%d", &out);

	if (out > money)
	{
		printf("잔액이 부족합니다\n");
	}
	else
	{
		money -= out;
		printf("잔고는 %d원입니다.\n", money);
	}
}

int main()
{
	int menu;
	while (1)
	{
		show_menu();
		scanf_s("%d", &menu);
		
		switch (menu)
		{
		case 1:
			printf("잔고는 %d원입니다.\n", money);
			break;
		case 2:
			deposit();
		    break;
		case 3:
			out();
			break;
		case 4:
			printf("ATM 사용 종료.\n");
			return 0;
		default:
			printf("잘못된 입력입니다.\n");
			break;
		}
	}
	return 0;
}
*/