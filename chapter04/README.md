<meta charset="utf-8">

## 진법 변환 및 비트연산자

```c
int main() {
    // example 04-1
    int num1;

    printf("한개의 정수 입력 : ");
    scanf("%d", &num1);
    printf("example1 : 연산 결과는 %d입니다.\n", (~num1)+1); // 2의 보수 처리 후 더하기 1

    // example 04-2
    printf("example1 : 연산 결과는 %d입니다.\n", (3<<3)>>2); // 비트연산
    return 0;
}
```