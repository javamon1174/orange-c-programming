<meta charset="utf-8">

## 도전! 프로그래밍 세번째

## 해당 챕터는 생각보다 시간소요도 있었고, 코드와 가이드를 포함합니다.

### 크기에 상관없는 이차원 배열을 받아 90도 회전하는 문제 => 편의상 행 4, 열 4로 풀이
    - 풀이과정 및 가이드
        1. 처음엔 주소값을 이용해서 해결하려 했다.
        2. 90도 회전에 따른 배열 주소값의 규칙이 존재하였다 ex) 1회전 : +12, 2회전 : +42, 3회전 : -12, 4회전 : +48
        3. 하지만 해당 규칙으로 구현하기에 C언어에 대한 이해도가 낮았기 때문에 실패하였다.(전체 행열을 만족하지 않았던?)
        4. 두번째로 방법으로는 임시 배열을 선언하고, 기존 배열을 순회하면서 조건을 통해 규칙에 맞는 데이터 값을 임시 배열에 입력하고
        5. 임시배열의 값을 기존의 static으로 선언한 배열에 다시 값을 대입하였다.
        6. t_arr[row][col] = arr[len-col][row] => 위치(길이)가 같은 열에 행의 값을 역순으로 대입.
```c
int rotateArr(arr[4][4]);
int printArr(arr[4][4]);

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
```

### 달팽이 배열 - 해당 챕터에서 가장 시간 소요가 길었던 문제
    - 풀이과정 및 가이드
        1. 규칙을 찾는데 생각보다 많다고 여겨지는 1시간 정도 소요했다.
        2. 규칙을 찾게되면 반복문은 무조건 두번 필요한데, 그 이유는 행 고정 열 변화의 반복문, 열 고정 행 변화의 반복문 두개가 존재해야 되기 떄문.
        3. 가장 많이 고민한 것은 횟수인데, for문이 실행되는 횟수는 (n*2)-1 횟수이다.
        4. 이를 만족하기 위해서 두개의 for 중간에 while문을 빠져나오는 break 문이 존재한다.
        5. 변수들의 초기값은 애초부터 정해서 풀려고 하지말고 직접 구현하면서 필요한 초기값을 대입하는 것이 꿀팁.
        6. swich 변수를 통해 배열의 위치를 정하는 것이 포인트!
'''c
int dalPang(void);

int main() {
    // example 20-2 달팽이 배열
    dalPang();
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
'''

### 그외 문제는 10분 내외면 충분이 쉽게 풀리는 문제들이라 코드만 포함합니다.
=> 야구게임은 구현하고 해보면 응근 꿀잼이라는 사실은 안비밀
'''c
int getRandEXNum(void);
int getDiceNumber(void);

int stoneGame(void);
int baseBallGame(void);

int main() {
    // example 20-3 난수
//    getRandNum();

    // example 20-4-1 난수 응용
//    getRandEXNum();

    // example 20-4-2 주사위
//    getDiceNumber();

    // example 20-5 가위바위보 게임
//    stoneGame();

    // example 20-6 야구 게임
//    baseBallGame(); // 꿀잼
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
'''