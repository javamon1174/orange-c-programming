<meta charset="utf-8">

# C 프로그래밍 연산자

## 연산자 종류
### 산술 - 사칙 연산 : +, -, *, /, %
### 논리 - 대소 및 항등 판정 : <, <=, ==, >, !=
### 관계 - 논리합, 논리곱, 논리부정 : ||, &&, !
### 증감 - 증가, 감소 : ++, --
### 대입 - 치환 : =
### 조건 - 조건 판정 : ?:
### 콤마 - 식의 열거 : ,

```c
int main() {
    // example 1
    int num1, num2;

    printf("두개의 정수 입력 : ");
    scanf("%d %d", &num1, &num2);
    printf("example2 : %d + %d = %d", num1, num2, num1 + num2);

    // example 2
    int num1, num2, num3;

    printf("세개의 정수 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("example2 : %d x %d + %d = %d", num1, num2, num3, (num1 * num2) + num3);


    // example 3
    int num1;

    printf("한개의 정수 입력 : ");
    scanf("%d", &num1);
    printf("example2 : %d의 제곱은 %d입니다", num1, (num1*num1));


    // example 4
    int num1, num2;

    printf("두개의 정수 입력 : ");
    scanf("%d %d", &num1, &num2);
    printf("example2 : 몫은 %d, 나머지는 %d입니다", num1/num2, num1%num2);

    // example 5
    int num1, num2, num3;

    printf("세개의 정수 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int result = (num1-num2)*(num2+num3)*(num3%num1);
    printf("example5 : %d", result);

    return 0;
}
```