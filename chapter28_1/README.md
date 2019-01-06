<meta charset="utf-8">

## 도전 프로그래밍! 네번째 - 1번~5번 문제까지

```c
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
```




