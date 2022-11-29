//Calloc
#include <stdio.h>
#include <stdlib.h> //library for calloc and malloc

int main()
{
    //1D arrays
    printf("Enter the size of the memory in terms of n");
    int n, a;
    scanf("%d", &n);
    int *p = (int*) malloc(sizeof(int));//malloc returns address so declare a pointer
    //printf("Enter the int data");
    //scanf("%d", p);Alternate method instead of one written below
    *p = 50;
    printf("\n*p = %d", *p);
    int *p1 = (int*) calloc(n, sizeof(int));

    for(int i = 0; i < n; i++)
    {
        scanf("\n%d", p1[i]);//Reads data and gives address
    }

    for(int i = 0; i < n; i++)
    {
        printf("\np[i] = %d", p1[i]);//Gives 0 as no data input from user
    }

}
