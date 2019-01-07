<meta charset="utf-8">

## 도전 프로그래밍! 네번째 - 6~7번 문제까지

### 6번 문제 코드
```c
void clearBuffer(void) {
    while(getchar() != '\n');
}
int challengeSix(void);
typedef struct User {    // 구조체 정의
    char name[20];        // 구조체 멤버 1
    char phone_number[50];    // 구조체 멤버 3
} USERINFO;

int main() {
    // challenge 28-6 전화번호 관리 프로그램
    challengeSix();

    // challenge 28-7 pass => 구조체 포인터 배열을 파일에서 읽고 쓰기는 지난 문제에 있음.
    return 0;
}
int challengeSix(void) {
    static int size = 5, index = 0; // 배열 사이즈, 현재 행 번호
    char search_name[20]; // 검색 문자열
    static USERINFO *user_arr = NULL; // 구조체 배열 선언
    user_arr = (USERINFO *)malloc(sizeof(USERINFO) * size); // 구조체 배열 힙 메모리 할당

    puts("전화번호 관리 프로그램이 실행되었습니다.");
    while (1) {
        int menu_num; // 입력 번호
        puts("\n****** MENU ******");
        puts("1. Insert");
        puts("2. Delete");
        puts("3. Search");
        puts("4. Print All");
        puts("5. Exit");

        printf("Choose the item : ");
        scanf("%d", &menu_num);
        clearBuffer(); // 입력 버퍼 초기화

        switch (menu_num) {
            case 1 :
                puts("[ INSERT ]");

                if (index == size) { // 배열 길이 확장
                    size += 5;
                    user_arr = realloc(user_arr, sizeof(USERINFO) * (size));
                }

                printf("Input Name : ");
                scanf("%s", &user_arr[index].name);
                printf("Input Phone Number : ");
                scanf("%s", &user_arr[index].phone_number);

                clearBuffer();
                index++;
                break;
            case 2 :
                puts("[ DELETE ]");
                printf("Delte Name : ");
                scanf("%s", &search_name);

                for(int i=0; i < index; i++) {
                    if(!strcmp(user_arr[i].name, search_name)) {
                        for(int j=i+1; j < index; j++) {
                            strcpy(user_arr[j-1].name, user_arr[j].name);
                            strcpy(user_arr[j-1].phone_number, user_arr[j].phone_number);
                        }
                        (index)--;
                        break;
                    }
                }
                clearBuffer();
                break;
            case 3 :
                puts("[ SEARCH ]");
                printf("Search Name : ");
                scanf("%s", &search_name);

                for (int i = 0; i < index; i++) {
                    if (!strcmp(user_arr[i].name, search_name)) {
                        printf("이름 : %s, 전화번호 : %s\n", user_arr[i].name, user_arr[i].phone_number);
                    }
                }
                clearBuffer();

                break;
            case 4:
                puts("[ Print All Data ]");
                for (int i = 0; i < index; i++) {
                    printf("이름 : %s, 전화번호 : %s\n",user_arr[i].name, user_arr[i].phone_number);
                }
                break;
            case 5 :
                puts("전화번호 관리 프로그램을 종료합니다.");
                free(user_arr); // 구조체 포인터 배열 메모리 해제
                return 0;
        }
    }
}
```

### 7번 문제는 이전 문제와 중복되기에 패스.



