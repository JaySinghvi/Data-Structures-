//1D, 2D arrays and pointers
#include <stdio.h>

int main()
{
    //1D arrays
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("\n%d\t %d\t %d\t %d\t %p\t %p",a[i], *(a+i), p[i], *(p+i), (a+i), (p+i));//prints the values. a[i] = *(a+i) = p[i] = *(p+i)
        //(a+i) = (p+i) ==> gives address of values
    }

    //2D arrays
    int b[3][2] = {10, 20, 30, 40, 50, 60};
    int *p1 = b;
    int j;
    for(int i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
           printf("\nentire address = %p", *((p1+i*2)+j));
        }

    }

}
