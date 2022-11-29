//Program to perform binary search using pointers
//**Pointers cannot be added, multiplied or divided but can only be subtracted or compared
//**Formula to calculate the mid value present using pointers:- ((a+n-1)-a)/2; a=first element and n is last element

#include <stdio.h>

int main()
{
    int a[50], n, key, i, m;
    int *firstptr, *lastptr, *midptr;
    printf("\nEnter size of array:" );
    scanf("%d", &n);

    printf("\nEnter sorted array elements:");//sorted for binary search
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter key element to be searched");
    scanf("%d", &key);

    firstptr = a;
    lastptr = a + n-1;//can also be written as &a[n-1]

    while(firstptr <= lastptr)
    {
        m = lastptr - firstptr;//gives the range of elements
        printf("\nFP = %p\t LP = %p\t MP = %p", firstptr, lastptr, midptr);

        midptr = firstptr + (m / 2);// we did firstptr + (m/2) to find the address of the mid value
        if(key == *midptr)//'*' means dereference / indirectional or value at operator
        {
            printf("\nElement found");
            return 0; //no break as it will take you out of loop and not program
        }
        else if(key > *midptr)//going right side
        {
            firstptr = midptr + 1;//address calculation
        }
        else
        {
            lastptr = midptr - 1;
        }
    }
    printf("\nElement not found");

    printf("\n%d", sizeof(n));




}
