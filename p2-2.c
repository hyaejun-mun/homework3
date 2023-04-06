#include <stdio.h>
void print_one(int *ptr, int rows); // print_one 함수를 정의한다.
int main()
{
    int one[] = {0, 1, 2, 3, 4}; // one 배열을 선언한다. 0,1,2,3,4가 저장되어 있다. 따라서 전체 원소는 5개이다.
    printf("[----- [hyaejun-mun] [2019015035] -----]\n");
    printf("one = %p\n", one);         // one의 포인터를 출력할 것이다.
    printf("&one = %p\n", &one);       // 마찬가지로, one의 포인터를 출력할 것이다.
    printf("&one[0] = %p\n", &one[0]); // one의 포인터는 one[0]의 주소와 같으므로 같은 값을 출력할 것이다.
    printf("\n");
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); // print_one 함수를 실행한다. one[0]의 주소를 인자로 넣었다.
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); // print_one 함수를 실행한다. one의 주소를 인자로 넣었다.
    return 0;
}
void print_one(int *ptr, int rows)
{ /* print out a one-dimensional array using a pointer */
    int i;
    printf("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // i번째 원소의 주소와, i번째 값을 매개변수 rows까지 출력한다.
                                                    // 포인터 형식으로 만들었다.
    printf("\n");
}