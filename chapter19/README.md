<meta charset="utf-8">

## 함수 포인터와 void 포인터

### 함수 포인터 변수는 메모리상에 함수의 주소값을 저장하는 변수이다.
    1. 함수의 이름은 상수이다.
    2. 함수의 주소값을 저장하기 위한 포인터 변수를 선언할 수 있다.

    ex) int SimpleFunc(int num) {}
    => 함수 포인터의 형은 반환형과 매개변수의 선언 형태에 따라 구분된다.
    => 반환형이 int이고, 매개변수로 int 변수가 하나 선언된 포인터 형(type)이다.

### void형 포인터
    1. 변수, 함수 모두 담을 수 있는 빈 그릇의 역할을 할 수 없다.
    2. 값의 변경이나 참조는 불가능하다.
    3. 주소 값에만 의미를 두고, 포인터 형은 나중에 결정 할때에 사용된다 => 동적 메모리 할당