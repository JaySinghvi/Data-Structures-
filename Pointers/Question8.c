/*create a pointer to an integer and store the address of the second element of the array i.e a[1]
this pointer can be used as an array name and can be indexed
print the first 2 elements using array name as well as by pointer*/

#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = &a[1];
    printf("Value of first element= %d\t Address of first element = %p\n", a[0], p[-1]);
    printf("Value of second element= %d\t Address of second element = %p", a[1], p[0]);

}
