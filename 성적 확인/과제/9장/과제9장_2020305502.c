// 학번 2020305502
// 이름 김민석

/*#include <stdio.h> //9번 문제 입니다.

void reverse() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverse();
        static int isPrinted = 0;
        if (!isPrinted) {
            printf("역순 출력: ");
            isPrinted = 1; 
        }

       
        printf("%c", c);
    }
}

int main() {
    printf("문장을 입력하시오: ");
    reverse();
    printf("\n"); 
    return 0;
}*/
/*
#include <stdio.h> //10번 문제 입니다.

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
    printf("입력:  ");
    scanf("%d", &n);

    double result = euqation(n);
    printf("1/1 + 1/n...+  1/%d = %f\n", n, result);

    return 0;
}
*/
/*
#include <stdio.h> //11번 문제 입니다.

int 피보나치(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return 피보나치(n - 1) + 피보나치(n - 2);
    }
}

int main() {
    int n;
    printf("입력: ");
    scanf("%d", &n);

    int result = 피보나치(n);
    printf("피보나치 수열의 %d번째 수는 %d입니다.\n", n, result);

    return 0;
}
*/

#define CRT_SECURE_NO_WARNINGS //12번 문제 입니다.
#include <stdio.h>
int choice;

int balance = 20000;
int deposit, withdraw;

void 잔고_확인() {
   
     printf("(1) 잔고 확인: \n");
    
}
void 입금() {
    
        printf("(2) 입금: \n");
     

}
int 출금() {

    printf("(3) 출금: \n");
}

void 종료() {
    printf("(4) 종료\n");
    
}
int main() {
    printf("*************** Welcome to Express ATM ***************\n");
    do {
        잔고_확인();
        입금();
        출금();
        종료();
        printf("하나를 입력하시오: ");
        scanf_s("%d", &choice);
        
        switch (choice) {
        case 1:
            printf("남아 있는 잔고는: %d 입니다.\n", balance);
            break;
        case 2:
            printf("입금금액: ");
            scanf_s("%d", &deposit);
            deposit = balance + deposit;
            printf("새로운 잔고는: %d \n", deposit);
            break;
        case 3:
            printf("출금금액: ");
            scanf_s("%d", &withdraw);
            withdraw = balance - withdraw;
            printf("새로운 잔고는: %d\n", withdraw);
            break;
        case 4:
            printf("(4) 종료\n");
            break;
        default:
            printf("ERROR\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
