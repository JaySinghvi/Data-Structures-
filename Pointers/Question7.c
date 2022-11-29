/*Define and initialize the array, define a pointer and initialize it to point to the first element of the array by assigning the array name
print the first element in the array using both index and pointer notations*/

#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    printf("Value = %d\n", p[0]);
    printf("Address = %p", *(p+0));
}
