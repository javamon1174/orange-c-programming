<meta charset="utf-8">

## 파일 분할과 헤더디자인

### 헤더 파일을 포함하는 지시자 : include
     - 상대 경로를 활용하는 것을 권장.

### 헤더파일
    - 변수, 함수를 포함 할 수 있다.
    - 구현은 헤더와 같은 파일명 구현체에 함수 등을 구현한다.
    - 매크로나 구조체도 포함할 수 있다.
    - 구조체의 경우 중복될 수 없다.
    - 헤더파일의 중복삽입이 될 경우 컴파일 에러가 난다. 이를 대비해 ifndef 지시자를 활용한다.
    ```c
    // ifndef 예제
    #ifndef __STDIV_H_
    #define __STDIV_H_

    typedef struct div
    {
        int a;
        int b;
    } DIV;

    #endif
    ```

