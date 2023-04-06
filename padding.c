#include <stdio.h>
struct student // 구조체 student를 생성한다.
{
    char lastName[13]; /* 13 bytes */ // char형, 크기 13인 배열
    int studentId; /* 4 bytes */      // int형 변수
    short grade; /* 2 bytes */        // short형 변수
};
int main()
{
    printf("[----- [hyaejun-mun] [2019015035] -----]\n");
    struct student pst;                                        // student 구조체 pst를 선언한다.
    printf("size of student = %ld\n", sizeof(struct student)); // student의 크기는 각각의 멤버들의 크기를 합한 값이다.
                                                               // 따라서 13+4+2 = 19byte이다.
                                                               // 하지만, 패딩을 통해 8의 배수 단위로 빈칸을 만들어내므로,
                                                               // 8*3인 24byte를 크기로 갖는다.
    printf("size of int = %ld\n", sizeof(int));                // int형 변수의 크기는 4byte이다.
    printf("size of short = %ld\n", sizeof(short));            // short형 변수의 크기는 2byte이다.
    return 0;
}