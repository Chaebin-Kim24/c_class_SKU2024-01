// �й� 2020305502
// �̸� ��μ�

/*#include <stdio.h> //9�� ���� �Դϴ�.

void reverse() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverse();
        static int isPrinted = 0;
        if (!isPrinted) {
            printf("���� ���: ");
            isPrinted = 1; 
        }

       
        printf("%c", c);
    }
}

int main() {
    printf("������ �Է��Ͻÿ�: ");
    reverse();
    printf("\n"); 
    return 0;
}*/
/*
#include <stdio.h> //10�� ���� �Դϴ�.

double euqation(int n) {
    if (n == 1) {
        return 1.0;
    }
    else {
        return 1.0 / n + euqation(n - 1);
    }
}

int main() {
    int n;
    printf("�Է�:  ");
    scanf("%d", &n);

    double result = euqation(n);
    printf("1/1 + 1/n...+  1/%d = %f\n", n, result);

    return 0;
}
*/
/*
#include <stdio.h> //11�� ���� �Դϴ�.

int �Ǻ���ġ(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return �Ǻ���ġ(n - 1) + �Ǻ���ġ(n - 2);
    }
}

int main() {
    int n;
    printf("�Է�: ");
    scanf("%d", &n);

    int result = �Ǻ���ġ(n);
    printf("�Ǻ���ġ ������ %d��° ���� %d�Դϴ�.\n", n, result);

    return 0;
}
*/

#define CRT_SECURE_NO_WARNINGS //12�� ���� �Դϴ�.
#include <stdio.h>
int choice;

int balance = 20000;
int deposit, withdraw;

void �ܰ�_Ȯ��() {
   
     printf("(1) �ܰ� Ȯ��: \n");
    
}
void �Ա�() {
    
        printf("(2) �Ա�: \n");
     

}
int ���() {

    printf("(3) ���: \n");
}

void ����() {
    printf("(4) ����\n");
    
}
int main() {
    printf("*************** Welcome to Express ATM ***************\n");
    do {
        �ܰ�_Ȯ��();
        �Ա�();
        ���();
        ����();
        printf("�ϳ��� �Է��Ͻÿ�: ");
        scanf_s("%d", &choice);
        
        switch (choice) {
        case 1:
            printf("���� �ִ� �ܰ��: %d �Դϴ�.\n", balance);
            break;
        case 2:
            printf("�Աݱݾ�: ");
            scanf_s("%d", &deposit);
            deposit = balance + deposit;
            printf("���ο� �ܰ��: %d \n", deposit);
            break;
        case 3:
            printf("��ݱݾ�: ");
            scanf_s("%d", &withdraw);
            withdraw = balance - withdraw;
            printf("���ο� �ܰ��: %d\n", withdraw);
            break;
        case 4:
            printf("(4) ����\n");
            break;
        default:
            printf("ERROR\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
