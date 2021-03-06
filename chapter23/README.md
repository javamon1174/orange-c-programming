<meta charset="utf-8">

## 구조체와 사용자 정의 자료형 2

### typedef 선언은 기존에 존재하는 자료형의 이름에 새 이름을 부여하는 것을 목적으로 하는 선언이다.
```c
typedef int INT;
INT num = 0; => int num = 0; // 같은 선언이다.
INT * ptr; => int * ptr;
```

### 구조체 별칭을 사용하게 되면 기존 구조체 변수명은 생략이 가능하다!

### 구조체를 정의하는 이유
    구조체를 통해서 연관 있는 데이터를 하나로 묶을 수 있는 자료형을 정의하면, 데이터의 표현 및 관리가
    용이해지고, 그만큼 합리적인 코드를 작성할 수 있게 된다.

> 구조체는 마치 OOP에서 행위 없는 객체 같다? 고로 OOP는 구조체 개념에서 파생된 개념이 아닐까?

### 공용체의 유용함은 다양한 접근방식을 제공하는 것이다.

### 열거형(Enumerated)의 정의와 의미
    - 예약어는 enum 이며, 구성은 구조체와 같다.
    - 저장이 가능한 값 자체를 정수의 형태로 저장.
```c
enum syllable {
    Do = 1, RE = 2, Mi = 3
};
```

### 열거형의 유용함은 의미있는 상수의 정의를 통한 의미 부여에 있다.

## 예제 코드
```c
typedef struct
{
    char name[20];
    char phone[20];
    int age;
} Person;
```