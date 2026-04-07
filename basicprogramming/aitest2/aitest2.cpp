#include <cstdio> // printf 함수를 사용하기 위한 C 표준 입출력 헤더

int main() {
    // 1. 기본 자료형 선언 및 초기화
    int age = 25;             // 정수형
    float weight = 68.5f;     // 실수형
    char section = 'A';       // 문자형
    bool isValid = true;      // 논리형

    printf("=== 기본 자료형 출력 ===\n");
    printf("나이(int): %d\n", age);
    printf("몸무게(float): %.1f\n", weight);
    printf("구역(char): %c\n", section);
    printf("유효성(bool): %s\n\n", isValid ? "true" : "false");

    // 2. 이중 for문 예시
    // 바깥쪽 루프가 한 번 실행될 때마다 안쪽 루프가 전체 실행됩니다.
    // 주로 2차원 데이터나 행렬 형태를 다룰 때 사용합니다.
    printf("=== 이중 for문 예시 (2~3단 구구단 일부) ===\n");
    for (int i = 2; i <= 3; ++i) {         // 바깥 루프: 단수
        printf("[%d단]\n", i);
        for (int j = 1; j <= 3; ++j) {     // 안쪽 루프: 곱하는 수
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    // 3. do-while문 예시
    // 조건 검사를 루프의 끝에서 수행합니다. 
    // 따라서 조건이 처음부터 거짓(false)이더라도 무조건 최소 한 번은 실행됩니다.
    printf("=== do-while문 예시 ===\n");
    int count = 3;
    
    do {
        printf("현재 카운트: %d (조건이 거짓이어도 한 번은 출력됩니다.)\n", count);
        count++; // count를 11로 증가
    } while (count < 3); // 11은 5보다 작지 않으므로 조건은 거짓(false). 즉시 루프 종료.

    return 0;
}