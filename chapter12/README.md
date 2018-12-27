<meta charset="utf-8">

## 포인터

### 포인터를 사용하는 이유
    1. 함수로 부터 하나 이상의 값을 리턴하기 위해서
    2. 배열을 쉽게 다루기 위해서
    3. 메모리 정보를 쉽게 다루기 위해서
    4. 복잡한 자료구조를 효율적으로 처리하기 위해서
    5. 배열로 생성할 수 없는 데이터를 생성하기 위해
    6. 메모리 공간을 효율적으로 사용하기 위해

### 포인터를 초기화할 값이 정해지지 않았을 때는 NULL로 선언을 하여 버그를 방지한다.

```c
int main() {
    // example 12-1-1
    int num = 10;
    int * ptr1 = &num;
    int * ptr2 = ptr1;

    (*ptr1)++;
    (*ptr2)++;

    printf("%d\n", num);

    // example 12-1-2
    int num1 = 10, num2 = 30;
    int *ptr1 = &num1, *ptr2 = &num2, *temp = NULL;

    *ptr1 += 5;
    *ptr2 -= 5;

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("ptr1 : %d, ptr2 : %d ", *ptr1, *ptr2);

    return 0;
}
```