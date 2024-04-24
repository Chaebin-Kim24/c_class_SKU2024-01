## 자료형

값, 메모리 공간, 함수, 수식은 자료형이라고 하는 속성이 있습니다.
자료형은 메모리 공간과 수식으로 계산된 이진 값을 어떻게 번역할지를 정합니다.

### 자료형의 분류

C 자료형 시스템은 다음과 같이 이뤄집니다:

- `void` 자료형
- 표준 자료형
  - `char` 자료형
  - 부호 있는 정수 자료형
    - `singed char` 자료형
    - `short` 자료형
    - `int` 자료형
    - `long` 자료형
    - `long long` 자료형
  - 부호 없는 정수 자료형
    - `unsigned char` 자료형
    - `unsigned short` 자료형
    - `unsigned int` 자료형
    - `unsigned long` 자료형
    - `unsigned long long` 자료형
  - 실수형
    - `float` 자료형
    - `double` 자료형
    - `long double` 자료형

## 변수 선언

C 언어의 선언은 프로그램에 이름을 도입하고, 그 의미와 특징을 정합니다.

선언은 다른 문장과 똑같이 세미콜론으로 끝납니다. 그리고 두 부분으로 이뤄집니다.

``` 자료형및지정자 선언자및초기화자 ```

자료형및지정자 - 순서 관계없이 공백으로 구분된,

                       - 자료형: void, 표준자료형

선언자및초기화자 - 쉼표로 구분되었고, 초기화자를 가질 수 있는 선언자들

### 선언자
각 선언자는 다음 중 하나입니다.

```이름                         (1)```

```이름 (매개변수들)             (2)```

 (1) 선언자가 도입하는 이름

 (2) 함수 원형

### 예제
```C
int x = 10; // x 라는 변수를 int 자료형으로 선언하고 초기값을 10으로 합니다.
```

### 초기화자
변수 선언은 초기화라는 과정을 통해 초기값을 제공할 수 있습니다.

각 선언자에 대해서 초기화자는 생략되지 않았으면 다음 중 하나입니다:

```= 수식                       (1)```

수식의 결과인 값으로 변수의 초기값이 정해집니다.

## return문
현재 함수를 종료하고 호출한 함수에게 지정된 값을 반환합니다.

### 문법
```return 수식;         (1)```

```return ;             (2)```

### 설명
(1) 수식을 계산하고, 현재 함수를 종료하고, 수식의 결과값을 반환합니다
(함수호출식의 결과가 수식의 결과값이 됩니다). 
함수의 반환형이 `void`가 아닐 때만 유효합니다.

(2) 현재 함수를 종료합니다. 함수의 반환형이 'void'일 때만 유효합니다.

### 예시
```c
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
```
실행 결과:
```
fa(): i is 2
fb(): i is not 2
main(): 0
```
## printf
<stdio.h> 헤더에 함수원형이 있습니다.
```c
int printf(문자열, ...);
```
값을 문자열로 변환해서 화면에 출력합니다.

### 매개변수
**문자열** - 화면에 출력할 내용, %가 없는 부분은 그대로 출력됩니다.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; **...** - 화면에 출력될 값들입니다.

문자열에서 %가 있는 부분이 값으로 변환되며, 변환 지정자라고 부릅니다. 
변환 지정자는 다음과 같은 문법으로 정해집니다.

- 시작하는 % 문자
- 옵션으로 넣을 수 있는 정렬 관련 서식
  - **-**: 왼쪽 정렬
  - **+**: 오른쪽 정렬 (기본값)
- 옵션으로 넣을 수 있는 최소 출력폭. 숫자입니다. 값을 출력한 결과가 이보다 작으면 공백으로 채워집니다.
- 옵션으로 넣을 수 있는 소숫점 뒤 숫자 개수. '.' 하고 숫자입니다.
- 서식 지정자

서식 지정자는 값을 어떻게 출력할지를 정해주고, 종류는 다음과 같습니다.

|지정자|설명|
|-----|---------------|
|%  | 문자 그대로 %를 출력합니다. |
|c  | 문자를 출력합니다. |
|s  | 문자열을 출력합니다. |
|d  | int 자료형을 십진수로 출력합니다. |
|ld | long 자료형을 십진수로 출력합니다. |
|lld| long long 자료형을 십진수로 출력합니다. |
|u  | unsigned int 자료형을 십진수로 출력합니다. |
|lu | unsigned long 자료형을 십진수로 출력합니다. |
|llu| unsigned long long 자료형을 십진수로 출력합니다. |
|f  | double 자료형을 십진수 실수로 출력합니다. |
|lf | double 자료형을 십진수 실수로 출력합니다. |

### 예제
```c
#include <stdio.h>

int main(void)
{
  printf("string\n");
  printf("%c\n", 'C');
  printf("%s\n", "Hello");
  printf("%d\n", 100);
  printf("%ld\n", (long) 100);
  printf("%lld\n", (long long) 100);
  printf("%u\n", (unsigned int) 100);
  printf("%lu\n", (unsigned long) 100);
  printf("%llu\n", (unsigned long long) 100);
  printf("%f\n", 1.1);
  printf("%lf\n", 1.1);
}
```
실행 결과:
```
string
C
Hello
100
100
100
100
100
100
1.1
1.1
```



## scanf
<stdio.h> 헤더에 함수원형이 있습니다.
```c
int scanf(문자열, ...);
```
데이터를 키보드 입력에서 받아서 문자열에 적힌 형식에 맞게 변환하고, 주어진 메모리 공간에 저장합니다.

### 매개변수
**문자열** - 입력값을 어떻게 읽을지 지정합니다.

문자열은 다음과 같이 구성됩니다.
- `%`를 제외한 공백이 아닌 문자들: 입력받은 값들 중 정확하게 같은 문자를 제거하고 다르면 오류를 발생시킵니다.
- 공백 문자들: 공백 문자 하나는 모든 연속된 줄바꿈, 띄어쓰기, 탭을 제거합니다.
- 변환 지정자: 모든 변환 지정자 문법은 다음과 같습니다
  - 시작하는 `%` 문자  
  - 서식 지정자

서식 지정자 종류는 다음과 같습니다.

|지정자|설명|
|-----|---------------|
|%  | 문자 그대로 %에 매칭합니다. |
|c  | 문자 하나를 입력받습니다. |
|hhd| 십진수를 signed char 또는 unsigned char 주소에 저장합니다. |
|hd | 십진수를 signed short 또는 unsigned short 주소에 저장합니다. |
|d  | 십진수를 signed int 또는 unsigned int 주소에 저장합니다. |
|ld | 십진수를 signed long 또는 unsigned long 주소에 저장합니다. |
|lld| 십진수를 signed long long 또는 unsigned long long 주소에 저장합니다. |
|hhu| 부호 없는 십진수를 signed char 또는 unsigned char 주소에 저장합니다. |
|hu | 부호 없는 십진수를 signed short 또는 unsigned short 주소에 저장합니다. |
|u  | 부호 없는 십진수를 signed int 또는 unsigned int 주소에 저장합니다. |
|lu | 부호 없는 십진수를 signed long 또는 unsigned long 주소에 저장합니다. |
|llu| 부호 없는 십진수를 signed long long 또는 unsigned long long 주소에 저장합니다. |
|f  | 실수를 float 주소에 저장합니다. |
|lf | 실수를 double 주소에 저장합니다. |

`c`를 제외한 모든 서식 지정자는 입력을 처리하기 전에 앞의 모든 공백 및 줄바꿈 문자를 제거합니다.

### 예제
```c
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
```
실행 결과:
```
25, 54.32, 1.0
```
