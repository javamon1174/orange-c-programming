<meta charset="utf-8">

## 매크로와 선행 처리기

### 선행 처리 명령문 : #
```c
#define PI 3.14
// 지시자, 매크로(매크로 상수), 매크로 몸체로 구성된다.

#define PRINT_ADDR  puts("주소 : 서울시 인사동");
// 위와같이 함수의 호출문도 매크로로 정의할 수 있다.
```

## 예제 코드
```c
int AddAndMulMacro();
int getCircleSize();
int chkMAXValue();

int main() {
    // example 26-1-1
    AddAndMulMacro();

    // example 26-1-2
    getCircleSize();

    // example 26-1-3
    chkMAXValue();

    return 0;
}
int chkMAXValue() {
    #define MAX(a, b) ((a) > (b) ? (a) : (b))
    #define MIN(a, b) ((a) < (b) ? (a) : (b))

    int num1, num2;
    printf("두개의 정수를 입력해주세요 : ");
    scanf("%d %d", &num1, &num2);

    printf("%d값이 %d보다 큰 값입니다.", MAX(num1, num2), MIN(num1, num2));

    return 0;
}

int getCircleSize() {
    #define PI 3.1415
    #define AREA(R) ((R*R)*PI)

    double rad = 2.1;
    printf("반지름 : %g, 원의 넓이 : %g\n", rad, AREA(rad));

    return 0;
}

int AddAndMulMacro() {
    #define ADD(x, y, z)    (x+y+z)
    #define MUL(x, y, z)    (x*y*z)

    int add = ADD(2, 4, 6);
    int mul = MUL(2, 4, 6);

    printf("덧셈 결과 : %d\n", add);
    printf("곱셈 결과 : %d\n", mul);

    return 0;
}
```