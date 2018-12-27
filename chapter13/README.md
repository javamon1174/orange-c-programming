<meta charset="utf-8">

## 포인터와 배열

### 포인터와 배열의 공통점
    1. 이름이 존재한다.
    2. 메모리의 주소 값을 나타내거나 저장한다.

### 포인터와 배열의 차이점(배열은 상수형 포인터)
    1. 포인터는 주소값의 변경이 가능하고, 배열은 불가능하다.

### 상수 형태의 문자열은 그 내용 변경이 불가능하다. => 상수형 포인터 ex) char * str = "String"
    1. 위의 예제에서 str 변수는 "S" 문자의 시작 주소값을 가진다.

###  포인터 배열 ex) int * arr[20]
    1. 값 대신 주소값을 저장하는 배열
    2. 문자열을 저장하는 포인터 배열 => 문자열이 시작하는 주소값으로 구성된 배열


```c
int main() {
    // example 13-1
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];
    int *ptr2 = &arr[4];

    // example 13-1-1
    for (int i = 0; i < 5; ++i) {
        ptr[i] += 2;
        printf("%d\n", ptr[i]);
    }

    // example 13-1-2
    for (int i = 0; i < 5; ++i) {
        *(ptr+i) += 2; // (ptr+i) => 주소값을 반환하고, *의 연산으로 값을 가져와 +2를 대입
        printf("%d\n", *ptr+i);
    }

    // example 13-1-3
    int total = 0;
    for (int j = 5; j > 0; --j) {
        total += *ptr2--;
    }

    // example 13-1-4 recheck!
    int arr2[] = {1, 2, 3, 4, 5, 6};
    int *f = &arr2[0], *b = &arr2[5], *t = NULL;


    for (int i = 0; i < 3; ++i) {
        t = *f;
        *f = *b;
        *b = t;
        f++;
        b--;
    }

    for (int k = 0; k < 6; ++k) {
        printf("%d\n", arr2[k]);
    }

    return 0;
}
```