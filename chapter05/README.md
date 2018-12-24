<meta charset="utf-8">

## 상수와 기본 자료형

### 자료형은 데이터를 표현하는 방법입니다.
    1. 변수는 데이터의 저장을 위해 할당된 메모리 공간에 붙여진 이름
    2. 메모리 공간을 할당할시에 그 용도를 결정해야 된다.
    3. 자료형(타입)에 따라서 정수는 char 1byte, short 2byte, int 4byte, long 4byte, long long 8byte로 표현된다.
    4. 자료형에 따라서 실수는 float 4byte, double 8byte, long double 8byte이상으로 표현된다.
    5. C의 표준은 ANSI에서 정하는 자료형의 크기를 표준으로 한다.

###  CPU가 처리하기에 가장 적합한 크기는 정수 자료형을 int로 정의, int형의 연산 속도가 다른 자료형의 연산속도에 비해 빠르거나 동일하다.

### 상수에 대한 이해
    1. 리터럴 상수는 변경이 불가능한 데이터를 뜻한다. ex) 30, 40
    2. const 상수는 이름을 지니는 심볼릭(Symbolic) 상수이며 선언 시 반드시 초기화를 해야한다. ex) const int MAX=100

### 형 변환(Casting)
    1. 자동 형 변환 ex) int num=3.1415 => 3
    2. 넓은 자료형에서 좁은 자료형으로의 형 변환은 데이터의 손실이 발생할 수 있다. ex)double => int
    3. 강제 형 변환 ex) double result =(double) 3/5
    4. 명시적으로 형 변환을 코드로 작성해주는 것이 가독성을 높여준다.
```c
 int main() {
    // example 05-1
    int left_top_x, left_top_y, right_bottom_x, right_bottom_y, size;

    printf("좌상단 좌표 입력 x, y: ");
    scanf("%d %d", &left_top_x, &left_top_y);

    printf("우하단 좌표 입력 x, y: ");
    scanf("%d %d", &right_bottom_x, &right_bottom_y);

    // 넓이 공식
    size = (right_bottom_x-left_top_x)*(right_bottom_y-left_top_y);

    printf("example1 : 직사각형의 넓이는 %d입니다.\n", size);

    // example 05-2
    double double1, double2, add, sub;

    printf("두개의 실수 입력 : ");
    scanf("%lf %lf", &double1, &double2);

    add = double1+double2;
    sub = double1-double2;

    printf("example2 : 더하기 %f입니다.\n", add);
    printf("example2 : 빼기 %f입니다.\n", sub);

    /*
     * example 05-3
     *
     * question 1 => 0~127
     * question 2 => 65, 1씩
     * question 3 => 32
     *
     */

    // example 05-4
    int num;
    printf("아스키 문자로 변환 정수 입력 : ");
    scanf("%d", &num);
    printf("example2 : 해당 아스키 코드(ASCII)는 %c입니다.\n", num);
}
```