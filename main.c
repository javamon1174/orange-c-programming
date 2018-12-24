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
*/