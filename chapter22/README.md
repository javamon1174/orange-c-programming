<meta charset="utf-8">

## 구조체와 사용자 정의 자료형 1

### 구조체란 하나 이상의 변수를 묶어서 새로운 자료형을 정의하는 도구이다.
```c
struct point
{
    int xpos;
    int ypos;
};
```

```c
int employeeStruct(void);
int employeeStructArr(void);

int main() {
    // example 22-1
    employeeStruct();

    // example 22-2
    employeeStructArr();
    return 0;
}
int employeeStructArr() { // example 22-2
    struct person {
        char name[20];
        char phoneNum[20];
        int age;
    };

    struct person p3[3] = {
            { "angel", "010-2222-2222", 13 },
            { "devil", "010-3333-3333", 14 },
            { "power", "010-4444-4444", 15 }
    };

    for (int i = 0; i < 3; ++i) {
        printf("%s %s %d\n", p3[i].name, p3[i].phoneNum, p3[i].age);
    }

    return 0;
}

int employeeStruct() { // example 22-1
    struct employee {
        char name[20];
        char pid[20];
        int salary;
    };

    struct employee e;
    printf("이름을 입력해주세요 : ");
    scanf("%s", e.name);

    printf("주민번호 입력해주세요 : ");
    scanf("%s", e.pid);

    printf("월 급여를 입력해주세요 : ");
    scanf("%d", &e.salary);

    printf("이름 : %s, 주민번호 : %s, 급여정보 : %d", e.name, e.pid, e.salary);

    return 0;
}
```