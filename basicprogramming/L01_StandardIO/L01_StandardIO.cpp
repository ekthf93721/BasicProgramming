// 전처리기. #이 들어가면 '포함시킨다'는 의미
#include <cstdio>

int main()
{
  // 정수형 변수 선언
    int Num1 = 100;
    int Num2 = 6;
    scanf_s("%d", &Num1);
    scanf_s("%d", &Num2);
    
    printf("Num1: %d\n", Num1);
    printf("Num2: %d\n", Num2);
    // 덧셈 +
    printf("NUM1: %d + NUM2: %d = %d\n", Num1, Num2, Num1 + Num2);
    // 뺄셈 -
    printf("NUM1: %d - NUM2: %d = %d\n", Num1, Num2, Num1 - Num2);
    // 곱셈 *
    printf("NUM1: %d * NUM2: %d = %d\n", Num1, Num2, Num1 * Num2);
    // 나눗셈 /
    printf("NUM1: %d / NUM2: %d = %d\n", Num1, Num2, Num1 / Num2);
    // 나머지 % (특수문자는 두 번 쓰기)
   printf("NUM1: %d %% NUM2: %d = %d\n", Num1, Num2, Num1 % Num2);
    
    return 0;
}

