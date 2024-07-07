//학번 2022304502
//이름 이동훈

9.def reverse_print(text):
    # 기저 사례: 문자열의 길이가 0이면 재귀 호출을 멈추고 함수를 종료합니다.
    if len(text) == 0:
        return
    else:
        # 문자열의 마지막 문자를 출력하고,
        # 그 문자를 제외한 나머지 문자열을 다시 reverse_print 함수에 넣어 재귀 호출합니다.
        print(text[-1], end='')
        reverse_print(text[:-1])

# 사용자로부터 문장을 입력 받습니다.
user_input = input("문장을 입력하시오: ")

# 입력 받은 문장을 역순으로 출력합니다.
print("역순 문장:", end=' ')
reverse_print(user_input)

10.
def calculate_sum(n):
    total = 0.0
    for i in range(1, n + 1):
        total += 1 / i
    return total

n = int(input("n 값을 입력하세요: "))
result = calculate_sum(n)
print("결과:", result)

11.
def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n-2) + fib(n-1)

# 파보니치 수열의 처음 10개 항을 출력해봅시다.
for i in range(10):
    print(fib(i)

12.
# 전역 변수로 계좌 잔고를 설정합니다.
balance = 10000

# 메뉴를 표시하는 함수를 정의합니다.
def display_menu():
    print("******************welcome to express ATM*********************")
    print("(1 ) 잔고 확인")
    print("(2 ) 입금")
    print("(3 ) 출금")
    print("(4 ) 종료")

# 잔고 확인 함수
def check_balance():
    global balance
    print("현재 잔고는", balance, "입니다.")

# 입금 함수
def deposit():
    global balance
    amount = int(input("입금 금액: "))
    balance += amount
    print("새로운 잔고는", balance, "입니다.")

# 출금 함수
def withdraw():
    global balance
    amount = int(input("출금 금액: "))
    if amount > balance:
        print("잔액이 부족합니다.")
    else:
        balance -= amount
        print("출금이 완료되었습니다. 새로운 잔고는", balance, "입니다.")

# 메인 함수
def main():
    while True:
        display_menu()
        choice = input("하나를 선택하시오: ")
        if choice == '1':
            check_balance()
        elif choice == '2':
            deposit()
        elif choice == '3':
            withdraw()
        elif choice == '4':
            print("프로그램을 종료합니다.")
            break
        else:
            print("잘못된 선택입니다. 다시 선택하세요.")

if __name__ == "__main__":
    main()