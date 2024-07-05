// 학번 2022304502
// 이름 이동훈

#include <stdio.h>

int quiz1_2022304502(void)
{

        char op;
        int x,y, result;
//        print("수식을 입력하시오(예:2+5)>>");
//        scan(%d%c%d,&x,&op,&y);

switch(op)
       {
       case'+':
              result=x + y;
              break;
       case'-':
              result=x - y;
              break;
       case'*':
              result=x * y;
              break;
       case'/':
              result=x / y;
              break;
       case'%':
              result=x % y;
              break;
       default:
//             print("지원되지 않는 연산자입니다. |n"):
             break;
       }
//       print(%d %c %d |n",x, op, y,result);
       return 0;
}

int quiz2_2022304502(void)
{
             int x, y;
//             for(y=1,y <=5;y++)
                 
             {
                        for(x=5; x <y;x--)
//                                  print("*");
//                        print("|n");
                            ;
             }

             return 0;
}
