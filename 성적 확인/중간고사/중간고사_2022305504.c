//변수선언
//선언자
//답 (2)

// 예제 
//int x = 10; // x 라는 변수를 int 자료형으로 선언하고 초기값을 10으로 합니다.
//초기화자
//답 : return 0;

//return문
//문법
//답 : (1)

//설명
//예시

#include <stdio.h>

void fa(int i)
{
    if (i == 2)
    {
        printf("fa(): i is 2 \n");
        return;
    }
    printf("fa(): i is not 2 \n");
}

int fb(int i)
{
    if (i == 2)
    {
        printf("fb(): i is 2 \n");
        return 2;
    }
    printf("fb(): i is not 2 \n");
    return 0;
}

int main(void)
{
    fa(2);
    int i = fb(5);
    printf("main(): %d \n", i);
}

//실행결과 : fa(): i is 2
//           fb() : i is not 2
//           main() : 0



//printf
//int printf(문자열, ...); 값을 문자열로 변화해서 화면에 출력하시오.
// 답 : int printf("문자열");


//매개변수
//예제


include <stdio.h>
 int main(void)
{
    printf("string\n");
    printf("%c\n", 'C');
    printf("%s\n", "Hello");
    printf("%d\n", 100);
    printf("%ld\n", (long)100);
    printf("%lld\n", (long long)100);
    printf("%u\n", (unsigned int)100);
    printf("%lu\n", (unsigned long)100);
    printf("%llu\n", (unsigned long long) 100);
    printf("%f\n", 1.1);
    printf("%lf\n", 1.1);
}

//실행결과
// string
// C
// Hello
// 100
// 100
// 100
// 100
// 100
// 100
// 1.100000
// 1.100000

//scanf 
// int scanf(문자열, ...);
// 답 : int scanf("문자열");

//매개변수
// 예제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i;
    float f;
    double d;
    // 키보드 입력: 25 54.32 1.0
    scanf("%d%f%lf", &i, &f, &d);
    printf("%d, %f, %lf", i, f, d);
}