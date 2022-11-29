//Array through pointers

#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;
    for(int i = 0; i < 5; i++)
    {
        printf("Value = %d\n", a[i]);
        printf("Res= %d\n", p[i]);//Here we can use p[i] instead of a[i]
        printf("\n");
        //We have to use *(p+i) and not *p[i] to print the value
    }
}
