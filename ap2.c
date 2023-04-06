#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];   // int형이고, 크기가 5인 배열 list를 선언한다.
    int *plist[5]; // int 포인터형이고, 크기가 5인 배열 plist를 선언한다.
    list[0] = 10;  // list[0]에 10을, list[1]에 11을 저장한다.
    list[1] = 11;
    plist[0] = (int *)malloc(sizeof(int)); // plist[0]에 int형 변수를 동적으로 할당한다.
    printf("[----- [hyaejun-mun] [2019015035] -----]\n");
    printf("list[0] \t= %d\n", list[0]);   // list[0] = 10이므로, 10이 출력될 것이다.
    printf("list \t\t= %p\n", list);       // list는 배열의 주소를 의미하므로, 배열의 주소가 출력될 것이다.
    printf("&list[0] \t= %p\n", &list[0]); // list[0]의 주소는 배열의 주소 + 0과 같으므로, 위와 같은 값이 출력될 것이다.
    printf("list + 0 \t= %p\n", list + 0); // list + 0은 배열의 주소 + 0과 같으므로 위와 같은 값이 출력될 것이다.
    printf("list + 1 \t= %p\n", list + 1); // list + 1은 배열의 주소 + 4(int형의 크기 * 1)이와 같이 출력될 것이다.
    printf("list + 2 \t= %p\n", list + 2); // list + 2은 배열의 주소 + 8(int형의 크기 * 2)이와 같이 출력될 것이다.
    printf("list + 3 \t= %p\n", list + 3); // list + 3은 배열의 주소 + 12(int형의 크기 * 3)이와 같이 출력될 것이다.
    printf("list + 4 \t= %p\n", list + 4); // list + 4은 배열의 주소 + 16(int형의 크기 * 4)이와 같이 출력될 것이다.
    printf("&list[4] \t= %p\n", &list[4]); // list[4]의 주소는 list에서 (int형 기준으로)4칸 떨어진 곳이므로,
                                           // 배열의 주소 + 16이 출력되어 위와 같은 값이 출력될 것이다.
    free(plist[0]);                        // 동적할당한 plist[0]을 해제해 주어야 한다.
}