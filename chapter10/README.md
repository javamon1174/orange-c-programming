<meta charset="utf-8">

## 도전! 프로그래밍1

```c
int uclid(num1, num2) { // challenge 3
    // 유클리드 호제법 재귀로 구현
    if (num1%num2 == 0) {
        return num2;
    }

    return uclid(num2, num1%num2);
}

int PurchasePlan() { // challenge 4
    int total = 3500, cream = 500, shrimp = 700, coke = 400;

    for (int c_cream = 1; c_cream < total/cream; ++c_cream)
    {
        for (int c_shrimp = 1; c_shrimp < total / shrimp; ++c_shrimp)
        {
            for (int c_coke = 1; c_coke < total / coke; ++c_coke)
            {
                if(total - (c_cream*cream + c_shrimp*shrimp + c_coke*coke) == 0)
                {
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", c_cream, c_shrimp, c_coke);
                }
            }
        }
    }

    return 0;
}

int Decimal() { // challenge 5
    int cnt = 0, i, j;

    for (i = 2; i <= 100; i++) {
        if (cnt == 10) {
            break;
        }

        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }

        if (i == j)
        {
            printf("%d ", i);
            cnt++;
        }
    }
    return 0;
}

int GetTime(int second) { // challenge 6
    int h, m, s;

    s = second % 60;
    h = (second / 60) / 60;
    m = (second / 60) % 60;

    printf("입력 시간 : %d시간 %d분 %d초", h, m, s);

    return 0;
}

int GetMaxNum() { // challenge 7
    int num, e = 0;

    printf("공식에 대입할 짝수를 입력해주세요 : ");
    scanf("%d", &num);

    while (1) {
        if (num%2 == 0) {
            num = num/2;
            e++;
        }
        else {
            break;
        }
    }
    printf("공식을 만족하는 최대값은 %d입니다.", e);

    return 0;
}

int MultiRepeat(repeat) { // challenge 8
    static int value = 1;

    if (repeat == 0) {
        return value;
    }
    else {
        value *= 2;
        return MultiRepeat(--repeat);
    }
}

int main() {
    // challenge 1
    printf("%x\n", 10);

    // challenge 2 pass
    // challenge 3
    int num1, num2;

    printf("최대 공약수를 구할 두개의 정수를 입력해주세요.");
    scanf("%d %d", &num1, &num2);

    int result = uclid(num1, num2);
    printf("두 수의 최대 공약수는 %d입니다.", result);

    // challenge 4
    PurchasePlan();

    // challenge 5
    Decimal();

    // challenge 6
    int second;

    printf("시간으로 바꿀 초를 입력해주세요 : ");
    scanf("%d", &second);

    GetTime(second);

    // challenge 7
    GetMaxNum();

    // challenge 8
    int num;

    printf("정수 입력 : ");
    scanf("%d", &num);

    int result = MultiRepeat(num);
    printf("2의 %d승은 %d", num, result);

    return 0;
}
```