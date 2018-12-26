<meta charset="utf-8">

## 조건문(분기문)

### if - else if - else
    1. 조건을 하나의 문장으로 연결하여 작성하면 조건에 맞는 그 해당 코드블럭만 실행되고 다른 조건들은 무시된다.
    2. 위와 같은 결과가 나오는 이유는 else if 문은 결국 if문의 중첩의 작동방식을 가진다.

### 삼항 연산자 : int num3 = (num1>num2) ? (num1) : (num2)
    1. 삼항 연산자에서 위의 문장이 참일 경우 num3에는 num1의 값이 들어가고, 거짓일 경우 그 반대다.
    2. 위의 문장에서 연산자 우선순위에 따라 조건 연산자가 먼저 실행되고 대입 연산자가 실행된다.

```c
int main() {
    // example 08-1-1
    for (int i = 1; i < 101; ++i) {
        if (i%7 == 0 || i%9 == 0) {
            printf("%d\n", i);
        }
    }

    // example 08-1-2
    int num1, num2, num3 = 0;

    printf("두 수의 차를 계산할 정수 두개를 입력해주세요. : ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        num3 = num1 - num2;
    }
    else if (num2 > num1) {
        num3 = num2 - num1;
    }

    if (num3 > 0) {
        printf("계산 결과가 양수입니다 : %d", num3);
    }

    // example 08-1-3
    int ko, en, math;
    double averg;
    char grade;

    printf("국어, 영어 수학의 점수를 입력해주세요. : ");
    scanf("%d %d %d", &ko, &en, &math);
    averg = ((double)ko +(double) en +(double) math)/3;

    if (averg > 90) {
        grade = 'A';
    }
    else if (averg > 80) {
        grade = 'B';
    }
    else if (averg > 70) {
        grade = 'C';
    }
    else if (averg > 50) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    printf("학점은 '%c' 입니다.", grade);

    return 0;
}
```