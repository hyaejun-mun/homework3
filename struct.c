#include <stdio.h>
struct student1 // student1 구조체를 만들었다.
{
    char lastName; // 마지막 이름, 학번, 점수를 저장한다.
    int studentId;
    char grade;
};
typedef struct     // student2 구조체를 만들었다.
{                  // 앞에 typedef를 붙여서 정의 선언 시 strut를 붙이지 않아도 된다.
    char lastName; // student1과 같이 이름, 학번, 점수를 저장한다.
    int studentId;
    char grade;
} student2;
int main()
{
    printf("[----- [hyaejun-mun] [2019015035] -----]\n");
    struct student1 st1 = {'A', 100, 'A'};       // st1을 선언했다.
    printf("st1.lastName = %c\n", st1.lastName); // 구조체는 .을 통해 내부 원소에 접근할 수 있다.
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);
    student2 st2 = {'B', 200, 'B'}; // student2는 만들 때 앞에 typedef를 붙였으므로
                                    // 선언 시 struct를 말하지 않아도 된다.
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);
    student2 st3; // 빈 구조체 st3을 선언했다.
    st3 = st2;    // 같은 구조체이므로, = 를 이용해 값들을 한 번에 옮길 수 없다.
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);
    /* equality test */               // 하지만, 같은지 확인할 때는 하나하나 체크해 주어야 한다.
    if (st3.lastName == st2.lastName) // 이름을 비교한다.
    {
        if (st3.studentId == st2.studentId) // 학번을 비교한다.
            if (st3.grade == st2.grade)     // 점수를 비교한다.
                printf("equal\n");          // 셋 모두 같아야 같다고 한다.
    }
    else
        printf("not equal\n"); // 그렇지 않으면 다르다고 해야 한다.
    return 0;
}