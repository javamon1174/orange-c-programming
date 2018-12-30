<meta charset="utf-8">

## 다차원 배열과 포인터의 관계

### 2차원 배열이름의 포인터형
    1. 가리키는 대상은 무엇인가?
    2. 배열이름(포인터)을 대상으로 값을 1 증가 및 감조시 실제로는 얼마가 증가 및 감소하는가?
    3. int arr[3][4]
        => arr은 가리키는 대상이 int형 변수이고, 포인터 연산 시 sizeof(int)x4의 크기 단위로 증가 및 감소하는 포인터 형이다.

```c
int main() {
//     example 18-1-1
     int ** ptr
     int * ptr2[5] => int (*ptr2)[5]

//     example 18-1-2
     void SimpleFuncOne(int ** ptr1, int ** ptr2) => (int * ptr1, int * ptr2)
     void SimpleFuncTwo(int (* ptr3)[4], int (* ptr4)[4])

//     example 18-1-3
     ComplexFuncOne(int **ptr, int (*ptr2)[5]) => (int **ptr, int * (*ptr2)[5])
     ComplexFuncTwo(int (**ptr3)[5], int (**ptr4)[3][5]) => (int *** ptr3, int ***(*ptr4)[5])

//     example 18-1-4, 17-1-5 pass
}
```