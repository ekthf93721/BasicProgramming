#include <cstdio>
int main(int argc, char* argv[])
{
    printf("== Variable =========\n");
    
    // 변수의 선언 ==> 자료형은 int (정수형) /  변수 이름이 A
    int A; // 선언만 하면 A는 쓰레기 값만 들어감 ==>
    A = 1024; // 대입
    printf("A = %d\n", A) ;
    
    // 변수의 선언 + 정의(Definition) ==> 값을 넣어서 변수를 초기화 시켜주는 것
    int B = 100;
    B = 2222;
    B = -130;
    printf("B = %d\n", B) ;
    
    // 상수, 리터럴(literal)
    const int val = 5; // 선언만 하면 컴파일 오류
    int const val2 = 10;
    // 문자는 Character 이라고 한다.
    char C = 'A';
    
    char szString[] = "Hello World!"; // "Heelo World!" 문자열 리터럴
    printf("szString = %s\n", szString);
    
    // bool = 참과 거짓 (Boolean)
    bool boolean = true; // true (참): 1, false(거짓): 0
    
    return 0;
}
