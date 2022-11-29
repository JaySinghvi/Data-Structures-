//Not using but just for reference to understand the malloc and calloc
#include <stdio.h>
#include <stdlib.h>

void input(int ** a, int m, int n)//'**' is called pointer to pointer
{
    for(int i = 0; i < m; i++)
    {
        for(int j =0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            //this form is only possible for double pointer in 2D and not single pointer because it point to address of address of p which becomes [0][0]
        }
    }
}

int main()
{
    int m = 3;
    int n = 2;

    int *arr = (int**)malloc(m * sizeof(int *));//array of pointer size m

    for(int i = 0; i < m; i++)
    {
        arr[i] = (int*)malloc(n* sizeof(int));
    }

    input (arr, m, n);

    //print 2D array
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d", *arr[i][j]);
        }
        printf("\n");
    }

    //dellocate memory
    for(int i =0; i < m; i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
