#include <stdio.h>

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