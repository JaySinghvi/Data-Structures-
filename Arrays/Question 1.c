/*WAP to create dynamic 1D array using malloc( ) memory function.
Populate the array with user-defined data in main( ). Find the number of even elements present in the array.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count = 0, n;
    int *p = (int*) malloc(sizeof(int));

    printf("Enter n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("\n%d", &p[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(p[i]%2 == 0)
        {
            count = count + 1;
        }
    }

    printf("%d", count);

}
