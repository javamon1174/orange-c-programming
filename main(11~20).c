#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <string.h>
/* chapter 11 -------------------------------------------------------------------------------------------
int main() {
    // example 11-1-1
    int total = 0, min, max;
    int arr[5];
    int len = sizeof(arr)/sizeof(int);

    for (int i = 0; i < len; ++i) {
        printf("배열에 추가할 정수를 입력해주세요 : ");
        scanf("%d", &arr[i]);

        if (i == 0) {
            min = arr[i];
            max = arr[i];
        }
        else if (i != 0 && min > arr[i]) {
            min = arr[i];
        }
        else if (i != len && max < arr[i]) {
            max = arr[i];
        }
        total += arr[i];

    }
    printf("총합 : %d, 최소값 : %d, 최대값 : %d",total, min, max);

    // example 11-1-2
    char arr[] = "Good time!";

    for (int i = 0; i < sizeof(arr)/sizeof(char)-1; ++i) {
        printf("%c", arr[i]);
    }

    // example 11-2
    char voca[50], ascii = 0;
    int len = 0;

    printf("하나의 영단어를 입력해주세요 : ");
    scanf("%s", voca);

    // example 11-2-1
    while (voca[len] != 0) {
        len++;
    }

    printf("입력된 단어의 길이는 %d 입니다.\n", len);

    // example 11-2-1
    for (int i = 0; i < len/2; ++i) {
        // 스와핑
        char temp = voca[i]; // 앞문자
        voca[i] = voca[(len-i)-1]; // 뒷문자 -1은 널값때문에
        voca[(len-i)-1] = temp;
    }
    printf("입력된 단어의 역순은 %s 입니다.\n", voca);

    // example 11-2-3
    for (int j = 0; j < len; ++j) {
         if (ascii < voca[j]) {
            ascii = voca[j];
        }
    }
    printf("아스키코드가 가장 큰 문자는 %c 입니다.", ascii);

    return 0;
}
*/

/* chapter 12 -------------------------------------------------------------------------------------------
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
*/

/* chapter 13 -------------------------------------------------------------------------------------------
int main() {
    // example 13-1
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];
    int *ptr2 = &arr[4];

    // example 13-1-1
    for (int i = 0; i < 5; ++i) {
        ptr[i] += 2;
        printf("%d\n", ptr[i]);
    }

    // example 13-1-2
    for (int i = 0; i < 5; ++i) {
        *(ptr+i) += 2; // (ptr+i) => 주소값을 반환하고, *의 연산으로 값을 가져와 +2를 대입
        printf("%d\n", *ptr+i);
    }

    // example 13-1-3
    int total = 0;
    for (int j = 5; j > 0; --j) {
        total += *ptr2--;
    }

    // example 13-1-4 recheck!
    int arr2[] = {1, 2, 3, 4, 5, 6};
    int *f = &arr2[0], *b = &arr2[5], *t = NULL;


    for (int i = 0; i < 3; ++i) {
        t = *f;
        *f = *b;
        *b = t;
        f++;
        b--;
    }

    for (int k = 0; k < 6; ++k) {
        printf("%d\n", arr2[k]);
    }

    return 0;
}
*/

/* chapter 14 -------------------------------------------------------------------------------------------
// example 14-1-1
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
*/

/* chapter 5 -------------------------------------------------------------------------------------------
// example 15-1
int Odd(int *arr, int len) {
    printf("홀수 : ");
    for (int i = 0; i < len; ++i) {
        if (arr[i] % 2 != 0) {
            if (i < len-2)
                printf("%d, ", arr[i]);
            else
                printf("%d", arr[i]);
        }
    }
    return 0;
}
int Even(int *arr, int len) {
    printf("\n짝수 : ");
    for (int i = 0; i < len; ++i) {
        if (arr[i] % 2 == 0) {
            if (i < len-2)
                printf("%d, ", arr[i]);
            else
                printf("%d", arr[i]);
        }
    }
    return 0;
}

// example 15-2
int Ten2Two(int num) {
    int arr[20];
    int i = 0;


    while (num != 0) {
        arr[i] = num%2; // 나머지를 배열에 저장
        num = num/2;
        i++;
    }

    // 역순 출력
    for (int j = i-1; j >= 0; --j) {
        printf("%d", arr[j]);
    }

    return 0;
}

// example 15-3
int OutOddAndEvenInArr() {
    int captain[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int captain[10] = {1, 1, 4, 4, 4, 4, 3, 3, 2, 2};
    int len = (sizeof(captain)/sizeof(int));

    int m = 0, k = len-1;
    int marvel[len];

    for (int i = 0; i < len; ++i) {
        if (captain[i] % 2 != 0) { // odd
            marvel[m] = captain[i];
            m++;
        }
        else { // even
            marvel[k] = captain[i];
            k--;
        }
    }

    for (int j = 0; j < len; ++j) {
        printf("%d ", marvel[j]);
    }

    return 0;
}

int main() {
    // example 15-1
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    Odd(&arr, (sizeof(arr)/sizeof(int)));
    Even(&arr, (sizeof(arr)/sizeof(int)));

    // example 15-2
    int num = 42;
    printf("입력된 값 : %d, 2진수 변환값 : ", num);
    Ten2Two(num);

    // example 15-3
    OutOddAndEvenInArr();

    // example 15-4
    char *str;
    int len = 0, chk = 1;

    scanf("%s", str);

    len = strlen(str); // 문자열 길이 반환 함수

    for (int i = 0; i < (len/2); ++i) {
        if (str[i] != str[len-(i+1)]) {
            chk = 0;
        }
    }

    chk == 1 ? printf("회문 입니다.") : printf("회문이 아닙니다.");

    // example 15-4 pass
    return 0;
}
*/
/* chapter 16 -------------------------------------------------------------------------------------------
int main() {
    // example 16-1-1
    int arr[3][9];
    int len = sizeof(arr)/ sizeof(int);
    int gob = 2;

    for (int i = 0; i < 3; ++i) { // 구구단 입력
        int l = sizeof(arr[i])/ sizeof(int);

        for (int j = 1; j <= l; ++j) {
            arr[i][j-1] = gob*j;
        }
        gob++;
    }

    for (int i = 0; i < 3; ++i) { // 구구단 출력
        int l = sizeof(arr[i])/ sizeof(int);

        for (int j = 1; j <= l; ++j) {
            printf("%d ", arr[i][j-1]);
        }
        gob++;
        printf("\n");
    }

    // example 16-1-2
    int arr1[][4] = {1,2,3,4,5,6,7,8};
    int arr2[4][2];

    // arr2 초기화
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr2[j][i] = arr1[i][j];
        }
    }

    // arr2 출력
    for (int k = 0; k < 4; ++k) {
        for (int i = 0; i < 2; ++i) {
            printf("%d ", arr2[k][i]);
        }
        printf("\n");
    }

    // example 16-1-2
    int sarr[5][5] = { // 입력값 미리 초기화
            {5, 4, 6, 5},
            {3, 6, 9, 3},
            {4, 8, 2, 7},
            {3, 8, 9, 7},
    };

    // 학생별, 과목별 총점 입력
    for (int i = 0; i < 5; ++i) {
        int s_sum = 0;
        int c_sum = 0;

        for (int j = 0; j < 5; ++j) {
            s_sum += sarr[i][j];
            c_sum += sarr[j][i];

            if (j == 4)
                sarr[i][j] = s_sum;
        }
        sarr[4][i] = c_sum;
    }

    // 학생 성적 출력
    for (int k = 0; k < 5; ++k) {
        for (int i = 0; i < 5; ++i) {
            printf("%d    ", sarr[k][i]);
        }
        printf("\n");
    }

    return 0;
}
*/
/* chapter 17 -------------------------------------------------------------------------------------------
int MaxAndMin(int arr[], int count, int **maxDptr, int **minDptr) { // example 17-1
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
    // example 17-1
    int * maxPtr;
    int * minPtr;
    int arr[5];

    maxPtr = minPtr = &arr[0];

    MaxAndMin(arr, (sizeof(arr) / sizeof(int)), &maxPtr, &minPtr);
    printf("max : %d, min : %d", maxPtr, minPtr);
}
*/
/* chapter 18 -------------------------------------------------------------------------------------------

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
*/


/* chapter 20 -------------------------------------------------------------------------------------------
*/
int rotateArr(arr[4][4]);
int printArr(arr[4][4]);

int dalPang(void);

int getRandEXNum(void);
int getDiceNumber(void);

int stoneGame(void);
int baseBallGame(void);

int main() {
    // example 20-1 배열 회전
    int static arr[4][4] =
            {
                {1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 10, 11 , 12},
                {13, 14, 15, 16}
            };

    printArr(arr); // init print

    rotateArr(arr); // turn right 90
    printArr(arr);  // init print

    rotateArr(arr); // turn right 180
    printArr(arr);  // init print

    rotateArr(arr); // turn right 270
    printArr(arr);  // init print

    // example 20-2 달팽이 배열
//    dalPang();

    // example 20-3 난수
//    getRandNum();

    // example 20-4-1 난수 응용
//    getRandEXNum();

    // example 20-4-2 주사위
//    getDiceNumber();

    // example 20-5 가위바위보 게임
//    stoneGame();

    // example 20-6 야구 게임
//    baseBallGame(); // 재밌당ㅋㅋ

    return 0;
}

int dalPang() {
    int len = NULL;

    printf("달팽이 배열의 길이를 입력해주세요 : ");
    scanf("%d", &len);

    int arr[len][len];
    int input = len, sw = 1, row = 0, col = -1, val=0;


    while (1) {
        for (int i = 0; i < input; ++i) {
            val++;
            col = col+sw;
//            printf("row:%d, col:%d\n", row, col);
            arr[row][col] = val;
        }
        input--;

        if (val == len*len) {
            break;
        }

        for (int j = 0; j < input; ++j) {
            val++;
            row = row+sw;
//            printf("row:%d, col:%d\n", row, col);
            arr[row][col] = val;
        }

        sw = sw*(-1);
    }

    for (int k = 0; k < len; ++k) {
        for (int i = 0; i < len; ++i) {
            printf(" %2d ", arr[k][i]);
        }
        printf("\n");
    }
}


int baseBallGame() { // example 20-6 base ball
    srand((int) time(NULL));

    int you[3], com[3] = { (rand()%9)+1, (rand()%9)+1, (rand()%9)+1 };

    printf("Start Game!\n");

    while (1) {
        int strike = 0, ball = 0;

        printf("세개의 수를 입력해주세요 : ");
        scanf("%d %d %d", &you[0], &you[1], &you[2]);

        for (int i = 0; i < 3; ++i) {
            if (com[i] == you[i]) {
                strike++;
            }
            else {
                for (int j = 0; j < 3; ++j) {
//                    printf("com : %d, you :  %d\n", com[i], you[j]);
                    if (com[i] == you[j]) {
                        ball++;
                    }
                }
            }
        }
        printf("%d strike, %dball!!\n", strike, ball);

        if (strike == 3) {
            printf("Game Over!\n");
            break;
        }
    }
    return 0;
}

int stoneGame() {
    int com, you, res, wins = 0, lose =0, same = 0;

    for (int i = 0; i < 7; ++i) { // example 20-5 가위바위보 게임
        srand((int) time(NULL));

        printf("바위는 1, 가위는 2, 보는 3 : ");
        scanf("%d", &you);
        com = (rand()%2)+1;
        res = (int) (you - com);

        if (res == 0) {
            printf("당신은 %d, 컴퓨터는 %d 이므로 비겼습니다!\n", you, com);
            same++;
        }
        else if (res == -1 || res == 2) {
            printf("당신은 %d, 컴퓨터는 %d 이므로 당신이 이겼습니다!!\n", you, com);
            wins++;
        }
        else {
            printf("당신은 %d, 컴퓨터는 %d 이므로 당신이 졌습니다!!\n", you, com);
            lose++;
        }
    }
    printf("당신의 경기 결과는 %d무, %d승, %d패 입니다.\n", same, wins, lose);

    return 0;
}

int getRandEXNum() { // example 20-4 난수씨앗
    int lenth = 0;
    srand((int) time(NULL));
    while (lenth < 5) {
        printf("%d\n", rand()%100);
        lenth++;
    }
    return 0;
}

int getDiceNumber() { // example 20-5 주사위
    int lenth = 0;
    srand((int) time(NULL));
    while (lenth < 2) {
        printf("주사위 %d의 결과 : %d\n",lenth, rand()%6+1);
        lenth++;
    }
    return 0;
}

int rotateArr(int arr[4][4]) { // example 20-1
    int i, j;
    int t_arr[4][4];

    // 배열 90도 로테이트
    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 4; ++j) {
            t_arr[i][j] = arr[3-j][i];
        }
    }
    // static 배열에 로테이트 배열 대입
    for (int k = 0; k < 4; ++k) {
        for (int l = 0; l < 4; ++l) {
            arr[k][l] = t_arr[k][l];
        }
    }
    return 0;
}

int printArr(int arr[4][4]) { // example 20-1
    for (int k = 0; k < 4; ++k) {
        for (int l = 0; l < 4; ++l) {
            printf(" %2d ", arr[k][l]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

/* chapter 0 -------------------------------------------------------------------------------------------
int main() {
}
*/