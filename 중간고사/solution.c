/**
    C프로그래밍 (CE1001-01) / 프로그래밍기초1 (E1237-01) 중간고사 해답지
 **/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    /* 문제 1 */
    // 코드의 실행 결과가 다음과 같이 나오기 위해서
    // 코드의 밑줄친 부분에 들어갈 알맞는 단어를 보기에서 골라서 정답에 적으시오.

    /* 목표 출력: */
    // Problem 1
    // Hello world 12.345

    /* 보기 */
    // 1) %d%3.1lf%2u     2) %d%.1f%u     3) %d.%f%u     4) %dfu     5) %d.1fu

    int problem1_int = 1;
    double problem1_double = 2.3;
    unsigned problem1_uint = 45;

    /* 수정하기 전 코드 */
    printf("Problem 1 \nHello world"
           
           " /* 보기를 삽입할 위치 */\n",
           problem1_int,
           problem1_double,
           problem1_uint);

    // 출력
    // Problem 1
    // Hello world ______

    
    /* 보기 1) */
    printf("Problem 1 \nHello world"
           
           " %d%3.1lf%2u\n",
           
           problem1_int,
           problem1_double,
           problem1_uint);

    // 출력
    // Problem 1
    // Hello world 12.345 (정답)

    
    /* 보기 2) */
    printf("Problem 1 \nHello world"
           
           " %d%.1f%u\n",
           
           problem1_int,
           problem1_double,
           problem1_uint);

    // 출력
    // Problem 1
    // Hello world 12.345 (정답)

    
    /* 보기 3) */
    printf("Problem 1 \nHello world"
           
           " %d.%f%u\n",
           
           problem1_int,
           problem1_double,
           problem1_uint);

    // 출력
    // Problem 1
    // Hello world 1.2.30000045 (오답)


    /* 보기 4) */
    printf("Problem 1 \nHello world"
           
           " %dfu\n",
           
           problem1_int,
           problem1_double,
           problem1_uint);

    // 출력
    // Problem 1
    // Hello world 1fu (오답)


    /* 보기 5) */
    printf("Problem 1 \nHello world"
           
           " %d.1fu\n",
           
           problem1_int,
           problem1_double,
           problem1_uint);
    
    // 출력
    // Problem 1
    // Hello world 1.1fu (오답)

    
    
    


    /* 문제 2 */
    // 코드의 실행 결과가 다음과 같이 나오기 위해서
    // 표시된 줄을 어떻게 수정할지를 보기에서 골라서 정답에 적으시오.

    /* 목표 출력 */
    // Problem 2
    // 1 US dollar is equal to 769.23 won

    /* 보기 */
    // 1) float p2_krw_usd_rate = p2_krw / p2_usd;
    // 2) double p2_krw_usd_rate = (double) p2_krw / (double) p2_usd;
    // 3) p2_krw_usd_rate = p2_krw // p2_usd
    // 4) double p2_krw_usd_rate = p2_krw * 100 / p2_usd / 100;
    // 5) long double krw_usd_rate = (double) p2_krw / p2_usd;

    /* 수정하기 전 코드 */
    {
        int p2_usd = 13, p2_krw = 10000;
        double p2_krw_usd_rate = p2_krw / p2_usd; // 수정할 줄
        printf("\nProblem 2 \n1 US dollar is equal to %.2lf won\n", p2_krw_usd_rate);
    }
    // 출력
    // Problem 2
    // 1 US dollar is equal to 769.00 won

    
    /* 보기 1) */
    {
        int p2_usd = 13, p2_krw = 10000;
        float p2_krw_usd_rate = p2_krw / p2_usd;
        printf("\nProblem 2 \n1 US dollar is equal to %.2lf won\n", p2_krw_usd_rate);
    }
    // 출력
    // Problem 2
    // 1 US dollar is equal to 769.00 won (오답)

    
    /* 보기 2) */
    {
        int p2_usd = 13, p2_krw = 10000;
        double p2_krw_usd_rate = (double) p2_krw / (double) p2_usd;
        printf("\nProblem 2 \n1 US dollar is equal to %.2lf won\n", p2_krw_usd_rate);
    }
    // 출력
    // Problem 2
    // 1 US dollar is equal to 769.23 won (정답)

    
    /* 보기 3) */
    {
        int p2_usd = 13, p2_krw = 10000;
        // p2_krw_usd_rate = p2_krw // p2_usd       // 선언되지 않은 변수 사용 에러
        // printf("\nProblem 2 \n1 US dollar is equal to %.2lf won\n", p2_krw_usd_rate);
                                                    // 선언되지 않은 변수 사용 에러
    }
    // 출력
    // (없음, 오답)
    

    /* 보기 4) */
    {
        int p2_usd = 13, p2_krw = 10000;
        double p2_krw_usd_rate = p2_krw * 100 / p2_usd / 100;
        printf("\nProblem 2 \n1 US dollar is equal to %.2lf won\n", p2_krw_usd_rate);
    }
    // 출력
    // Problem 2
    // 1 US dollar is equal to 769.00 won (오답)

    
    /* 보기 5) */
    {
        int p2_usd = 13, p2_krw = 10000;
        long double krw_usd_rate = (double) p2_krw / p2_usd;
        // printf("\nProblem 2 \n1 US dollar is equal to %.2lf won\n", p2_krw_usd_rate);
                                                    // 선언되지 않은 변수 사용 에러
    }
    // 출력
    // (없음, 오답)

    
    
    


    /* 문제 3 */
    // 다음 코드의 실행 결과로 알맞는 문자열을 보기에서 골라서 정답에 적으시오.

    int p3_i = 1, p3_j = 2;
    double p3_x = 1.1, p3_y = 2.2;

    p3_i += 1 && (p3_j = 0), p3_x = (int)p3_y ? (p3_y /= 2) : p3_y;
    printf("\nProblem 3: p3_i = %d, p3_j = %d, p3_x = %lf, p3_y = %lf \n",
        p3_i, p3_j, p3_x, p3_y);

    // 보기
    // 1) Problem 3: p3_i = 1, p3_j = 2, p3_x = 1.100000, p3_y = 2.200000
    // 2) Problem 3: p3_i = 3, p3_j = 2, p3_x = 2.200000, p3_y = 2.200000
    // 3) Problem 3: p3_i = 1, p3_j = 0, p3_x = 1.100000, p3_y = 1.100000
    // 4) Problem 3: p3_i = 3, p3_j = 0, p3_x = 2.000000, p3_y = 2.200000
    // 5) Problem 3: p3_i = 1, p3_j = 0, p3_x = 2.000000, p3_y = 1.100000

    // 출력:
    // Problem 3: p3_i = 1, p3_j = 0, p3_x = 1.100000, p3_y = 1.100000

    // 정답: 3




    
        
    /* 문제 4 */
    // 실행 결과가 다음과 같이 나오기 위해서
    // 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.

    /* 목표 출력 */
    // Problem 4: p4_number는 짝수입니다.

    /* 보기 */
    // 1) if (!(p4_number%2))
    //        printf("p4_number는 짝수입니다.");
    //    else
    // 2) if (!(p4_number %2 == 0))
    //        printf("p4_number는 짝수입니다.");
    // 3) if (p4_number %2 == 0)
    //        printf("p4_number는 짝수입니다.");
    // 4) if (p4_number%2)
    //        printf("p4_number는 짝수입니다.");
    //    else
    // 5) if (p4_number)
    //        printf("p4_number는 짝수입니다.");
    //    else

    /* 수정할 코드 */
    {
        int p4_number = 6;
        printf("\nProblem 4: ");
        // 코드를 추가할 위치
        printf("p4_number는 홀수입니다.\n");
    }

    // 출력
    // Problem 4: p4_number는 홀수입니다.

    
    /* 보기 1) */
    {
        int p4_number = 6;
        printf("\nProblem 4: ");
        if (!(p4_number%2))
            printf("p4_number는 짝수입니다.");
        else
            printf("p4_number는 홀수입니다.\n");
    }
    // 출력
    // Problem 4: p4_number는 짝수입니다. (정답)


    /* 보기 2) */
    {
        int p4_number = 6;
        printf("\nProblem 4: ");
        if (!(p4_number %2 == 0))
            printf("p4_number는 짝수입니다.");
        printf("p4_number는 홀수입니다.\n");
    }
    // 출력
    // Problem 4: p4_number는 홀수입니다. (오답)


    /* 보기 3) */
    {
        int p4_number = 6;
        printf("\nProblem 4: ");
        if (p4_number %2 == 0)
            printf("p4_number는 짝수입니다.");
        printf("p4_number는 홀수입니다.\n");
    }
    // 출력
    // Problem 4: p4_number는 짝수입니다. p4_number는 홀수입니다. (오답)

    
    /* 보기 4) */
    {
        int p4_number = 6;
        printf("\nProblem 4: ");
        if (p4_number%2)
            printf("p4_number는 짝수입니다.");
        else
            printf("p4_number는 홀수입니다.\n");
    }
    // 출력
    // Problem 4: p4_number는 홀수입니다. (오답)

    
    /* 보기 5) */
    {
        int p4_number = 6;
        printf("\nProblem 4: ");
        if (p4_number)
            printf("p4_number는 짝수입니다.");
        else
            printf("p4_number는 홀수입니다.\n");
    }
    // 출력
    // Problem 4: p4_number는 짝수입니다. (정답)

    

    
    
    
    // 문제 5
    // 코드의 실행 결과가 다음과 같이 나오기 위해서
    // 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.

    /* 목표 출력 */
    // Problem 5: 5 * 10 = 50

    /* 보기 */
    // 1) break;
    // 2) case '+':
    //        p5_result = p5_x + p5_y;
    // 3) goto p5_print;
    // 4) goto default;
    // 5) continue;

    /* 수정하기 전 코드 */
    {
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
    }
    
    // 출력
    // 지원되지 않는 연산자입니다.
    //
    // Problem 5: 5 * 10 = 50


    /* 보기 1) */
    {
        int p5_x = 5, p5_y = 10, p5_result = 0;
        char p5_op = '*';

        switch (p5_op)
        {
        case '*':
            p5_result = p5_x * p5_y;
            break;
        default:
            printf("지원되지 않는 연산자입니다. \n");
        }
    p5_print_1:
        printf("\nProblem 5: %d %c %d = %d \n", p5_x, p5_op, p5_y, p5_result);
    }

    // 출력
    // Problem 5: 5 * 10 = 50 (정답)

    

    /* 보기 2) */
    {
        int p5_x = 5, p5_y = 10, p5_result = 0;
        char p5_op = '*';

        switch (p5_op)
        {
        case '*':
            p5_result = p5_x * p5_y;
        case '+':
            p5_result = p5_x + p5_y;
        default:
            printf("지원되지 않는 연산자입니다. \n");
        }
    p5_print_2:
        printf("\nProblem 5: %d %c %d = %d \n", p5_x, p5_op, p5_y, p5_result);
    }

    // 출력
    // 지원되지 않는 연산자입니다.
    //
    // Problem 5: 5 * 10 = 15 (오답)

    
    
    /* 보기 3) */
    {
        int p5_x = 5, p5_y = 10, p5_result = 0;
        char p5_op = '*';

        switch (p5_op)
        {
        case '*':
            p5_result = p5_x * p5_y;
            goto p5_print_3;
        default:
            printf("지원되지 않는 연산자입니다. \n");
        }
    p5_print_3:
        printf("\nProblem 5: %d %c %d = %d \n", p5_x, p5_op, p5_y, p5_result);
    }
    
    // 출력
    // Problem 5: 5 * 10 = 50 (정답)

    
    
    /* 보기 4) */
    {
        int p5_x = 5, p5_y = 10, p5_result = 0;
        char p5_op = '*';

        switch (p5_op)
        {
        case '*':
            p5_result = p5_x * p5_y;
            // goto default;    예약어 사용 에러 발생
        default:
            printf("지원되지 않는 연산자입니다. \n");
        }
    p5_print_4:
        printf("\nProblem 5: %d %c %d = %d \n", p5_x, p5_op, p5_y, p5_result);
    }
    
    // 출력
    // 에러 발생 (오답)

    
    
    /* 보기 5) */
    {
        int p5_x = 5, p5_y = 10, p5_result = 0;
        char p5_op = '*';

        switch (p5_op)
        {
        case '*':
            p5_result = p5_x * p5_y;
            // continue; 루프 안이 아닌 곳에서 continue를 사용해서 에러 발생
        default:
            printf("지원되지 않는 연산자입니다. \n");
        }
    p5_print_5:
        printf("\nProblem 5: %d %c %d = %d \n", p5_x, p5_op, p5_y, p5_result);
    }
    
    // 출력
    // 에러 발생 (오답)

    
    
    
    
    
    /* 문제 6 */
    // 코드의 실행 결과가 다음과 같이 나오기 위해서
    // 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.

    /* 목표 출력 */
    // Problem 6: 6부터 12까지의 합은 57입니다.

    /* 보기 */
    // 1) p6_i = p6_start;
    //      while (p6_i++ < p6_end)
    // 2) for (p6_i = p6_start; p6_i < p6_end; p6_i++)
    // 3) p6_i = p6_start;
    //      while (++p6_i <= p6_end)
    // 4) for (p6_i = p6_start; p6_i < p6_end; ++p6_i)
    // 5) p6_i = p6_start;
    //      while ((p6_i+=1) <= p6_end)

    /* 수정하기 전 코드 */
    {
        int p6_start = 6, p6_end = 12, p6_sum = 0, p6_i = 0;
        // 코드를 추가할 위치
        {
            p6_sum += p6_i;
        }
        printf("\nProblem 6: %d부터 %d까지의 합은 %d입니다. \n", p6_start, p6_end, p6_sum);
    }
    
    // 출력: 6부터 12까지의 합은 0입니다.

    
    /* 보기 1) */
    {
        int p6_start = 6, p6_end = 12, p6_sum = 0, p6_i = 0;
        p6_i = p6_start;
        while (p6_i++ < p6_end)
        {
            p6_sum += p6_i;
        }
        printf("\nProblem 6: %d부터 %d까지의 합은 %d입니다. \n", p6_start, p6_end, p6_sum);
    }

    // 출력: 6부터 12까지의 합은 57입니다. (정답)

    
    /* 보기 2) */
    {
        int p6_start = 6, p6_end = 12, p6_sum = 0, p6_i = 0;
        for (p6_i = p6_start; p6_i < p6_end; p6_i++)
        {
            p6_sum += p6_i;
        }
        printf("\nProblem 6: %d부터 %d까지의 합은 %d입니다. \n", p6_start, p6_end, p6_sum);
    }

    // 출력: 6부터 12까지의 합은 51입니다. (오답)


    /* 보기 3) */
    {
        int p6_start = 6, p6_end = 12, p6_sum = 0, p6_i = 0;
        p6_i = p6_start;
        while (++p6_i <= p6_end)
        {
            p6_sum += p6_i;
        }
        printf("\nProblem 6: %d부터 %d까지의 합은 %d입니다. \n", p6_start, p6_end, p6_sum);
    }

    // 출력: 6부터 12까지의 합은 57입니다. (정답)


    /* 보기 4) */
    {
        int p6_start = 6, p6_end = 12, p6_sum = 0, p6_i = 0;
        for (p6_i = p6_start; p6_i < p6_end; ++p6_i)
        {
            p6_sum += p6_i;
        }
        printf("\nProblem 6: %d부터 %d까지의 합은 %d입니다. \n", p6_start, p6_end, p6_sum);
    }

    // 출력: 6부터 12까지의 합은 51입니다. (오답)


    /* 보기 5) */
    {
        int p6_start = 6, p6_end = 12, p6_sum = 0, p6_i = 0;
        p6_i = p6_start;
        while ((p6_i+=1) <= p6_end)
        {
            p6_sum += p6_i;
        }
        printf("\nProblem 6: %d부터 %d까지의 합은 %d입니다. \n", p6_start, p6_end, p6_sum);
    }

    // 출력: 6부터 12까지의 합은 57입니다. (정답)

    
    
    
    
    
    
    /* 문제 7 */
    // 코드의 실행 결과가 다음과 같이 나오기 위해서
    // 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.

    /* 목표 출력 */
    // Problem7:
    // p7_i    p7_i ^ 3
    //     ====================
    //    1         1
    //    2         8
    //    3        27
    //    4        64
    //    5       125

    /* 보기 */
    // 1) for (p7_i = 1; p7_i <= p7_n; p7_i++)
    //        printf("%5d     %5d\n", p7_i, p7_i * p7_i * p7_i);
    // 2) p7_i = 1;
    //      while (p7_i <= p7_n)
    //        printf("%5d     %5d\n", p7_i, p7_i * p7_i * p7_i);
    //      p7_i++;
    // 3) for (p7_i = 1; p7_i <= p7_n; p7_i++)
    //        printf("%5d     %5d\n", p7_i, p7_i ^ 3);
    // 4) p7_i = 1;
    //      do{
    //        printf("%5d     %5d\n", p7_i, p7_i * p7_i * p7_i);
    //      p7_i++;
    //      } while (p7_i <= p7_n)
    // 5) for (p7_i = 1; p7_i++ < p7_n;)
    //        printf("%5d     %5d\n", p7_i, p7_i * p7_i * p7_i);

    /* 수정하기 전 코드 */
    {
        int p7_i = 1, p7_n = 5;

        printf("\nProblem7:\n");
        printf("   p7_i    p7_i^3   \n");
        printf("====================\n");
        // 코드를 추가할 위치
    }

    // 출력
    // Problem7:
    //    p7_i    p7_i^3
    // ====================

    
    /* 보기 1) */
    {
        int p7_i = 1, p7_n = 5;

        printf("\nProblem7:\n");
        printf("   p7_i    p7_i^3   \n");
        printf("====================\n");
        
        for (p7_i = 1; p7_i <= p7_n; p7_i++)
            printf("%5d     %5d\n", p7_i, p7_i * p7_i * p7_i);
    }
    // 출력
    // Problem7:
    //    p7_i    p7_i^3
    // ====================
    //     1         1
    //     2         8
    //     3        27
    //     4        64
    //     5       125      (정답)


    
    /* 보기 2) */
    {
        int p7_i = 1, p7_n = 5;

        printf("\nProblem7:\n");
        printf("   p7_i    p7_i^3   \n");
        printf("====================\n");
        
        p7_i = 1;
        // while (p7_i <= p7_n)    무한 루프
        //    printf("%5d     %5d\n", p7_i, p7_i * p7_i * p7_i);
        p7_i++;
    }
    // 출력
    // Problem7:
    //    p7_i    p7_i^3
    // ====================
    //     1         1
    //     1         1      (오답)
    // 무한히 반복됨

    

    /* 보기 3) */
    {
        int p7_i = 1, p7_n = 5;

        printf("\nProblem7:\n");
        printf("   p7_i    p7_i^3   \n");
        printf("====================\n");
        
        for (p7_i = 1; p7_i <= p7_n; p7_i++)
            printf("%5d     %5d\n", p7_i, p7_i ^ 3);
    }
    // 출력
    // Problem7:
    //    p7_i    p7_i^3
    // ====================
    //     1         2
    //     2         1
    //     3         0
    //     4         7
    //     5         6      (오답)

    

    /* 보기 4) */
    {
        int p7_i = 1, p7_n = 5;

        printf("\nProblem7:\n");
        printf("   p7_i    p7_i^3   \n");
        printf("====================\n");
        
        p7_i = 1;
        // do{
        //     printf("%5d     %5d\n", p7_i, p7_i * p7_i * p7_i);
        //     p7_i++;
        // } while (p7_i <= p7_n)    do ... while()에 세미콜론이 없어서 에러 발생
    }
    // 출력
    // 에러 발생              (오답)


    
    /* 보기 5) */
    {
        int p7_i = 1, p7_n = 5;

        printf("\nProblem7:\n");
        printf("   p7_i    p7_i^3   \n");
        printf("====================\n");
        
        for (p7_i = 1; p7_i++ < p7_n;)
            printf("%5d     %5d\n", p7_i, p7_i * p7_i * p7_i);
    }
    // 출력
    // Problem7:
    //    p7_i    p7_i^3
    // ====================
    //     2         8
    //     3        27
    //     4        64
    //     5       125     (오답)

    
    
    
    /* 문제 8 */
    // 코드의 실행 결과가 다음과 같이 나오기 위해서
    // 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.
    
    /* 목표 출력 */
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

    /* 보기 */
    // 1) for(p8_j = 0; p8_j < 8; p8_j++)
    //      {
    //        printf("\n*");
    //        for (p8_i = 0; p8_i < 8; p8_i++) printf(" ");
    //        printf("*");
    //      }
    // 2) for(printf("\n*"); p8_j < 8; p8_j++)
    //      {
    //        for (p8_i = 0; p8_i < 8; p8_i++) printf(" ");
    //        printf("*");
    //      }
    // 3) for(printf("\n*"); p8_j < 8; p8_j++, printf("*"))
    //      {
    //        for (p8_i = 0; p8_i < 8; p8_i++) printf(" ");
    //      }
    // 4) for(p8_j = 0; p8_j < 8; printf("*"), p8_j++)
    //      {
    //        printf("\n*");
    //        for (p8_i = 0; p8_i < 8; p8_i++) printf(" ");
    //      }
    // 5) for(p8_j = 0; p8_j < 8; printf("*"), p8_j++)
    //      {
    //        for (printf("\n*"), p8_i = 0; p8_i < 8; p8_i++) printf(" ");
    //      }

    /* 수정하기 전 코드 */
    {
        int p8_i = 0, p8_j = 0;
        printf("\nProblem8:\n ");
        for (p8_i = 0; p8_i < 8; p8_i++) printf("*");

        // 코드를 추가할 위치

        printf("\n ");
        for (p8_i = 0; p8_i < 8; p8_i++) printf("*");
        printf(" \n");
    }

    // 출력:
    // Problem8:
    // ********
    // ********


    /* 보기 1) */
    {
        int p8_i = 0, p8_j = 0;
        printf("\nProblem8:\n ");
        for (p8_i = 0; p8_i < 8; p8_i++) printf("*");

        for(p8_j = 0; p8_j < 8; p8_j++)
        {
            printf("\n*");
            for (p8_i = 0; p8_i < 8; p8_i++) printf(" ");
            printf("*");
        }

        printf("\n ");
        for (p8_i = 0; p8_i < 8; p8_i++) printf("*");
        printf(" \n");
    }
    // 출력
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
    //  ********        (정답)

    
    
    /* 보기 2) */
    {
        int p8_i = 0, p8_j = 0;
        printf("\nProblem8:\n ");
        for (p8_i = 0; p8_i < 8; p8_i++) printf("*");

        for(printf("\n*"); p8_j < 8; p8_j++)
        {
            for (p8_i = 0; p8_i < 8; p8_i++) printf(" ");
            printf("*");
        }

        printf("\n ");
        for (p8_i = 0; p8_i < 8; p8_i++) printf("*");
        printf(" \n");
    }
    // 출력
    // Problem8:
    //  ********
    // *        *        *        *        *        *        *        *        *
    //  ********        (오답)

    
    
    /* 보기 3) */
    {
        int p8_i = 0, p8_j = 0;
        printf("\nProblem8:\n ");
        for (p8_i = 0; p8_i < 8; p8_i++) printf("*");

        for(printf("\n*"); p8_j < 8; p8_j++, printf("*"))
        {
            for (p8_i = 0; p8_i < 8; p8_i++) printf(" ");
        }

        printf("\n ");
        for (p8_i = 0; p8_i < 8; p8_i++) printf("*");
        printf(" \n");
    }
    // 출력
    // Problem8:
    //  ********
    // *        *        *        *        *        *        *        *        *
    //  ********        (오답)

    
    
    /* 보기 4) */
    {
        int p8_i = 0, p8_j = 0;
        printf("\nProblem8:\n ");
        for (p8_i = 0; p8_i < 8; p8_i++) printf("*");

        for(p8_j = 0; p8_j < 8; printf("*"), p8_j++)
        {
            printf("\n*");
            for (p8_i = 0; p8_i < 8; p8_i++) printf(" ");
        }

        printf("\n ");
        for (p8_i = 0; p8_i < 8; p8_i++) printf("*");
        printf(" \n");
    }
    // 출력
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
    //  ********        (정답)

    

    /* 보기 5) */
    {
        int p8_i = 0, p8_j = 0;
        printf("\nProblem8:\n ");
        for (p8_i = 0; p8_i < 8; p8_i++) printf("*");

        for(p8_j = 0; p8_j < 8; printf("*"), p8_j++)
        {
            for (printf("\n*"), p8_i = 0; p8_i < 8; p8_i++) printf(" ");
        }

        printf("\n ");
        for (p8_i = 0; p8_i < 8; p8_i++) printf("*");
        printf(" \n");
    }
    // 출력
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
    //  ********        (정답)

    
    
    
    
    /* 문제 9 */
    // 코드의 실행 결과를 다음과 같이 나오기 위해서
    // 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.

    /* 목표 출력 */
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

    /* 보기 */
    // 1) for (p9_i = 0; p9_i < 9; p9_i++)
    //    {
    //         for (p9_j = 0; p9_j < 9; p9_j++)
    //         {
    //             printf("*");
    //         }
    //         printf("\n");
    //    }
    // 2) for (; p9_i < 9; p9_i++, printf("\n"))
    //    {
    //         for (p9_j = 0; p9_j < 9; p9_j++)
    //         {
    //             printf("*");
    //         }
    //    }
    // 3) for (; p9_i < 9; p9_i++, printf("\n"))
    //        for (p9_j = 0; p9_j < 9; p9_j++, printf("*"))
    //            ;
    // 4) for (; p9_i++ < 9; printf("\n"))
    //        for (p9_j = 0; p9_j++ < 9; printf("*"))
    //            ;
    // 5) for (; p9_i++ < 9; printf("\n"))
    //        for (; p9_j++ < 9; printf("*"))
    //            ;

    /* 수정하기 전 코드 */
    {
        int p9_i = 0, p9_j = 0;
        printf("\nProblem9:\n");
        // 코드를 추가할 위치
    }
    // 출력:
    // Problem9:
    

    /* 보기 1) */
    {
        int p9_i = 0, p9_j = 0;
        printf("\nProblem9:\n");
        for (p9_i = 0; p9_i < 9; p9_i++)
        {
             for (p9_j = 0; p9_j < 9; p9_j++)
             {
                 printf("*");
             }
             printf("\n");
        }
    }
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
    // *********        (정답)


    /* 보기 2) */
    {
        int p9_i = 0, p9_j = 0;
        printf("\nProblem9:\n");
        for (; p9_i < 9; p9_i++, printf("\n"))
        {
            for (p9_j = 0; p9_j < 9; p9_j++)
            {
                printf("*");
            }
        }
    }
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
    // *********        (정답)

    
    /* 보기 3) */
    {
        int p9_i = 0, p9_j = 0;
        printf("\nProblem9:\n");
        for (; p9_i < 9; p9_i++, printf("\n"))
            for (p9_j = 0; p9_j < 9; p9_j++, printf("*"))
                ;
    }
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
    // *********        (정답)


    /* 보기 4) */
    {
        int p9_i = 0, p9_j = 0;
        printf("\nProblem9:\n");
        for (; p9_i++ < 9; printf("\n"))
            for (p9_j = 0; p9_j++ < 9; printf("*"))
                ;
    }
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
    // *********        (정답)


    /* 보기 5) */
    {
        int p9_i = 0, p9_j = 0;
        printf("\nProblem9:\n");
        for (; p9_i++ < 9; printf("\n"))
            for (; p9_j++ < 9; printf("*"))
                ;
    }
    // 출력:
    // Problem9:
    // *********        (오답)
    
    
    
    
    
    


    /* 문제 10 */
    // 코드의 실행 결과를 다음과 같이 나오기 위해서
    // 표시된 위치에 추가할 코드를 보기에서 /*모두*/ 골라서 정답에 적으시오.

    /* 목표 출력 */
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

    /* 보기 */
    // 1) while (p10_i++ < 10)
    //    {
    //         p10_j = p10_i;
    //        while (p10_j++ < 10)
    //        {
    //          printf("*");
    //        }
    //        printf("\n");
    //    }
    // 2) do
    //    {
    //         p10_j = p10_i;
    //        while (p10_j++ < 10)
    //        {
    //          printf("*");
    //        }
    //        printf("\n");
    //    } while (++p10_i < 10)
    // 3) do
    //    {
    //         p10_j = p10_i;
    //        do
    //        {
    //          printf("*");
    //        }while (++p10_j < 10)
    //        printf("\n");
    //    } while (++p10_i < 10)
    // 4) do
    //    {
    //        do
    //        {
    //          printf("*");
    //        }while (++p10_j < 10)
    //        printf("\n");
    //    } while ( (p10_j = ++p10_i) < 10 )
    // 5) do
    //        do
    //          ;
    //        while (printf("*"), ++p10_j < 10);
    //    while ( printf("\n"), (p10_j = ++p10_i) < 10 );

    /* 수정하기 전 코드 */
    {
        int p10_i = 0, p10_j = 0;
        printf("\nProblem10:\n");

        // 코드를 추가할 위치
        do
            do
                ;
        while (printf("*"), ++p10_j < 10);
        while (printf("\n"), (p10_j = ++p10_i) < 10);
    }
    // 출력:
    // Problem10:
    // **********
    // *********
    // ********
    // *******
    // ******
    // *****
    // ****
    // ***
    // **
    // *


    /* 보기 1) */
    {
        int p10_i = 0, p10_j = 0;
        printf("\nProblem10:\n");

        while (p10_i++ < 10)
        {
            p10_j = p10_i;
            while (p10_j++ < 10)
            {
                printf("*");
            }
            printf("\n");
        }
        do
            do
                ;
        while (printf("*"), ++p10_j < 10);
        while (printf("\n"), (p10_j = ++p10_i) < 10);
    }
    // 출력:
    // Problem10:
    // **********
    // *********
    // ********
    // *******
    // ******
    // *****
    // ****
    // ***
    // **
    // *
    //
    // *        (오답)


    /* 보기 2) */
    {
        int p10_i = 0, p10_j = 0;
        printf("\nProblem10:\n");

        /*
        do
        {
            p10_j = p10_i;
            while (p10_j++ < 10)
            {
                printf("*");
            }
            printf("\n");
        } while (++p10_i < 10)
        */      // do .. while에 세미콜론이 없어서 에러
        
        do
            do
                ;
        while (printf("*"), ++p10_j < 10);
        while (printf("\n"), (p10_j = ++p10_i) < 10);
    }
    // 출력:
    // Problem10:
    // 에러 (출력 없음)   (오답)

    
    /* 보기 3) */
    {
        int p10_i = 0, p10_j = 0;
        printf("\nProblem10:\n");

        /*
        do
        {
            p10_j = p10_i;
            do
            {
                printf("*");
            }while (++p10_j < 10)
            printf("\n");
        } while (++p10_i < 10)
        */      // do .. while에 세미콜론이 없어서 에러

        do
            do
                ;
        while (printf("*"), ++p10_j < 10);
        while (printf("\n"), (p10_j = ++p10_i) < 10);
    }
    // 출력:
    // Problem10:
    // 에러 (출력 없음)   (오답)


    /* 보기 4) */
    {
        int p10_i = 0, p10_j = 0;
        printf("\nProblem10:\n");

        /*
        do
        {
            do
            {
                printf("*");
            }while (++p10_j < 10)
            printf("\n");
        } while ( (p10_j = ++p10_i) < 10 )
        */      // while에 세미콜론이 없어서 에러
        
        do
            do
                ;
        while (printf("*"), ++p10_j < 10);
        while (printf("\n"), (p10_j = ++p10_i) < 10);
    }
    // 출력:
    // Problem10:
    // 에러 (출력 없음)   (오답)


    /* 보기 5) */
    {
        int p10_i = 0, p10_j = 0;
        printf("\nProblem10:\n");

        do
            do
                ;
            while (printf("*"), ++p10_j < 10);
        while ( printf("\n"), (p10_j = ++p10_i) < 10 );

        do
            do
                ;
        while (printf("*"), ++p10_j < 10);
        while (printf("\n"), (p10_j = ++p10_i) < 10);
    }
    // 출력:
    // Problem10:
    // **********
    // *********
    // ********
    // *******
    // ******
    // *****
    // ****
    // ***
    // **
    // *
    // *        (오답)

    
    
    /* 주관식 문제 */

    /* 문제 11 */
    // 코드의 실행 결과를 다음과 같이 나오기 위해서
    // 표시된 위치에 코드를 입력하시오.

    /* 목표 출력 */
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

    /* 수정하기 전 코드 */
    {
        int p11_i = 0, p11_j = 0;
        printf("\nProblem11:\n");

        for (p11_i = 0; p11_i < 7; p11_i++)
        {
            printf("\n\ni = %d,     j = ", p11_i);
            /* 코드를 추가할 위치 */

            // 다음 코드는 변경하지 마시오
            {
                printf("%d, ", p11_j);
            }
        }
    }
    // 출력:
    // Problem11:
    //
    //
    // i = 0, j = 0,
    //
    // i = 1, j = 0,
    //
    // i = 2, j = 0,
    //
    // i = 3, j = 0,
    //
    // i = 4, j = 0,
    //
    // i = 5, j = 0,
    //
    // i = 6, j = 0,

    
    
    /* 답안 1) */
    {
        int p11_i = 0, p11_j = 0;
        printf("\nProblem11:\n");

        for (p11_i = 0; p11_i < 7; p11_i++)
        {
            printf("\n\ni = %d,     j = ", p11_i);
            
            for (p11_j = 0; p11_j < p11_i; p11_j++)
            // 다음 코드는 변경하지 마시오
            {
                printf("%d, ", p11_j);
            }
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
    // i = 6, j = 0, 1, 2, 3, 4, 5,     (정답)


    /* 답안 2) */
    {
        int p11_i = 0, p11_j = 0;
        printf("\nProblem11:\n");

        for (p11_i = 0; p11_i < 7; p11_i++)
        {
            printf("\n\ni = %d,     j = ", p11_i);
            
            p11_j = -1;
            while(++p11_j < p11_i)
            // 다음 코드는 변경하지 마시오
            {
                printf("%d, ", p11_j);
            }
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
    // i = 6, j = 0, 1, 2, 3, 4, 5,     (정답)

    
    
    
    
    /* 문제 12 */
    // 코드의 실행 결과를 다음과 같이 나오기 위해서
    // 표시된 위치에 코드를 입력하시오.
    
    /* 목표 출력 */
    // Problem12:
    //
    //
    // i = 2, j = 2,
    //
    // i = 1, j = 1, 2,
    //
    // i = 0, j = 0, 1, 2,

    /* 수정하기 전 코드 */
    {
        unsigned int p12_i = 0, p12_j = 0;
        printf("\n\n\nProblem12:\n");

        /* 코드를 추가할 위치 */

        // 다음 코드는 변경하지 마시오
        {
            printf("\n\ni = %d,     j = ", p12_i);
            for (p12_j = p12_i; p12_j < 3; p12_j++)
            {
                printf("%d, ", p12_j);
            }
        }
    }
    // 출력
    // Problem12:
    //
    //
    // i = 0,     j = 0, 1, 2,

    /* 답안 1) */
    {
        unsigned int p12_i = 0, p12_j = 0;
        printf("\n\n\nProblem12:\n");
        
        for( p12_i = 3; p12_i-- > 0; )
        // 다음 코드는 변경하지 마시오
        {
            printf("\n\ni = %d,     j = ", p12_i);
            for (p12_j = p12_i; p12_j < 3; p12_j++)
            {
                printf("%d, ", p12_j);
            }
        }
    }
    // 출력
    // Problem12:
    //
    //
    // i = 2, j = 2,
    //
    // i = 1, j = 1, 2,
    //
    // i = 0, j = 0, 1, 2,      (정답)

    
    /* 답안 2) */
    {
        unsigned int p12_i = 0, p12_j = 0;
        printf("\n\n\nProblem12:\n");
        
        p12_i = 3;
        while(p12_i-- > 0)
        // 다음 코드는 변경하지 마시오
        {
            printf("\n\ni = %d,     j = ", p12_i);
            for (p12_j = p12_i; p12_j < 3; p12_j++)
            {
                printf("%d, ", p12_j);
            }
        }
    }
    // 출력
    // Problem12:
    //
    //
    // i = 2, j = 2,
    //
    // i = 1, j = 1, 2,
    //
    // i = 0, j = 0, 1, 2,      (정답)




    /* 문제 13 */
    // 코드의 실행 결과를 다음과 같이 나오기 위해서
    // 표시된 위치에 코드를 입력하시오.
    
    /* 목표 출력 */
    // Problem13:
    //
    //
    // i = 5, j = 2, 4, 6,
    //
    // i = 3, j = 2, 4,
    //
    // i = 1, j = 2,

    /* 수정하기 전 코드 */
    {
        unsigned int p13_i = 0, p13_j = 0;
        printf("\n\n\nProblem13:\n");


        /* 코드를 추가할 위치 */


        // 다음 코드는 변경하지 마시오
        {
            printf("\n\ni = %d,     j = ", p13_i);
            while (p13_j < p13_i)
            {
                printf("%d, ", p13_j+=2);
            }
            p13_j = 0;
        }
    }
    // 출력
    // Problem13:
    //
    //
    // i = 0,     j =


    /* 답안 1) */
    {
        unsigned int p13_i = 0, p13_j = 0;
        printf("\n\n\nProblem13:\n");

        for( p13_i = 7; (p13_i > 1) && (p13_i -= 2); )
        // 다음 코드는 변경하지 마시오
        {
            printf("\n\ni = %d,     j = ", p13_i);
            while (p13_j < p13_i)
            {
                printf("%d, ", p13_j+=2);
            }
            p13_j = 0;
        }
    }
    // 출력
    // Problem13:
    //
    //
    // i = 5, j = 2, 4, 6,
    //
    // i = 3, j = 2, 4,
    //
    // i = 1, j = 2,


    /* 답안 2) */
    {
        unsigned int p13_i = 0, p13_j = 0;
        printf("\n\n\nProblem13:\n");

        for( p13_i = 5; (p13_i >= 1) && (p13_i <= 5); p13_i -= 2 )
        // 다음 코드는 변경하지 마시오
        {
            printf("\n\ni = %d,     j = ", p13_i);
            while (p13_j < p13_i)
            {
                printf("%d, ", p13_j+=2);
            }
            p13_j = 0;
        }
    }
    // 출력
    // Problem13:
    //
    //
    // i = 5, j = 2, 4, 6,
    //
    // i = 3, j = 2, 4,
    //
    // i = 1, j = 2,

    

    /* 문제 14 */
    // 코드의 실행 결과를 다음과 같이 나오기 위해서
    // 표시된 위치에 코드를 입력하시오.
    
    /* 목표 출력 */
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

    /* 수정하기 전 코드 */
    {
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
    }
    // 출력:
    // Problem14:
    //
    //
    // i = 0,     j = 0,
    //
    // i = 3,     j = 3,
    //
    // i = 6,     j = 6,
    //
    // i = 9,     j = 9,

    
    /* 답안 1) */
    {
        int p14_i = 0, p14_j = 0;
        printf("\n\n\nProblem14:\n");
        do
        {
            printf("\n\ni = %d,     j = ", p14_i);
            p14_j = p14_i;
            for(int abs = p14_j, sign = 1; abs > 0; abs -= 2, sign *= -1, p14_j = sign * abs )
            // 다음 코드는 변경하지 마시오
            {
                printf("%d, ", p14_j);
            }
        } while ((p14_i += 3) < 10);
    }
    // 출력:
    // Problem14:
    //
    //
    // i = 0,     j =
    //
    // i = 3,     j = 3, -1,
    //
    // i = 6,     j = 6, -4, 2,
    //
    // i = 9,     j = 9, -7, 5, -3, 1,
    




    /* 문제 15 */
    // 코드의 실행 결과를 다음과 같이 나오기 위해서
    // 표시된 위치에 코드를 입력하시오.
    
    /* 목표 출력 */
    // Problem15:
    //
    //
    // i = 0, j =
    //
    // i = 5, j = 0, -3,
    //
    // i = 10, j = 0, -3, 6, -9,
    
    /* 수정하기 전 코드 */
    {
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
    }
    // 출력:
    // Problem15:
    //
    //
    // i = 0,     j = 0,
    //
    // i = 5,     j = 0,
    //
    // i = 10,     j = 0,


    /* 답안 1) */
    {
        int p15_i = 0, p15_j = 0;
        printf("\n\n\nProblem15:\n");

        do
        {
            printf("\n\ni = %d,     j = ", p15_i);
            
            for(int abs = 0, sign = 1, p15_j = 0; abs < p15_i; abs += 3, sign *= -1, p15_j = sign * abs)

            // 다음 코드는 변경하지 마시오
            {
                printf("%d, ", p15_j);
            }
        } while ((p15_i += 5) <= 10);
    }
    // 출력:
    // Problem15:
    //
    //
    // i = 0,     j =
    //
    // i = 5,     j = 0, -3,
    //
    // i = 10,     j = 0, -3, 6, -9,


    
    
    
    
    /* 코딩 문제 */

    // 문제 16: 수식을 입력받아서 계산하는 산술계산기를 만드시오
    //
    //      입력: 1 + 2
    //      출력: 1 + 2 = 3
    //

    /* 답안 1) */
    
    {
        char input[100] = "";
        printf("\n\n입력: ");
        int num1 = 0, num2 = 0, result = 0;
        char op = '\0';
        int scanf_result = scanf("%d %c %d", &num1, &op, &num2);
        if (scanf_result < 3){
            printf("\"숫자 연산자 숫자\" 형식으로 입력해주세요\n");
            goto p16_a1_end;
        }
        else{
            if(op == '+'){
                result = num1 + num2;
            }
            else if(op == '-'){
                result = num1 - num2;
            }
            else if(op == '*'){
                result = num1 * num2;
            }
            else if(op == '/'){
                result = num1 / num2;
            }
            else{
                printf("\"지원되는 연산자는 +, -, *, / 입니다.\"\n");
                goto p16_a1_end;
            }
            printf("%d %c %d = %d\n", num1, op, num2, result);
        }
    p16_a1_end:
        ;
    }
    
    // 입력:
    // 1 + 2
    // 출력:
    // 1 + 2 = 3

    
    
    
    
    // 문제 17: *를 이용해서 y = x^2 그래프를 그리시오
    //
    //     입력: x범위의 절대값
    //     출력:
    //            *   *
    //            *   *
    //            ** **
    //            *****
    //
    
    /* 답안 1) */
    {
        printf("입력: ");
        int x_max = 0;
        scanf("%d", &x_max);
        
        int x_min = -x_max;
        int size = 2 * x_max + 1;
        int xs[100] = {0};
        
        for (int i = 0, x = x_min; x <= x_max && i < size; i++, x++){
            xs[i] = x;
        }
        
        int ys[100] = {0};
        for (int i = 0; i < size; i++){
            ys[i] = xs[i] * xs[i];
        }
        
        int y_min = ys[0];
        for (int i = 0; i < size; i++){
            if (y_min > ys[i]){
                y_min = ys[i];
            }
        }
        
        int y_max = ys[0];
        for (int i = 0; i < size; i++) {
            if (y_max < ys[i]){
                y_max = ys[i];
            }
        }
        
        for (int y = y_max; y >= y_min; y--){
            for (int i = 0; i < size; i++){
                if (ys[i] >= y){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}
