//��������
//������
//�� (2)

// ���� 
//int x = 10; // x ��� ������ int �ڷ������� �����ϰ� �ʱⰪ�� 10���� �մϴ�.
//�ʱ�ȭ��
//�� : return 0;

//return��
//����
//�� : (1)

//����
//����

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

//������ : fa(): i is 2
//           fb() : i is not 2
//           main() : 0



//printf
//int printf(���ڿ�, ...); ���� ���ڿ��� ��ȭ�ؼ� ȭ�鿡 ����Ͻÿ�.
// �� : int printf("���ڿ�");


//�Ű�����
//����


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

//������
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
// int scanf(���ڿ�, ...);
// �� : int scanf("���ڿ�");

//�Ű�����
// ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i;
    float f;
    double d;
    // Ű���� �Է�: 25 54.32 1.0
    scanf("%d%f%lf", &i, &f, &d);
    printf("%d, %f, %lf", i, f, d);
}