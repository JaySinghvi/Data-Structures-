//Passing functions through pointers in arrays
#include <stdio.h>
void myfun(int *a1, int m, int n);//==> function for 2D arrays
//void myfun (int a1[], int n) ==> function for 1D array
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
        //myfun(a, 5); //passing functions in 1D
    }

    //2D arrays
    int b[3][2] = {10, 20, 30, 40, 50, 60};
    int *p1 = b;
    myfun(b, 3, 2);//passing functions in 2D
    int j;
    for(i = 0; i < 3; i++)
    {
       printf("\n%p\t %p",b[i], (p1+i*2));//from theory we use the formula (a+i*column size* no. of bits of that type)to find address of rows through pointers
    }

}

void myfun(int *a1, int m, int n)
//void myfun (int a1[], int n) ==> function for 1D array
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("\n%p", *a1[i][j]);
        }
    }

}
