<meta charset="utf-8">

## 일차원 배열

### 숫자 및 문자열 일차원 배열 다루기

```c
int main() {
    // example 11-1-1
    int total = 0, min, max;
    int arr[5];
    int len = sizeof(arr)/sizeof(int);

    for (int i = 0; i < len; ++i) {
        printf("배열에 추가할 정수를 입력해주세요 : ");
        scanf("%d", &arr[i]);

        if (i == 0) {
            min = arr[i];
            max = arr[i];
        }
        else if (i != 0 && min > arr[i]) {
            min = arr[i];
        }
        else if (i != len && max < arr[i]) {
            max = arr[i];
        }
        total += arr[i];

    }
    printf("총합 : %d, 최소값 : %d, 최대값 : %d",total, min, max);

    // example 11-1-2
    char arr[] = "Good time!";

    for (int i = 0; i < sizeof(arr)/sizeof(char)-1; ++i) {
        printf("%c", arr[i]);
    }

    // example 11-2
    char voca[50], ascii = 0;
    int len = 0;

    printf("하나의 영단어를 입력해주세요 : ");
    scanf("%s", voca);

    // example 11-2-1
    while (voca[len] != 0) {
        len++;
    }

    printf("입력된 단어의 길이는 %d 입니다.\n", len);

    // example 11-2-1
    for (int i = 0; i < len/2; ++i) {
        // 스와핑
        char temp = voca[i]; // 앞문자
        voca[i] = voca[(len-i)-1]; // 뒷문자 -1은 널값때문에
        voca[(len-i)-1] = temp;
    }
    printf("입력된 단어의 역순은 %s 입니다.\n", voca);

    // example 11-2-3
    for (int j = 0; j < len; ++j) {
         if (ascii < voca[j]) {
            ascii = voca[j];
        }
    }
    printf("아스키코드가 가장 큰 문자는 %c 입니다.", ascii);

    return 0;
}
```