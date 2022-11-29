/*print the value of a by 4 means:
Directly using a
Using pointer p { where p is a pointer to a}
Using pointer q { where q is a pointer to p}
Using pointer r{ where r is a pointer to q}*/

#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("Directly using a = %d\n", a);
    printf("Using pointer p = %d\n", *p);
    printf("Using pointer q = %d\n", **q);
    printf("Using pointer r = %d\n", ***r);


}
