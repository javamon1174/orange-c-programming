#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* chapter 21 -------------------------------------------------------------------------------------------
int char2ConversionCase(void);
int char2IntAndSum(void);
int stringArrayMerge(void);

int main() {
    // example 21-1
    char2ConversionCase();

    // example 21-2-1
    char2IntAndSum();
    // example 21-2-2
    stringArrayMerge();

    // example 21-2-3 pass
    // => 문자열 비교 : strmp 함수 활용, 문자열을 정수로 변환 : atoi 함수 활용 + 반복문

    return 0;
}
int stringArrayMerge() { // example 21-2-2
    char str1[20];
    char str2[20];
    char str3[20] = {0};

    printf("문자열 두개를 입력해주세요 : ");
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    strncat(str3, str1, strlen(str1)-1); // 개행 문자 제거
    strncat(str3, str2, strlen(str2)-1);

    printf("병합된 문자열 : %s", str3);
    return 0;
}

int char2IntAndSum() { // example 21-2-1
    char str[20];
    int total = 0;
    printf("아무 문자열 20개 내로 입력해주세요 : ");

    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); ++i) {
        int num = str[i] - '0';
        if (num > 0 && num <= 9) {
            total += num;
        }
    }
    printf("total : %d\n", total);

    return 0;
}

int char2ConversionCase() { // example 21-1
    char c;

    printf("알파벳을 입력해주세요 : ");
    c = getchar();

    // 아스키 코드의 범위로 알파벳 판별
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        if (c >= 65 && c <= 90) {
            c += 32; // 대소문자 gap
        }
        else if (c >= 97 && c <= 122) {
            c -= 32;
        }
        putchar(c);
    }
    else {
        printf("error!! 알파벳이 아님니다.");
    }
    return 0;
}
*/

/* chapter 22 -------------------------------------------------------------------------------------------
int employeeStruct(void);
int employeeStructArr(void);

int main() {
    // example 22-1
    employeeStruct();

    // example 22-2
    employeeStructArr();
    return 0;
}
int employeeStructArr() { // example 22-2
    struct person {
        char name[20];
        char phoneNum[20];
        int age;
    };

    struct person p3[3] = {
            { "angel", "010-2222-2222", 13 },
            { "devil", "010-3333-3333", 14 },
            { "power", "010-4444-4444", 15 }
    };

    for (int i = 0; i < 3; ++i) {
        printf("%s %s %d\n", p3[i].name, p3[i].phoneNum, p3[i].age);
    }

    return 0;
}

int employeeStruct() { // example 22-1
    struct employee {
        char name[20];
        char pid[20];
        int salary;
    };

    struct employee e;
    printf("이름을 입력해주세요 : ");
    scanf("%s", e.name);

    printf("주민번호 입력해주세요 : ");
    scanf("%s", e.pid);

    printf("월 급여를 입력해주세요 : ");
    scanf("%d", &e.salary);

    printf("이름 : %s, 주민번호 : %s, 급여정보 : %d", e.name, e.pid, e.salary);

    return 0;
}
*/

/* chapter 23 -------------------------------------------------------------------------------------------
typedef struct
{
    int xpos;
    int ypos;
} Point;

int SwapPoint(Point * ptr1, Point * ptr2);

int main() {
    // example 23-1
    Point post1 = {2, 4};
    Point post2 = {5, 9};


    SwapPoint(&post1, &post2);

    printf("post1 : %d %d\n", post1.xpos, post1.ypos);
    printf("post2 : %d %d\n", post2.xpos, post2.ypos);
    return 0;
}

int SwapPoint(Point * ptr1, Point * ptr2) {
    Point tmp = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = tmp;

    return 0;
}
*/
/* chapter 24 -------------------------------------------------------------------------------------------
int main() {
    return 0;
}
*/
/* chapter 25 -------------------------------------------------------------------------------------------
int main() {
    return 0;
}
*/
/* chapter 26 -------------------------------------------------------------------------------------------
int main() {
    return 0;
}
*/
/* chapter 27 -------------------------------------------------------------------------------------------
int main() {
    return 0;
}
*/
/* chapter 28 -------------------------------------------------------------------------------------------
int main() {
    return 0;
}
*/

