/*WAP to create a dynamic 2D array ( matrix ) using array of pointers with the help of calloc( ) memory function.
Check whether given matrix is symmetric or non-symmetric.*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *a[4], i, j, b[4][3], flag = 1;
    for(i = 0; i < 4; i++)0
    {
        a[i] = (int *) calloc(3, sizeof(int));

    }
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    //Checking if the matrix is symmetric or not
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] != b[i][j])
            {
              flag ++;
              break;
            }
        }
    }
    if(flag == 1)
    {
        printf("The matrix is symmetric");
    }
    else
    {
        printf("The matrix is not symmetric");
    }

}
