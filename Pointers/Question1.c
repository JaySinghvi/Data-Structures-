/*to define an integer variable a , define a pointer to integer and
assign a’s address, print a and its address, print the pointer value
containing the address of a*/

#include <stdio.h>

int main()
{
    int a;
    int *p = &a;
    printf("address of a = %p\n", &a);
    printf("address of a through pointer = %p", p);
}
