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
