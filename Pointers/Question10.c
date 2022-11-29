//Program to print array elements using pointers
#include <stdio.h>
#define MAX_SIZE 5//constant and has value 5 which is no. of terms and simply means n = 5

int main()
{
    int a[] = {19, 45, 50, 67, 70};
    int *pWALK,*pEND;//pWALK points to starting address and pEND points to last element address

    for(pWALK = a, pEND = a + MAX_SIZE-1; pWALK <= pEND; pWALK++)
    {
        printf("%d\t", *pWALK);//value at pWALK fetches data at every location, a[0], a[1], a[2], a[3], a[4]
        //Forward walk
    }
    //format:- for(int i = 0, j = MAX_SIZE - 1;condition;increment)
    //Instead of printing directly a[4] address we associate with a by a + MAX_SIZE - 1 which is a+5-1 = a+4
    //pEnd is last term so can't increment

    printf("\n");

    for(pWALK = pEND; pWALK >= a; pWALK--)//backward walk
    {
        printf("%d\t", *pWALK);
    }






}
