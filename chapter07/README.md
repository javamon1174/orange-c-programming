<meta charset="utf-8">

## 반복문

### 자료형은 데이터를 표현하는 방법입니다.
    1. 변수는 데이터의 저장을 위해 할당된 메모리 공간에 붙여진 이름

### while, do~while, while 중첩, for, for 중첩에 대해 학습하고 숙달합니다.

```c
int main() {
    // while example 07-1-1
    int cnt, n = 0;

    printf("반복 횟수를 입력해주세요.\n");
    scanf("%d", &cnt);
    while (n < cnt) {
        printf("Hello, World!\n");
        n++;
    }

    // while example 07-1-2
    int num, c = 0, value = 3;

    printf("양의 정수를 입력해주세요.\n");
    scanf("%d", &num);
    while (c < num) {
        printf("%d\n", value);
        value += 3;
        c++;
    }

    // while example 07-1-3
    int num = 1, total = 0;

    while (num != 0) {
        printf("양의 정수를 입력해주세요.\n");
        scanf("%d", &num);
        total += num;
    }
    printf("%d\n", total);

    // while example 07-1-4
    int c=9, num;

    printf("양의 정수를 입력해주세요.\n");
    scanf("%d", &num);

    while (c > 0) {
        printf("%d x %d = %d\n", num, c, c*num);
        c--;
    }

    // while example 07-1-5
    int c = 0, c_c = 0, value = 0, val = 0;
    float result;

    printf("계산하실 숫자의 수를 입력해주세요.\n");
    scanf("%d", &c);

    while (c_c < c) {
        printf("%d번째 양의 정수를 입력해주세요.\n", c_c+1);
        scanf("%d", &val);
        value += val;
        c_c++;
    }
    result = (double) value/ (double)c;
    printf("%d개의 숫자의 평균은 %f입니다.\n", c, result);


    // while example 07-2-1 pass
    // while example 07-2-2
    int x = 0, y = 0;
    while (x < 5) {
        y = 0;
        while (y < x) {
            printf("O ");
            y++;
        }
        x++;
        printf("*\n");
    }

    // while example 07-3-1 pass
    // while example 07-3-2
    int c = 2, total = 0;
    do {
        total += c;
        c += 2;
    } while(c < 101);

    printf("총합 : %d", total);

    // while example 07-3-3 gugudan
    int x = 1, y;
    do {
        y = 1;
        do {
            printf("%d x %d = %d\n", x, y, x*y);
            y++;
        } while (y < 10);
        x++;
        printf("\n");
    } while (x < 10);

    // for example 07-4-1
    int num1, num2, total = 0;

    scanf("%d %d", &num1, &num2);
    for (int i = num1; i <= num2; ++i) {
        total += i;
    }
    printf("총 합은 : %d입니다.", total);

    // for example 07-4-2 factorial
    int num, total = 1;

    printf("1부터 몇까지 곱할 지 정수를 입력해주세요 : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; ++i) {
        total *= i;
    }
    printf("총 곱한 값은 %d입니다.", total);


    return 0;
}
```