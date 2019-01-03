<meta charset="utf-8">

## 파일 입출력

### 텍스트파일, 바이너리 파일

## 예제 코드
```c
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
```