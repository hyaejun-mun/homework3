#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [hyaejun-mun] [2019015035] -----]\n");
    int **x;                                    // 이중 포인터 x를 선언한다.
    printf("sizeof(x) = %lu\n", sizeof(x));     // x의 size를 출력한다. 이중 포인터이므로 8byte이다.
    printf("sizeof(*x) = %lu\n", sizeof(*x));   // *x의 size를 출력한다. 포인터이므로 8byte이다.
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // **x의 size를 출력한다. int형 변수이므로 4byte이다.
}