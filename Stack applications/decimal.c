//decimal to binary
#include "int_stack.h"
#include<ctype.h>

int main()
{
    int x,rem;

    printf("enter a decimal number: ");
    scanf("%d",&x);

    while(x!=0)
    {
        rem = x % 2;
        push(rem);
        x= x / 2;

    }
    printf("binary equivalent: ");
    while(!isempty())
    {
        printf("%d",pop());

    }

}
