<meta charset="utf-8">

## 포인터와 배열의 완성

### 이중 포인터, 더블 포인터
    # duble num = 3.14;
    # double * ptr = *num;
    # double ** dptr = &ptr;
    => *dptr은 포인터변수 ptr를 의미한다.
    => *(*dptr)은 변수 num을 의미한다. == **dptr

### 더블 포인터와 배열
    int * ptrArr[] = {ptr1, ptr2, ptr3};
    int ** dptr = ptrArr;
    접근 => *(dptr[0]), *(dptr[1]), *(dptr[2])

### ** 연산자가 둘 이상 사용되어 선언되는 포인터 변수를 다중포인터라 한다.

### 포인터 필요한 이유 : 함수 내에서 함수 외부에 선언된 변수에 접근하는 방법을 제시해줍니다.

```c
int MaxAndMin(int arr[], int count, int **maxDptr, int **minDptr) {
    for (int i = 0; i < count; i++)
    {
        if (*maxDptr < &arr[i]) {
            *maxDptr = &arr[i];
        }
        if (*minDptr > &arr[i]) {
            *minDptr = &arr[i];
        }
        printf("배열[%d]의 주소값 : %d\n", i, &arr[i]);
    }
    return 0;
}

int main() {
    int * maxPtr;
    int * minPtr;
    int arr[5];

    maxPtr = minPtr = &arr[0];

    MaxAndMin(arr, (sizeof(arr) / sizeof(int)), &maxPtr, &minPtr);
    printf("max : %d, min : %d", maxPtr, minPtr);
}
```