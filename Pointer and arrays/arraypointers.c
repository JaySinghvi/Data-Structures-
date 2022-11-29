#include <stdio.h>
//array and pointers
int main()
{
    int a[] = {11, 20, 35, 47, 50};//{a[0], a[1], a[2], a[3], a[4]} and a is name of array
    int i;
    int *p;//pointer declaration
    for(i = 0; i < 5; i++)
    {
        printf("\n%d", a[i]);
    }
    printf("\na = %p\t a[0] = %p", a, &a[0]);//name of the array signifies starting/base address of array and acts as a pointer so no &. address of a and a[0] is same
    for(i = 0; i < 5; i++)
    {
        printf("\n address = %p and value = %d", (a+i), *(a+i));//while using (a+i) when i = 0, a+0 = base address = a; as we increase i the address increases by 4 as system takes float bytes = int bytes
        // in any other expression '*expression' gives value at operator like *(a+i) gives 11, 20, 35, 47, 50
    }


}
