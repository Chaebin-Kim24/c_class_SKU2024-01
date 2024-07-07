// 학번 2022305504
// 이름 이승미

9번 

def reverse_string(s):
    if len(s) == 0:
        return s
    else:
        return reverse_string(s[1:]) + s[0]

def main():
    user_input = input("사용 문자: ")
    reversed_string = reverse_string(user_input)
    print("역순 문자:", reverse_string)

if __name__ == "__main__":
    main()

10번 

def harmonic_series(n):
    total = 0
    for i in range(1, n + 1):
        total += 1 / i
    return total

def main():
    n = int(input("n을 입력하세요: "))
    result = harmonic_series(n)
    print("1/1 + 1/2 + 1/3 + ... + 1/{}의 값은 {:.2f}입니다.".format(n, result))

if __name__ == "__main__":
    main()

11번

#include <iostream>

int fibonacci(int n) {
    int prev = 0;
    int current = 1;
    int next;

    if (n == 0) {
        return prev;
    }

    for (int i = 2; i <= n; ++i) {
        next = prev + current;
        prev = current;
        current = next;
    }

    return current;
}

12번

#include <iostream>

// 전역 변수로 현재 계좌의 잔고를 관리합니다.
double account_balance = 0.0;

// 메뉴를 표시하는 함수
void display_menu() {
    std::cout << "----- 메뉴 -----" << std::endl;
    std::cout << "1. 입금" << std::endl;
    std::cout << "2. 출금" << std::endl;
    std::cout << "3. 잔고 조회" << std::endl;
    std::cout << "4. 종료" << std::endl;
    std::cout << "---------------" << std::endl;
}

// 입금 기능을 수행하는 함수
void deposit(double amount) {
    account_balance += amount;
    std::cout << amount << "원이 입금되었습니다." << std::endl;
}

// 출금 기능을 수행하는 함수
void withdraw(double amount) {
    if (amount > account_balance) {
        std::cout << "잔액이 부족합니다." << std::endl;
    } else {
        account_balance -= amount;
        std::cout << amount << "원이 출금되었습니다." << std::endl;
    }
}

// 잔고 조회 기능을 수행하는 함수
void check_balance() {
    std::cout << "현재 잔액은 " << account_balance << "원 입니다." << std::endl;
}

int main() {
    int choice;
    double amount;

    while (true) {
        display_menu();
        std::cout << "원하는 작업을 선택하세요: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "입금할 금액을 입력하세요: ";
                std::cin >> amount;
                deposit(amount);
                break;
            case 2:
                std::cout << "출금할 금액을 입력하세요: ";
                std::cin >> amount;
                withdraw(amount);
                break;
            case 3:
                check_balance();
                break;
            case 4:
                std::cout << "프로그램을 종료합니다." << std::endl;
                return 0;
            default:
                std::cout << "잘못된 선택입니다. 다시 선택해주세요." << std::endl;
        }
    }

    return 0;
}