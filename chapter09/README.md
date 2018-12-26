<meta charset="utf-8">

## 함수(function)

### Divede and Conquer! 나누어서 정복하라!

### 변수 종류 : 전역변수, 지역변수, 스태틱 변수(static), 레지스터 변수(register)

```c
int threeDataScan() {  // example 09-1-1
    int num1, num2, num3;

    printf("세개의 정수를 입력해주세요.");
    scanf("%d %d %d", &num1, &num2, &num3);

    return num1, num2, num3;
}

int getBigData() { // example 09-1-1
    int num1, num2, num3 = threeDataScan();

    if (num1 > num2 && num1 > num2) {
        return num1;
    }
    else if (num2 > num1 && num2 > num3) {
        return num2;
    }
    else if (num3 > num1 && num3 > num2) {
        return num3;
    }
    return 0;
//}

int CelToFah(int data) { // example 09-1-2
    return (1.8 * (double) data) + 32;
}
int FahToCel(int data) { // example 09-1-2
    return ((double) data - 32) / 1.8;
}

int Fibonacci() { // example 09-1-3 페버나치
    int num1 = 0, num2 = 1, out, count;

    printf("페버나치를 몇번 실행할까요? : ");
    scanf("%d", &count);

    for (int i = 0; i <= count; ++i) {
        out = num1 + num2;
        printf("%d", out);

        num1 = num2;
        num2 = out;

        if (i != count) {
            printf(", ");
        }
    }
    return 0;
}

int main() {
    // example 09-1-1
    int result = getBigData();
    printf("세 정수 중 가장 큰 값은 %d 입니다.", result);

    // example 09-1-2
    double cel = CelToFah(10);
    double fah = FahToCel(60);

    printf("화씨 : %f 섭씨 : %f", cel, fah);

    // example 09-1-3 페버나치
    Fibonacci();

    return 0;
}

```