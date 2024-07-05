/**
	C���α׷��� (CE1001-01) / ���α׷��ֱ���1 (E1237-01) �߰����

												�̸�: ������
												�й�: 2019304072
 **/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ���� 1
	// �ڵ��� ���� ����� ������ ���� ������ ���ؼ�
	// �ڵ��� ����ģ �κп� �� �˸´� �ܾ ���⿡�� ��� ���信 �����ÿ�.

	int problem1_int = 1;
	double problem1_double = 2.3;
	unsigned problem1_uint = 45;
	printf("Problem 1 \nHello world %d%3.1f%2u\n", problem1_int,
		problem1_double,
		problem1_uint);

	// ���:
	// Problem 1
	// Hello world 12.345

	// ���� 
	// 1) %d%3.1lf%2u     2) %d%.1f%u     3) %d.%f%u     4) %dfu     5) %d.1fu

	// ����: 1




	// ���� 2
	// �ڵ��� ���� ����� ������ ���� ������ ���ؼ�
	// ǥ�õ� ���� ��� ���������� ���⿡�� ��� ���信 �����ÿ�.

	int p2_usd = 13, p2_krw = 10000;
	double p2_krw_usd_rate = p2_krw / p2_usd; // ������ �ڵ�
	printf("\nProblem 2 \n1 US dollar is equal to %.2lf won\n", p2_krw_usd_rate);

	// ���:
	// Problem 2
	// 1 US dollar is equal to 769.23 won

	// ����
	// 1) float p2_krw_usd_rate = p2_krw / p2_usd; 
	// 2) double p2_krw_usd_rate = (double) p2_krw / (double) p2_usd;
	// 3) p2_krw_usd_rate = p2_krw // p2_usd
	// 4) double p2_krw_usd_rate = p2_krw * 100 / p2_usd / 100;
	// 5) long double krw_usd_rate = (double) p2_krw / p2_usd;

	// ����: 2




	// ���� 3
	// ���� �ڵ��� ���� ����� �˸´� ���ڿ��� ���⿡�� ��� ���信 �����ÿ�.

	int p3_i = 1, p3_j = 2;
	double p3_x = 1.1, p3_y = 2.2;

	p3_i += 1 && (p3_j = 0), p3_x = (int)p3_y ? (p3_y /= 2) : p3_y;
	printf("\nProblem 3: p3_i = %d, p3_j = %d, p3_x = %lf, p3_y = %lf \n",
		p3_i, p3_j, p3_x, p3_y);

	// ���:

	// ����
	// 1) Problem 3: p3_i = 1, p3_j = 2, p3_x = 1.100000, p3_y = 2.200000 
	// 1) Problem 3: p3_i = 3, p3_j = 2, p3_x = 2.200000, p3_y = 2.200000 
	// 1) Problem 3: p3_i = 1, p3_j = 0, p3_x = 1.100000, p3_y = 1.100000 
	// 1) Problem 3: p3_i = 3, p3_j = 0, p3_x = 2.000000, p3_y = 2.200000 
	// 1) Problem 3: p3_i = 1, p3_j = 0, p3_x = 2.000000, p3_y = 1.100000 

	// ����: 3




	// ���� 4
	// ���� ����� ������ ���� ������ ���ؼ�
	// ǥ�õ� ��ġ�� �߰��� �ڵ带 ���⿡�� /*���*/ ��� ���信 �����ÿ�.

	int p4_number = 6;
	printf("\nProblem 4: ");
	// �ڵ带 �߰��� ��ġ
	printf("p4_number�� Ȧ���Դϴ�.\n");

	// ���:
	// Problem 4: p4_number�� ¦���Դϴ�. 
	// 
	// ����
	// 1) if (!(p4_number%2))
	//		printf("p4_number�� ¦���Դϴ�.");
	//    else
	// 2) if (!(p4_number %2 == 0))
	//		printf("p4_number�� ¦���Դϴ�.");
	// 3) if (p4_number %2 == 0)
	//		printf("p4_number�� ¦���Դϴ�.");
	// 4) if (p4_number%2)
	//		printf("p4_number�� ¦���Դϴ�.");
	//    else
	// 5) if (p4_number)
	//		printf("p4_number�� ¦���Դϴ�.");
	//    else
	//    


	// ����: 1,5




	// ���� 5
	// �ڵ��� ���� ����� ������ ���� ������ ���ؼ�
	// ǥ�õ� ��ġ�� �߰��� �ڵ带 ���⿡�� /*���*/ ��� ���信 �����ÿ�.

	int p5_x = 5, p5_y = 10, p5_result = 0;
	char p5_op = '*';

	switch (p5_op)
	{
	case '*':
		p5_result = p5_x * p5_y;
		// �ڵ带 �߰��� ��ġ
	default:
		printf("�������� �ʴ� �������Դϴ�. \n");
	}
p5_print:
	printf("\nProblem 5: %d %c %d = %d \n", p5_x, p5_op, p5_y, p5_result);

	// ���:
	// Problem 5: 5 * 10 = 50

	// ����
	// 1) break;
	// 2) case '+': 
	//		p5_result = p5_x + p5_y;
	// 3) goto p5_print;
	// 4) goto default;
	// 5) continue;

	// ����: 1,3,4,5



	// ���� 6
	// �ڵ��� ���� ����� ������ ���� ������ ���ؼ�
	// ǥ�õ� ��ġ�� �߰��� �ڵ带 ���⿡�� /*���*/ ��� ���信 �����ÿ�.

	int p6_start = 6, p6_end = 12, p6_sum = 0, p6_i = 0;

	// �ڵ带 �߰��� ��ġ
	{
		p6_sum += p6_i;
	}
	printf("\nProblem 6: %d���� %d������ ���� %d�Դϴ�. \n", p6_start, p6_end, p6_sum);

	// ���:
	// Problem 6: 6���� 12������ ���� 57�Դϴ�.

	// ����
	// 1) p6_i = p6_start;
	//	  while (p6_i++ < p6_end)
	// 2) for (p6_i = p6_start; p6_i < p6_end; p6_i++)
	// 3) p6_i = p6_start;
	//	  while (++p6_i <= p6_end)
	// 4) for (p6_i = p6_start; p6_i < p6_end; ++p6_i)
	// 5) p6_i = p6_start;
	//	  while ((p6_i+=1) <= p6_end)

	// ����: 1,3,5




	// ���� 7
	// �ڵ��� ���� ����� ������ ���� ������ ���ؼ�
	// ǥ�õ� ��ġ�� �߰��� �ڵ带 ���⿡�� /*���*/ ��� ���信 �����ÿ�.

	int p7_i = 1, p7_n = 5;

	printf("\nProblem7:\n");
	printf("   p7_i    p7_i^3   \n");
	printf("====================\n");

	// �ڵ带 �߰��� ��ġ

	// ���:
	// Problem7:
	// p7_i    p7_i ^ 3
	// 	====================
	//	1         1
	//	2         8
	//	3        27
	//	4        64
	//	5       125
	// 
	// ����
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

	// ����: 1



	// ���� 8
	// �ڵ��� ���� ����� ������ ���� ������ ���ؼ�
	// ǥ�õ� ��ġ�� �߰��� �ڵ带 ���⿡�� /*���*/ ��� ���信 �����ÿ�.

	int p8_i = 0, p8_j = 0;
	printf("\nProblem8:\n ");
	for (p8_i = 0; p8_i < 8; p8_i++) printf("*");

	// �ڵ带 �߰��� ��ġ

	printf("\n ");
	for (p8_i = 0; p8_i < 8; p8_i++) printf("*");
	printf(" \n");

	// ���:
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

	// ����
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

	// ����: 1,4,5



	// ���� 9
	// �ڵ��� ���� ����� ������ ���� ������ ���ؼ�
	// ǥ�õ� ��ġ�� �߰��� �ڵ带 ���⿡�� /*���*/ ��� ���信 �����ÿ�.

	int p9_i = 0, p9_j = 0;
	printf("\nProblem9:\n");

	// �ڵ带 �߰��� ��ġ


	// ���:
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

	// ����
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

	// ����: 1,2,3,4





	// ���� 10
	// �ڵ��� ���� ����� ������ ���� ������ ���ؼ�
	// ǥ�õ� ��ġ�� �߰��� �ڵ带 ���⿡�� /*���*/ ��� ���信 �����ÿ�.

	int p10_i = 0, p10_j = 0;
	printf("\nProblem10:\n");

	// �ڵ带 �߰��� ��ġ
	do
		do
			;
	while (printf("*"), ++p10_j < 10);
	while (printf("\n"), (p10_j = ++p10_i) < 10);


	// ���:
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

	// ����
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

	// ����: 1,2,3,4,5






	/* �ְ��� ���� */

	// ���� 11
	// �ڵ��� ���� ����� ������ ���� ������ ���ؼ�
	// ǥ�õ� ��ġ�� �ڵ带 �Է��Ͻÿ�.

	int p11_i = 0, p11_j = 0;
	printf("\nProblem11:\n");


	for (p11_i = 0; p11_i < 7; p11_i++)
	{
		printf("\n\ni = %d,     j = ", p11_i);
		/* �ڵ带 �߰��� ��ġ */
		for (p11_j = 0; p11_j < p11_i; p11_j++)
		// ���� �ڵ�� �������� ���ÿ�
		{
			printf("%d, ", p11_j);
		}
	}


	// ���:
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

	// ���� 12
	// �ڵ��� ���� ����� ������ ���� ������ ���ؼ�
	// ǥ�õ� ��ġ�� �ڵ带 �Է��Ͻÿ�.

	unsigned int p12_i = 0, p12_j = 0;
	printf("\n\n\nProblem12:\n");


	/* �ڵ带 �߰��� ��ġ */
	for (p12_i = 2; p12_i < 3; p12_i--)

	// ���� �ڵ�� �������� ���ÿ�
	{
		printf("\n\ni = %d,     j = ", p12_i);
		for (p12_j = p12_i; p12_j < 3; p12_j++)
		{
			printf("%d, ", p12_j);
		}
	}


	// ���:

	// Problem12:
	//
	//
	// i = 2, j = 2,
	//
	// i = 1, j = 1, 2,
	//
	// i = 0, j = 0, 1, 2, 




	// ���� 13
	// �ڵ��� ���� ����� ������ ���� ������ ���ؼ�
	// ǥ�õ� ��ġ�� �ڵ带 �Է��Ͻÿ�.

	unsigned int p13_i = 0, p13_j = 0;
	printf("\n\n\nProblem13:\n");


	/* �ڵ带 �߰��� ��ġ */
	for (p13_i = 5; p13_i < 6; p13_i -= 2)

	// ���� �ڵ�� �������� ���ÿ�
	{
		printf("\n\ni = %d,     j = ", p13_i);
		while (p13_j < p13_i)
		{
			printf("%d, ", p13_j+=2);
		}
		p13_j = 0;
	}


	// ���:

	// Problem13:
	//
	//
	// i = 5, j = 2, 4, 6,
	//
	// i = 3, j = 2, 4,
	//
	// i = 1, j = 2, 


	// ���� 14
	// �ڵ��� ���� ����� ������ ���� ������ ���ؼ�
	// ǥ�õ� ��ġ�� �ڵ带 �Է��Ͻÿ�.

	int p14_i = 0, p14_j = 0;
	printf("\n\n\nProblem14:\n");


	do
	{
		printf("\n\ni = %d,     j = ", p14_i);

		p14_j = p14_i;
		/* �ڵ带 �߰��� ��ġ */


		// ���� �ڵ�� �������� ���ÿ�
		{
			printf("%d, ", p14_j);
		}
	} while ((p14_i += 3) < 10);


	// ���:

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






	// ���� 15
	// �ڵ��� ���� ����� ������ ���� ������ ���ؼ�
	// ǥ�õ� ��ġ�� �ڵ带 �Է��Ͻÿ�.

	int p15_i = 0, p15_j = 0;
	printf("\n\n\nProblem15:\n");


	do
	{
		printf("\n\ni = %d,     j = ", p15_i);

		/* �ڵ带 �߰��� ��ġ */


		// ���� �ڵ�� �������� ���ÿ�
		{
			printf("%d, ", p15_j);
		}
	} while ((p15_i += 5) <= 10);


	// ���:

	// Problem15:
	//
	//
	// i = 0, j =
	//
	// i = 5, j = 0, -3,
	//
	// i = 10, j = 0, -3, 6, -9,


	/* �ڵ� ���� */

	// ���� 16: ������ �Է¹޾Ƽ� ����ϴ� ������⸦ ����ÿ�
	//          
	//      �Է�: 1 + 2
	//      ���: 1 + 2 = 3
	// #define _CRT_SECURE_NO_WARNINGS
    int x, y;
    int z = 0;
    char op;

    printf("�Է� : ");
    scanf("%d %c %d", &x, &op, &y);

    if (op == '+')
        z = x + y;
    if (op == '-')
        z = x - y;
    if (op == '*')
        z = x * y;
    if (op == '/')
        z = x / y;

    printf("��� : %d %c %d = %d", x, op, y, z);
	//

	// ���� 17: *�� �̿��ؼ� y = x^2 �׷����� �׸��ÿ�
	//
	//     �Է�: x������ ���밪
	//     ���:
	//            *   *
	//            *   *
	//            ** **
	//            *****
	//            
}
