#include <stdio.h>

int main()
{
    int a[3][2];
    int *p = a;
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", (p+i*2+j));
        }
        //In 2D array you can't replace a with p like in 1D as in 1D a[i] points to a[0] but in 2D it points to entire 0th row
        //We have to use the formula to access 2D array through pointer
        //p+i*2 gives the reference row and jumps address of rows
        //No '&' because this expression itself gives the address
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("\t%d", *(p+i*2+j));//we use '*' to fetch the value
        }
        printf("\n");

    }

}
