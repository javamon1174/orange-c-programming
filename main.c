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
int writeMyInfo(void); // example 24-1-1, 21-1-2
int readMyInfoFromFile(void); // example 24-1-3
int getByteSizeFromFile(FILE * fp); // example 24-2

int main() {
    // example 24-1-1, 21-1-2
    writeMyInfo();

    // example 24-1-3
    readMyInfoFromFile();

    // example 24-2
    FILE * fp = fopen("/Users/javamon/study/orange-c-programming/sample/text.txt", "wt");
    fputs("abcdeabcde", fp); // +10
    fputs("abcdefg", fp); // +7

    int fsize = getByteSizeFromFile(fp);
    printf("파일 크기 : %ld\n", fsize);

    return 0;
}

int getByteSizeFromFile(FILE * fp) { // example 24-2
    int fpos = ftell(fp);
    int fsize;

    fseek(fp, 0, SEEK_END); // 포인트를 마지막으로 이동
    fsize = ftell(fp); // 마지막 포인트 값을 사이즈로 활용
    fseek(fp, fpos, SEEK_SET); // 이전 포인트로 되돌림

    return fsize;
}

int readMyInfoFromFile() { // example 24-1-3
    char str[50];

    FILE * fp = fopen("/Users/javamon/study/orange-c-programming/sample/simple.txt", "rt");

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s\n",str);
    }
    fclose(fp);

    return 0;
}


int writeMyInfo() { // example 24-1-1, 21-1-2
    FILE * fp = fopen("/Users/javamon/study/orange-c-programming/sample/simple.txt", "wt");

    if (fp == NULL) {
        puts("파일 오픈 실패!");
        return -1;
    }

    fputs("#이름 : 홍길동 \n", fp);
    fputs("#주민번호 : 880916-1231234 \n", fp);
    fputs("#전화번호 : 010-1111-2222 \n", fp);

    // example 24-1-2
    fputs("#즐겨먹는 음식 : 치킨\n", fp);
    fputs("#취미 : 코딩\n", fp);

    fclose(fp);

    return 0;
}
*/

/* chapter 25 -------------------------------------------------------------------------------------------
int printReverseFackageWord(void);
int insertIntForever(void);

int main() {
    // example 25-1 pass
    // example 24-2-1
    printReverseFackageWord();

    // example 25-2-1
//    insertIntForever();

    return 0;
}

int printReverseFackageWord() { // example 24-2-1
    char str[] = "power ball player"; // input value
    int len = strlen(str);

    for (int i = len; i > -1; --i) {
        if (str[i] == 32) {
            printf("%s ", &str[i+1]);
            str[i]=0;
        }
    }
    printf("%s", &str[0]);

    return 0;
}

int insertIntForever() { // example 25-2-2
    int len = 5;
    int * ptr = (int *) malloc(sizeof(int)*len);
    int input, index = 0;

    while (1) {
        printf("정수를 입력해주세요 : ");
        scanf("%d", &input);

        if (input != -1) {
            if (len == index) {
                ptr = (int *) realloc(ptr, sizeof(int)*3);
                len = len+3;
            }
            ptr[index] = input;
            index++;
        }
        else {
            break;
        }
    }

    printf("입력된 정수들 :");
    for (int i = 0; i < index; ++i) {
        printf(" %2d", ptr[i]);
    }

    return 0;
}
*/
/* chapter 26 -------------------------------------------------------------------------------------------
int AddAndMulMacro();
int getCircleSize();
int chkMAXValue();

int main() {
    // example 26-1-1
    AddAndMulMacro();

    // example 26-1-2
    getCircleSize();

    // example 26-1-3
    chkMAXValue();

    return 0;
}
int chkMAXValue() {
    #define MAX(a, b) ((a) > (b) ? (a) : (b))
    #define MIN(a, b) ((a) < (b) ? (a) : (b))

    int num1, num2;
    printf("두개의 정수를 입력해주세요 : ");
    scanf("%d %d", &num1, &num2);

    printf("%d값이 %d보다 큰 값입니다.", MAX(num1, num2), MIN(num1, num2));

    return 0;
}

int getCircleSize() {
    #define PI 3.1415
    #define AREA(R) ((R*R)*PI)

    double rad = 2.1;
    printf("반지름 : %g, 원의 넓이 : %g\n", rad, AREA(rad));

    return 0;
}

int AddAndMulMacro() {
    #define ADD(x, y, z)    (x+y+z)
    #define MUL(x, y, z)    (x*y*z)

    int add = ADD(2, 4, 6);
    int mul = MUL(2, 4, 6);

    printf("덧셈 결과 : %d\n", add);
    printf("곱셈 결과 : %d\n", mul);

    return 0;
}
*/
/* chapter 28-1 -------------------------------------------------------------------------------------------
void challengeOne(void); // challenge 28-1 도서 관리용 프로그램
void clearBuffer(void);

void challengeTwo(void); // challenge 28-2 도서 관리용 프로그램 포인터 선언으로 대체

void challengeThree(); // challenge 28-3 복소수 구조체 연산
typedef struct cNumber {
    double truth_number; // 실수
    double untruth_number; // 허수
} CNUM;

void challengeFour(void); // challenge 28-4 파일에 저장된 문자열의 첫문자 비교

void challengeFive(void); // challenge 28-5 두개의 파일 일치 비교

int main() {
    // challenge 28-1 도서 관리용 프로그램
    challengeOne();

    // challenge 28-2 도서 관리용 프로그램 포인터 선언으로 대체
    challengeTwo();

    // challenge 28-3 복소수 구조체 연산
    challengeThree();

    // challenge 28-4 파일에 저장된 문자열의 첫문자 비교
    challengeFour();

    // challenge 28-5 두개의 파일 일치 비교
    challengeFive();

    return 0;
}

void inputString2files() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!2";

    FILE *fp = fopen("/Users/javamon/study/orange-c-programming/sample/d1.txt", "w");
    FILE *fp2 = fopen("/Users/javamon/study/orange-c-programming/sample/d2.txt", "w");

    fputs(str1, fp);
    fputs(str2, fp2);

    fclose(fp);
    fclose(fp2);
}

void compareFiles(void) {
    char buffer[20];
    char buffer2[20];

    FILE *fp = fopen("/Users/javamon/study/orange-c-programming/sample/d1.txt", "r");   // hello.txt 파일을 읽기 모드로 열기.

    fgets(buffer, sizeof(buffer), fp);


    FILE *fp2 = fopen("/Users/javamon/study/orange-c-programming/sample/d2.txt", "r");   // hello.txt 파일을 읽기 모드로 열기.

    fgets(buffer2, sizeof(buffer2), fp2);

    fclose(fp);
    fclose(fp2);

    int ret = strcmp(buffer, buffer2);

    printf("1번 파일 내용 : %s\n", buffer);
    printf("1번 파일 내용 : %s\n", buffer2);
    if (ret == 0) {
        puts("두 파일의 내용은 같습니다.");
    }
    else {
        puts("두 파일의 내용은 다릅니다.");
    }
}

// challenge 28-5 두개의 파일 일치 비교
void challengeFive(void) {
    inputString2files();
    compareFiles();
}

// challenge 28-4 파일에 저장된 문자열의 첫문자 비교
void readSampleData2FileandCountWord(void) {
    char str[50];
    int num = 0, word_p_count = 0, word_a_count = 0;

    FILE * fp = fopen("/Users/javamon/study/orange-c-programming/sample/sample_28_4.txt", "r");

    while (num < 10) {
        fscanf(fp, "%s %d", str, &num);
        if (str[0] == 80) {
            word_p_count++;
        }
        if (str[0] == 65) {
            word_a_count++;
        }
        num++;
    }

    printf("a로 시작하는 단어 수 : %d\n", word_a_count);
    printf("p로 시작하는 단어 수 : %d", word_p_count);

    fclose(fp);

}

void challengeFour(void) {
    readSampleData2FileandCountWord();
}

// challenge 28-3 복소수 구조체 연산
CNUM CNumberAdd(CNUM num1, CNUM num2) {
    // 복소수 덧셈 공식 대입
    CNUM res_add = {
            num1.truth_number+num2.truth_number,
            num1.untruth_number+num2.untruth_number
    };

    return res_add;
}
CNUM CNumberMul(CNUM num1, CNUM num2) {
    double a = num1.truth_number, b = num1.untruth_number,
           c = num2.truth_number, d = num2.untruth_number;

    // 복소수 곱셈 공식 대입
    CNUM res_add = {a*c-b*d, b*c+a*d};

    return res_add;
}


void challengeThree(void) {
    CNUM cnum1 = { 1.2, 2.4 };
    CNUM cnum2 = { 1.1, 2.2 };

    CNUM res_add = CNumberAdd(cnum1, cnum2);
    printf("합의 결과] 실수 : %f, 허수 : %f\n", res_add.truth_number, res_add.untruth_number);

    CNUM res_mul = CNumberMul(cnum1, cnum2);
    printf("곱의 결과] 실수 : %f, 허수 : %f\n", res_mul.truth_number, res_mul.untruth_number);
}


// challenge 28-1 도서 관리용 프로그램 포인터 선언으로 대체
void challengeTwo(void) {
    typedef struct book {
        char author[30];
        char title[50];
        int pages;
    } BOOK;

    BOOK * array_book[3];

    for (int i = 0; i < sizeof(array_book) / sizeof(struct book *); i++)
    {
        array_book[i] = malloc(sizeof(struct book)); // heap 메모리에 할당
    }

    puts("도서 정보 입력");
    for (int i = 0; i < 3; ++i) {
        printf("저자 : ");
        fgets(array_book[i]->author, sizeof(array_book[i]->author), stdin);
        //    strcpy(array_book[0]->author, "power");

        printf("제목 : ");
        fgets(array_book[i]->title, sizeof(array_book[i]->title), stdin);

        printf("페이지 수 : ");
        scanf("%d", &array_book[i]->pages);

        clearBuffer();
    }
    printf("\n");

    puts("도서 정보 출력");
    for (int j = 0; j < 3; ++j) {
        printf("book %d\n", j+1);
        printf("저자 : %s", array_book[j]->author);
        printf("제목 : %s", array_book[j]->title);
        printf("페이지 수 : %d", array_book[j]->pages);
        printf("\n");
    }

    for (int i = 0; i < sizeof(array_book) / sizeof(struct book *); i++)
    {
        free(array_book[i]); // heap 메모리에서 해당 변수 해제
    }
}


// challenge 28-1 도서 관리용 프로그램
void challengeOne(void) {
    typedef struct book {
        char author[30];
        char title[50];
        int pages;
    } BOOK;

    BOOK arr_book[3];

    puts("도서 정보 입력");
    for (int i = 0; i < 3; ++i) {
        printf("저자 : ");
        fgets(arr_book[i].author, sizeof(arr_book[i].author), stdin);
        printf("제목 : ");
        fgets(arr_book[i].title, sizeof(arr_book[i].title), stdin);
        printf("페이지 수 : ");
        scanf("%d", &arr_book[i].pages);

        clearBuffer();
    }
    printf("\n");
    puts("도서 정보 출력");
    for (int j = 0; j < 3; ++j) {
        printf("book %d\n", j+1);
        printf("저자 : %s", arr_book[j].author);
        printf("제목 : %s", arr_book[j].title);
        printf("페이지 수 : %d", arr_book[j].pages);
        printf("\n");
    }
}

// challenge 28-1 도서 관리용 프로그램
void clearBuffer(void) {
    while(getchar() != '\n');
}
*/
/* chapter 28-2 -------------------------------------------------------------------------------------------
*/
int main() {
    puts("hi!");
}