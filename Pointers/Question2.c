//Adding two no.s using pointers and storing result in another pointer
#include <stdio.h>

int main()
{
    int a = 5;
    int b = 10;
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = *p1 + *p2;

    printf("res = %d\n", a+b);
    printf("res through pointers = %d", p3);


}
