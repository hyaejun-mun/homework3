#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; // int형이고, 크기가 5인 배열 list를 선언한다.
    int *plist[5] = {
        // int 포인터형이고, 크기가 5이고, NULL로 초기화된 배열 plist를 선언한다.
        NULL,
    };
    plist[0] = (int *)malloc(sizeof(int)); // int형으로 동적할당 해준다. plist[0]은 동적할당된 heap 구역을 가리키게 된다.
    list[0] = 1;                           // list[0]은 1,
    list[1] = 100;                         // list[1]은 100,
    *plist[0] = 200;                       // 동적할당한 plist[0]이 가리키는 곳에 200을 저장한다.
    printf("[----- [Munhyaejun] [2019015035] -----]\n");
    printf("list[0] = %d\n", list[0]);   // list[0]에 1이 저장되어 있으므로 1이 출력될 것이다.
    printf("&list[0] = %p\n", &list[0]); // list[0]의 주소값을 출력할 것이다.
    printf("list = %p\n", list);         // (list) == (list[0]의 주소)이므로, 앞의 값과 같은 값이 출력될 것이다.
    printf("&list = %p\n", &list);       // list는 배열 list의 주소값을 의미하므로, &list와 같은 값이 된다. 따라서 앞의 값과 같은 값이 출력될 것이다.
    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]);       // list[1]에 100이 저장되어 있으므로 100이 출력될 것이다.
    printf("&list[1] = %p\n", &list[1]);     // list[1]의 주소값을 출력할 것이다. 배열이므로, list[0]의 값에서 4(int형의 크기)만큼 차이가 난다.
    printf("*(list+1) = %d\n", *(list + 1)); // (list + 1) == (list[1]의 주소) *(list + 1) 은 list[1]을 출력할 것이다. 따라서 앞의 값과 같은 값이 출력될 것이다.
    printf("list+1 = %p\n", list + 1);       // 위에서 말한 것과 같이, list[1]의 주소값이 출력될 것이다.
    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]); // 200을 저장했으므로 200이 출력될 것이다.
    printf("&plist[0] = %p\n", &plist[0]); // plist[0]의 주소값을 출력할 것이다.
    printf("&plist = %p\n", &plist);       // &plist는 plist 배열의 주소값을 의미하고, 그것은 plist[0]의 주소와 같으므로 위의 값과 같은 값을 출력할 것이다..
    printf("plist = %p\n", plist);         // plist는 plist 배열의 주소를 의미하므로, 위의 값과 같은 값을 출력할 것이다.
    printf("plist[0] = %p\n", plist[0]);   // plist[0]은 포인터이고, 동적할당하였으므로 포인터 값이 나온다.
    printf("plist[1] = %p\n", plist[1]);   // plist[1] ~ plist[4]는 처음에 NULL로 초기화하였으므로, 0이 나올 것이다.
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);
    free(plist[0]); // 동적할당 해주었으므로, free로 풀어 주어야 한다.
}