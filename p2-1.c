#include <stdio.h>
#define MAX_SIZE 100           // MAX_SIZE를 정의한다.
float sum1(float list[], int); // 함수 sum1, sum2, sum3을 선언한다.
float sum2(float *list, int);
float sum3(int n, float *list);
float input[MAX_SIZE], answer; // 전역 변수 input, answer을 정의한다.
int i;                         // for문 반복 시에 사용할 변수 i를 정의한다. 이들은 data 영역에 저장된다.
void main(void)
{
    for (i = 0; i < MAX_SIZE; i++) // input 배열에 1~100까지 순서대로 입력한다.
        input[i] = i;
    /* for checking call by reference */
    printf("[----- [hyaejun-mun] [2019015035] -----]\n");
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input의 주소를 출력한다.

    answer = sum1(input, MAX_SIZE);       // sum1로 계산한다.
    printf("The sum is: %f\n\n", answer); // 1~100까지 더한 값인 4950이 출력된다.

    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);

    answer = sum2(input, MAX_SIZE);       // sum2로 계산한다.
    printf("The sum is: %f\n\n", answer); // 마찬가지로, 4950이 출력된다.

    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);

    answer = sum3(MAX_SIZE, input);       // sum3으로 계산한다.
    printf("The sum is: %f\n\n", answer); // 마찬가지로, 4950이 출력된다.
}

float sum1(float list[], int n) // 배열을 매개 변수로 받았다.
{
    printf("list\t= %p\n", list);     // list는 전역 변수에 있는 list를 의미하므로, 위의 list 주소를 출력할 것이다.
    printf("&list\t= %p\n\n", &list); // &list는 매개 변수로 받아온 list 배열의 주소를 가리키는 포인터를 의미하므로, 다른 주소를 출력할 것이다.

    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++) // tempsum에 모든 수를 더한다.
        tempsum += list[i]; // 배열을 매개 변수로 받았으므로, 배열을 이용한 연산(list[i]) 등이 가능하다.
    return tempsum;
}
float sum2(float *list, int n) // 포인터를 매개 변수로 받았다.
{
    printf("list\t= %p\n", list);     // list는 전역 변수에 있는 list를 의미하므로, 위의 list 주소를 출력할 것이다.
    printf("&list\t= %p\n\n", &list); // &list는 인자로 받아온 포인터의 주소를 가리키는 포인터를 의미하므로, 다른 주소를 출력할 것이다.
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)     // tempsum에 모든 수를 더한다.
        tempsum += *(list + i); // 포인터를 매개 변수로 받았으므로, 배열을 이용한 연산(list[i]) 등이 불가능하다.
    return tempsum;
}
/* stack variable reuse test */
float sum3(int n, float *list) // sum2와 매개 변수 순서가 다르다.
{
    printf("list\t= %p\n", list);     // list는 전역 변수에 있는 list를 의미하므로, 위의 list 주소를 출력할 것이다.
    printf("&list\t= %p\n\n", &list); // &list는 인자로 받아온 포인터의 주소를 가리키는 포인터를 의미하므로, 다른 주소를 출력할 것이다.
                                      // 그런데, 매개 변수 순서가 다르므로, n과 *list의 정의 순서가 달라져 sum2와 다른 주소를 출력할 것이다.
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)     // tempsum에 모든 수를 더한다.
        tempsum += *(list + i); // 포인터를 매개 변수로 받았으므로, 배열을 이용한 연산(list[i]) 등이 불가능하다.
    return tempsum;
}