<meta charset="utf-8">

## 도전! 프로그래밍2

### 5번 문제 패스(버블정렬)

```c
// example 15-1
int Odd(int *arr, int len) {
    printf("홀수 : ");
    for (int i = 0; i < len; ++i) {
        if (arr[i] % 2 != 0) {
            if (i < len-2)
                printf("%d, ", arr[i]);
            else
                printf("%d", arr[i]);
        }
    }
    return 0;
}
int Even(int *arr, int len) {
    printf("\n짝수 : ");
    for (int i = 0; i < len; ++i) {
        if (arr[i] % 2 == 0) {
            if (i < len-2)
                printf("%d, ", arr[i]);
            else
                printf("%d", arr[i]);
        }
    }
    return 0;
}

// example 15-2
int Ten2Two(int num) {
    int arr[20];
    int i = 0;


    while (num != 0) {
        arr[i] = num%2; // 나머지를 배열에 저장
        num = num/2;
        i++;
    }

    // 역순 출력
    for (int j = i-1; j >= 0; --j) {
        printf("%d", arr[j]);
    }

    return 0;
}

// example 15-3
int OutOddAndEvenInArr() {
    int captain[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int captain[10] = {1, 1, 4, 4, 4, 4, 3, 3, 2, 2};
    int len = (sizeof(captain)/sizeof(int));

    int m = 0, k = len-1;
    int marvel[len];

    for (int i = 0; i < len; ++i) {
        if (captain[i] % 2 != 0) { // odd
            marvel[m] = captain[i];
            m++;
        }
        else { // even
            marvel[k] = captain[i];
            k--;
        }
    }

    for (int j = 0; j < len; ++j) {
        printf("%d ", marvel[j]);
    }

    return 0;
}

int main() {
    // example 15-1
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    Odd(&arr, (sizeof(arr)/sizeof(int)));
    Even(&arr, (sizeof(arr)/sizeof(int)));

    // example 15-2
    int num = 42;
    printf("입력된 값 : %d, 2진수 변환값 : ", num);
    Ten2Two(num);

    // example 15-3
    OutOddAndEvenInArr();

    // example 15-4
    char *str;
    int len = 0, chk = 1;

    scanf("%s", str);

    len = strlen(str); // 문자열 길이 반환 함수

    for (int i = 0; i < (len/2); ++i) {
        if (str[i] != str[len-(i+1)]) {
            chk = 0;
        }
    }

    chk == 1 ? printf("회문 입니다.") : printf("회문이 아닙니다.");

    // example 15-4 pass
    return 0;
}
```