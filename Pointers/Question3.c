//Swap two no.s using swapp()function

#include <stdio.h>
void swapp(int *, int *);
int main()
{
    int a = 5;
    int b = 7;
    swapp(&a, &b);//As it referring to a pointer so remember to put '&'
    printf("a = %d and b = %d", a, b);
    return 0;
}

void swapp(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    return;
}
