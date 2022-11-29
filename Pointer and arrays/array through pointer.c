#include<stdio.h>
//array through pointers
int main()
{
    int a[] = {11, 20, 35, 47, 50};//{a[0], a[1], a[2], a[3], a[4]} and a is name of array
    int i;
    int *p = a;//Here we don't write &a as 'a' is an array and holds the base address
    for(i = 0; i < 5; i++)//printing array elements
    {
        printf("\n%d", a[i]);
    }

    printf("\na = %p\t a[0] = %p", a, &a[0]);
    for(i = 0; i < 5; i++)
    {
        printf("\n address = %p and value = %d", (p+i), *(p+i));// as *p = a so instead of a we can write p also
    }
}
