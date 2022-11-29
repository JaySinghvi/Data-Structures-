#include<stdio.h>
//Declaring and printing pointer value
int main()
{
    int a = 5;
    int *p = &a; //if type of variable and pointer is different there will be an error
    printf("\na = %d", a);
    printf("\np = %p", p);
    printf("\naddress of a = %p", &a);
    printf("\naddress of a with the help of pointer = %p", p);

    printf("\n%d",sizeof(float) );

}


