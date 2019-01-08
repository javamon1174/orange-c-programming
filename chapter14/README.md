<meta charset="utf-8">

## 포인터와 함수

### 인자전달의 기본방식은 값의 복사이다. SimpleFunc(int num){ }

### 배열을 함수의 인자로 전달하게 되면, 그 값이 아니라 배열의 첫번째 주소값을 전달하여 접근하도록 한다.

### 함수 호출 : 값 전달 - call-by-value, 주소 전달 - call-by-reference

### 포인터 변수가 참조하는 대상의 변경을 허용하지 않는 const 선언 ex) const int * ptr=&num;
    1. *ptr = 30; => error!
    2. num = 30; => success!
    3. 포인터 const 선언은 값을 변경하는데에 제한을 두는 방법이다.

### const int * const ptr=&num 으로 선언하면 주소와 값 모두 변경이 불가하다.

### call by reference 나무위키 : [link](https://namu.wiki/w/%EC%B0%B8%EC%A1%B0%EC%97%90%20%EC%9D%98%ED%95%9C%20%ED%98%B8%EC%B6%9C)
### call by reference 데니스 리치의 코멘트
    - [link](https://blog.naver.com/han95173/220934411280)
    - C언어 에서는 call by reference를 흉내낼 뿐.

```c
int SquareByValue(int num){ // call by value
    return num*num;
}

int SquareByReference(int * num2){ // call by reference
    int temp = *num2;
    temp = temp*temp;
    *num2 = temp;

    return 0;
}

// example 14-1-2
int Swap3(int * n1, int * n2, int * n3) {
    int temp = *n1;
    *n1 = *n3;
    *n3 = *n2;
    *n2 = temp;

    return 0;
}

int main() {
    // example 14-1-1
    int num = 2, num2 =3;

    num = SquareByValue(num);
    SquareByReference(&num2);
    printf("SquareByValue : %d\nSquareByReference : %d", num, num2);


    // example 14-1-2
    int n = 1, n2 = 2, n3 = 3;
    Swap3(&n, &n2, &n3);
    printf("n1=%d, n2=%d, n3=%d", n, n2, n3);
    return 0;

    // example 14-2-1
    // 함수에 전달받은 arr의 내부의 값을 변경하지 못하게 하여, 데이터의 무결성을 지키기위해 => 안전성을 높임

    // example 14-2-2
    // num=10의 주소를 인자로 받아 그 값을 변경하지 못하게 상수 선언을 하였음에도 불구하고 rptr 변수를 선언하여, 그 값을 변경하려고 함.
}
```