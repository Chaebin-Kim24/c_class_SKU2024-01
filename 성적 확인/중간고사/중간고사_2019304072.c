/**
	C프로그래밍 (CE1001-01) / 프로그래밍기초1 (E1237-01) 중간고사

												이름: 조성주
												학번: 2019304072
 **/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 문제 1
	// 코드의 실행 결과로 다음과 같이 나오기 위해서
	// 코드의 밑줄친 부분에 들어갈 알맞는 단어를 보기에서 골라서 정답에 적으시오.

	int problem1_int = 1;
	double problem1_double = 2.3;
	unsigned problem1_uint = 45;
	printf("Problem 1 \nHello world %d%3.1f%2u\n", problem1_int,
		problem1_double,
		problem1_uint);

	// 출력:
	// Problem 1
	// Hello world 12.345

	// 보기 
	// 1) %d%3.1lf%2u     2) %d%.1f%u     3) %d.%f%u     4) %dfu     5) %d.1fu

	// 정답: 1




	// 문제 2
	// 코드의 실행 결과를 다음과 같이 나오기 위해서
	// 표시된 줄을 어떻게 수정할지를 보기에서 골라서 정답에 적으시오.

	int p2_usd = 13, p2_krw = 10000;
	double p2_krw_usd_rate = p2_krw / p2_usd; // 수정할 코드
	printf("\nProblem 2 \n1 US dollar is equal to %.2lf won\n", p2_krw_usd_rate);

	// 출력:
	// Problem 2
	// 1 US dollar is equal to 769.23 won

	// 보기
	// 1) float p2_krw_usd_rate = p2_krw / p2_usd; 
	// 2) double p2_krw_usd_rate = (double) p2_krw / (double) p2_usd;
	// 3) p2_krw_usd_rate = p2_krw // p2_usd
	// 4) double p2_krw_usd_rate = p2_krw * 100 / p2_usd / 100;
	// 5) long double krw_usd_rate = (double) p2_krw / p2_usd;

	// 정답: 2




	// 문제 3
	// 다음 코드의 실행 결과로 알맞는 문자열을 보기에서 골라서 정답에 적으시오.

	int p3_i = 1, p3_j = 2;
	double p3_x = 1.1, p3_y = 2.2;

	p3_i += 1 && (p3_j = 0), p3_x = (int)p3_y ? (p3_y /= 2) : p3_y;
	printf("\nProblem 3: p3_i = %d, p3_j = %d, p3_x = %lf, p3_y = %lf \n",
		p3_i, p3_j, p3_x, p3_y);

	// 출력:

	// 보기
	// 1) Problem 3: p3_i = 1, p3_j = 2, p3_x = 1.100000, p3_y = 2.200000 
	// 1) Problem 3: p3_i = 3, p3_j = 2, p3_x = 2.200000, p3_y = 2.200000 
	// 1) Problem 3: p3_i = 1, p3_j = 0, p3_x = 1.100000, p3_y = 1.100000 
	// 1) Problem 3: p3_i = 3, p3_j = 0, p3_x = 2.000000, p3_y = 2.200000 
	// 1) Problem 3: p3_i = 1, p3_j = 0, p3_x = 2.000000, p3_y = 1.100000 

	// 정답: 3




	// 문제 4
	// 실행 결과를 다음과 같이 나오기 위해서
	// 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.

	int p4_number = 6;
	printf("\nProblem 4: ");
	// 코드를 추가할 위치
	printf("p4_number는 홀수입니다.\n");

	// 출력:
	// Problem 4: p4_number는 짝수입니다. 
	// 
	// 보기
	// 1) if (!(p4_number%2))
	//		printf("p4_number는 짝수입니다.");
	//    else
	// 2) if (!(p4_number %2 == 0))
	//		printf("p4_number는 짝수입니다.");
	// 3) if (p4_number %2 == 0)
	//		printf("p4_number는 짝수입니다.");
	// 4) if (p4_number%2)
	//		printf("p4_number는 짝수입니다.");
	//    else
	// 5) if (p4_number)
	//		printf("p4_number는 짝수입니다.");
	//    else
	//    


	// 정답: 1,5




	// 문제 5
	// 코드의 실행 결과를 다음과 같이 나오기 위해서
	// 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.

	int p5_x = 5, p5_y = 10, p5_result = 0;
	char p5_op = '*';

	switch (p5_op)
	{
	case '*':
		p5_result = p5_x * p5_y;
		// 코드를 추가할 위치
	default:
		printf("지원되지 않는 연산자입니다. \n");
	}
p5_print:
	printf("\nProblem 5: %d %c %d = %d \n", p5_x, p5_op, p5_y, p5_result);

	// 출력:
	// Problem 5: 5 * 10 = 50

	// 보기
	// 1) break;
	// 2) case '+': 
	//		p5_result = p5_x + p5_y;
	// 3) goto p5_print;
	// 4) goto default;
	// 5) continue;

	// 정답: 1,3,4,5



	// 문제 6
	// 코드의 실행 결과를 다음과 같이 나오기 위해서
	// 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.

	int p6_start = 6, p6_end = 12, p6_sum = 0, p6_i = 0;

	// 코드를 추가할 위치
	{
		p6_sum += p6_i;
	}
	printf("\nProblem 6: %d부터 %d까지의 합은 %d입니다. \n", p6_start, p6_end, p6_sum);

	// 출력:
	// Problem 6: 6부터 12까지의 합은 57입니다.

	// 보기
	// 1) p6_i = p6_start;
	//	  while (p6_i++ < p6_end)
	// 2) for (p6_i = p6_start; p6_i < p6_end; p6_i++)
	// 3) p6_i = p6_start;
	//	  while (++p6_i <= p6_end)
	// 4) for (p6_i = p6_start; p6_i < p6_end; ++p6_i)
	// 5) p6_i = p6_start;
	//	  while ((p6_i+=1) <= p6_end)

	// 정답: 1,3,5




	// 문제 7
	// 코드의 실행 결과를 다음과 같이 나오기 위해서
	// 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.

	int p7_i = 1, p7_n = 5;

	printf("\nProblem7:\n");
	printf("   p7_i    p7_i^3   \n");
	printf("====================\n");

	// 코드를 추가할 위치

	// 출력:
	// Problem7:
	// p7_i    p7_i ^ 3
	// 	====================
	//	1         1
	//	2         8
	//	3        27
	//	4        64
	//	5       125
	// 
	// 보기
	// 1) for (p7_i = 1; p7_i <= p7_n; p7_i++)
	//	    printf("%5d     %5d\n", p7_i, p7_i * p7_i * p7_i);
	// 2) p7_i = 1;
	//	  while (p7_i <= p7_n)
	//	    printf("%5d     %5d\n", p7_i, p7_i * p7_i * p7_i);
	//      p7_i++;
	// 3) for (p7_i = 1; p7_i <= p7_n; p7_i++)
	//	    printf("%5d     %5d\n", p7_i, p7_i ^ 3);
	// 4) p7_i = 1;
	//	  do{
	//	    printf("%5d     %5d\n", p7_i, p7_i * p7_i * p7_i);
	//      p7_i++;
	//	  } while (p7_i <= p7_n)
	// 5) for (p7_i = 1; p7_i++ < p7_n;)
	//	    printf("%5d     %5d\n", p7_i, p7_i * p7_i * p7_i);

	// 정답: 1



	// 문제 8
	// 코드의 실행 결과를 다음과 같이 나오기 위해서
	// 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.

	int p8_i = 0, p8_j = 0;
	printf("\nProblem8:\n ");
	for (p8_i = 0; p8_i < 8; p8_i++) printf("*");

	// 코드를 추가할 위치

	printf("\n ");
	for (p8_i = 0; p8_i < 8; p8_i++) printf("*");
	printf(" \n");

	// 출력:
	// Problem8:
	//  ********
	// *        *
	// *        *
	// *        *
	// *        *
	// *        *
	// *        *
	// *        *
	// *        *
	//  ********

	// 보기
	// 1) for(p8_j = 0; p8_j < 8; p8_j++)
	//	  {
	//		printf("\n*");
	//		for (p8_i = 0; p8_i < 8; p8_i++) printf(" ");
	//		printf("*");
	//	  }
	// 2) for(printf("\n*"); p8_j < 8; p8_j++)
	//	  {
	//		for (p8_i = 0; p8_i < 8; p8_i++) printf(" ");
	//		printf("*");
	//	  }
	// 3) for(printf("\n*"); p8_j < 8; p8_j++, printf("*"))
	//	  {
	//		for (p8_i = 0; p8_i < 8; p8_i++) printf(" ");
	//	  }
	// 4) for(p8_j = 0; p8_j < 8; printf("*"), p8_j++)
	//	  {
	//		printf("\n*");
	//		for (p8_i = 0; p8_i < 8; p8_i++) printf(" ");
	//	  }
	// 5) for(p8_j = 0; p8_j < 8; printf("*"), p8_j++)
	//	  {
	//		for (printf("\n*"), p8_i = 0; p8_i < 8; p8_i++) printf(" ");
	//	  }

	// 정답: 1,4,5



	// 문제 9
	// 코드의 실행 결과를 다음과 같이 나오기 위해서
	// 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.

	int p9_i = 0, p9_j = 0;
	printf("\nProblem9:\n");

	// 코드를 추가할 위치


	// 출력:
	// Problem9:
	// *********
	// *********
	// *********
	// *********
	// *********
	// *********
	// *********
	// *********
	// *********

	// 보기
	// 1) for (p9_i = 0; p9_i < 9; p9_i++)
	//    {
	// 	    for (p9_j = 0; p9_j < 9; p9_j++)
	// 	    {
	//        printf("*");
	//      }
	// 	    printf("\n");
	//    }
	// 2) for (; p9_i < 9; p9_i++, printf("\n"))
	//    {
	// 	    for (p9_j = 0; p9_j < 9; p9_j++)
	// 	    {
	//        printf("*");
	//      }
	//    }
	// 3) for (; p9_i < 9; p9_i++, printf("\n"))
	// 	    for (p9_j = 0; p9_j < 9; p9_j++, printf("*"))
	//        ;
	// 4) for (; p9_i++ < 9; printf("\n"))
	// 	    for (p9_j = 0; p9_j++ < 9; printf("*"))
	//        ;
	// 5) for (; p9_i++ < 9; printf("\n"))
	// 	    for (; p9_j++ < 9; printf("*"))
	//        ;

	// 정답: 1,2,3,4





	// 문제 10
	// 코드의 실행 결과를 다음과 같이 나오기 위해서
	// 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.

	int p10_i = 0, p10_j = 0;
	printf("\nProblem10:\n");

	// 코드를 추가할 위치
	do
		do
			;
	while (printf("*"), ++p10_j < 10);
	while (printf("\n"), (p10_j = ++p10_i) < 10);


	// 출력:
	// Problem10:
	// *********
	// ********
	// *******
	// ******
	// *****
	// ****
	// ***
	// **
	// *

	// 보기
	// 1) while (p10_i++ < 10)
	//    {
	// 	    p10_j = p10_i;
	//	    while (p10_j++ < 10)
	//	    {
	//		  printf("*");
	//	    }
	//	    printf("\n");
	//    }
	// 2) do
	//    {
	// 	    p10_j = p10_i;
	//	    while (p10_j++ < 10)
	//	    {
	//		  printf("*");
	//	    }
	//	    printf("\n");
	//    } while (++p10_i < 10)
	// 3) do
	//    {
	// 	    p10_j = p10_i;
	//	    do
	//	    {
	//		  printf("*");
	//	    }while (++p10_j < 10)
	//	    printf("\n");
	//    } while (++p10_i < 10)
	// 4) do
	//    {
	//	    do
	//	    {
	//		  printf("*");
	//	    }while (++p10_j < 10)
	//	    printf("\n");
	//    } while ( (p10_j = ++p10_i) < 10 )
	// 5) do
	//	    do
	//		  ;
	//	    while (printf("*"), ++p10_j < 10);
	//    while ( printf("\n"), (p10_j = ++p10_i) < 10 );

	// 정답: 1,2,3,4,5






	/* 주관식 문제 */

	// 문제 11
	// 코드의 실행 결과를 다음과 같이 나오기 위해서
	// 표시된 위치에 코드를 입력하시오.

	int p11_i = 0, p11_j = 0;
	printf("\nProblem11:\n");


	for (p11_i = 0; p11_i < 7; p11_i++)
	{
		printf("\n\ni = %d,     j = ", p11_i);
		/* 코드를 추가할 위치 */
		for (p11_j = 0; p11_j < p11_i; p11_j++)
		// 다음 코드는 변경하지 마시오
		{
			printf("%d, ", p11_j);
		}
	}


	// 출력:
	// Problem11:
	//
	//
	// i = 0, j =
	//
	// i = 1, j = 0,
	//
	// i = 2, j = 0, 1,
	//
	// i = 3, j = 0, 1, 2,
	//
	// i = 4, j = 0, 1, 2, 3,
	//
	// i = 5, j = 0, 1, 2, 3, 4,
	//
	// i = 6, j = 0, 1, 2, 3, 4, 5,

	// 문제 12
	// 코드의 실행 결과를 다음과 같이 나오기 위해서
	// 표시된 위치에 코드를 입력하시오.

	unsigned int p12_i = 0, p12_j = 0;
	printf("\n\n\nProblem12:\n");


	/* 코드를 추가할 위치 */
	for (p12_i = 2; p12_i < 3; p12_i--)

	// 다음 코드는 변경하지 마시오
	{
		printf("\n\ni = %d,     j = ", p12_i);
		for (p12_j = p12_i; p12_j < 3; p12_j++)
		{
			printf("%d, ", p12_j);
		}
	}


	// 출력:

	// Problem12:
	//
	//
	// i = 2, j = 2,
	//
	// i = 1, j = 1, 2,
	//
	// i = 0, j = 0, 1, 2, 




	// 문제 13
	// 코드의 실행 결과를 다음과 같이 나오기 위해서
	// 표시된 위치에 코드를 입력하시오.

	unsigned int p13_i = 0, p13_j = 0;
	printf("\n\n\nProblem13:\n");


	/* 코드를 추가할 위치 */
	for (p13_i = 5; p13_i < 6; p13_i -= 2)

	// 다음 코드는 변경하지 마시오
	{
		printf("\n\ni = %d,     j = ", p13_i);
		while (p13_j < p13_i)
		{
			printf("%d, ", p13_j+=2);
		}
		p13_j = 0;
	}


	// 출력:

	// Problem13:
	//
	//
	// i = 5, j = 2, 4, 6,
	//
	// i = 3, j = 2, 4,
	//
	// i = 1, j = 2, 


	// 문제 14
	// 코드의 실행 결과를 다음과 같이 나오기 위해서
	// 표시된 위치에 코드를 입력하시오.

	int p14_i = 0, p14_j = 0;
	printf("\n\n\nProblem14:\n");


	do
	{
		printf("\n\ni = %d,     j = ", p14_i);

		p14_j = p14_i;
		/* 코드를 추가할 위치 */


		// 다음 코드는 변경하지 마시오
		{
			printf("%d, ", p14_j);
		}
	} while ((p14_i += 3) < 10);


	// 출력:

	// Problem14:
	//
	//
	// i = 0, j =
	//
	// i = 3, j = 3, -1,
	//
	// i = 6, j = 6, -4, 2,
	//
	// i = 9, j = 9, -7, 5, -3, 1,






	// 문제 15
	// 코드의 실행 결과를 다음과 같이 나오기 위해서
	// 표시된 위치에 코드를 입력하시오.

	int p15_i = 0, p15_j = 0;
	printf("\n\n\nProblem15:\n");


	do
	{
		printf("\n\ni = %d,     j = ", p15_i);

		/* 코드를 추가할 위치 */


		// 다음 코드는 변경하지 마시오
		{
			printf("%d, ", p15_j);
		}
	} while ((p15_i += 5) <= 10);


	// 출력:

	// Problem15:
	//
	//
	// i = 0, j =
	//
	// i = 5, j = 0, -3,
	//
	// i = 10, j = 0, -3, 6, -9,


	/* 코딩 문제 */

	// 문제 16: 수식을 입력받아서 계산하는 산술계산기를 만드시오
	//          
	//      입력: 1 + 2
	//      출력: 1 + 2 = 3
	// #define _CRT_SECURE_NO_WARNINGS
    int x, y;
    int z = 0;
    char op;

    printf("입력 : ");
    scanf("%d %c %d", &x, &op, &y);

    if (op == '+')
        z = x + y;
    if (op == '-')
        z = x - y;
    if (op == '*')
        z = x * y;
    if (op == '/')
        z = x / y;

    printf("출력 : %d %c %d = %d", x, op, y, z);
	//

	// 문제 17: *를 이용해서 y = x^2 그래프를 그리시오
	//
	//     입력: x범위의 절대값
	//     출력:
	//            *   *
	//            *   *
	//            ** **
	//            *****
	//            
}
