<meta charset="utf-8">

## 메모리 관리와 메모리의 동적 할당


### malloc과 free
    - 생성과 소멸의 시기가 지역변수나 전역변수와 다른 유형의 변수.
    - 사용자가 직접 생성하고 소멸할 수 있는 변수.
    - 변수를 힙(heap) 영역에 할당한다.


### 동적 메모리 공간확장 : readlloc
```c
int main(void) {
    int * arr = (int *) malloc(10);
    arr = (int *)realloc(arr, 5);
}
```

## 예제 코드
```c
int printReverseFackageWord(void);
int insertIntForever(void);

int main() {
    // example 25-1 pass
    // example 24-2-1
    printReverseFackageWord();

    // example 25-2-1
    insertIntForever();

    return 0;
}

int insertIntForever() { // example 25-2-1
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
```