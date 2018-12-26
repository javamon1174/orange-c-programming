#include <stdio.h>

/* chapter 1 -------------------------------------------------------------------------------------------
int main() {
    printf("Hello, World!\n");
    return 0;
}
*/

/* chapter 2 -------------------------------------------------------------------------------------------

int main() {
    // example 1-1
    printf("홍길동\n"
           "홍 길 동\n"
           "홍  길  동\n");

    printf("\n");

    // example 1-2
    printf("자바몬\n");
    printf("서울\n");
    printf("02-1234-1234\n");

    printf("\n");
    // example 2-1
    printf("제 이름은 홍길동입니다.\n");
    printf("제 나이는 20살이고요.\n");
    printf("제가 사는 곳의 번지수는 %d-%d입니다.\n", 123, 456);

    printf("\n");
    // example 2-2
    printf("%dx%d=%d\n", 4, 5, 4*5);
    printf("%dx%d=%d\n", 47, 9, 7*9);

    return 0;
}
*/

/* chapter 3 -------------------------------------------------------------------------------------------

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
    printf("example5 : 결과는 %d입니다.", result);

    return 0;
}
*/

/* chapter 4 -------------------------------------------------------------------------------------------
int main() {
    // example 04-1
    int num1;

    printf("한개의 정수 입력 : ");
    scanf("%d", &num1);
    printf("example1 : 연산 결과는 %d입니다.\n", (~num1)+1);

    // example 04-2
    printf("example1 : 연산 결과는 %d입니다.\n", (3<<3)>>2);
    return 0;
}
*/

/* chapter 5 -------------------------------------------------------------------------------------------
 int main() {
    // example 05-1
    int left_top_x, left_top_y, right_bottom_x, right_bottom_y, size;

    printf("좌상단 좌표 입력 x, y: ");
    scanf("%d %d", &left_top_x, &left_top_y);

    printf("우하단 좌표 입력 x, y: ");
    scanf("%d %d", &right_bottom_x, &right_bottom_y);

    // 넓이 공식
    size = (right_bottom_x-left_top_x)*(right_bottom_y-left_top_y);

    printf("example1 : 직사각형의 넓이는 %d입니다.\n", size);

    // example 05-2
    double double1, double2, add, sub;

    printf("두개의 실수 입력 : ");
    scanf("%lf %lf", &double1, &double2);

    add = double1+double2;
    sub = double1-double2;

    printf("example2 : 더하기 %f입니다.\n", add);
    printf("example2 : 빼기 %f입니다.\n", sub);

    // example 05-3
    // question 1 => 0~127
    // question 2 => 65, 1씩
    // question 3 => 32

    // example 05-4
    int num;
    printf("아스키 문자로 변환 정수 입력 : ");
    scanf("%d", &num);
    printf("example2 : 해당 아스키 코드(ASCII)는 %c입니다.\n", num);
}
*/

/* chapter 7 -------------------------------------------------------------------------------------------
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
*/
/* chapter 8 -------------------------------------------------------------------------------------------
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
 */
/* chapter 9 -------------------------------------------------------------------------------------------
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
*/
/* chapter 10 -------------------------------------------------------------------------------------------
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

int Decimal() {
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

int GetTime(int second) {
    int h, m, s;

    s = second % 60;
    h = (second / 60) / 60;
    m = (second / 60) % 60;

    printf("입력 시간 : %d시간 %d분 %d초", h, m, s);

    return 0;
}

int GetMaxNum() {
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

int MultiRepeat(repeat) {
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
*/