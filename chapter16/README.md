<meta charset="utf-8">

## 다차원 배열

### 2차원 배열 선언 : int arr[2][2];
    1. 행과 열로 구성
    2. 메모리상 저장되는 구조는 주소값은 1차원적 구조다.

### 3차원 배열은 2차원 배열이 여러개인 것이다.

### 일반적으로 다차원 배열은 2차원 배열을 의미한다.

```c
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
```