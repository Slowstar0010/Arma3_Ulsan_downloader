#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
    {
        /*int age = 12;
        printf("%d\n", age);
        age = 13;
        printf("%d₩n", age);*/

        /*float f = 46.5f;
        printf("%f\n",f);
        double d = 4.428;
        printf("%.2lf\n", d);*/
        
        /*const int YEAR = 2000;
        pirntf("태어난연도 : %d\n", YEAR);
        return 0;*/

        /*printf
        int add = 3 + 7; add = 10
        printf ("3 + 7 = %d\n", add);
        printf ("%d + %d = %d\n", 3, 7, 3 + 7 );
        return 0;*/

        /*scanf*/
        /*int input;
        printf("값을 입력하세요 :");
        scanf("%d", &input);
        printf("입력값은 %d", input);*/
        int one, two, three;
        printf("3개의 정수를 입력하세요 :");
        scanf("%d %d %d", &one, &two, &three);
        printf("첫번째 값은 : %d\n", one);
        printf("두번째 값은 : %d\n", two);
        printf("세번째 값은 : %d\n", three);
        return 0;
    }