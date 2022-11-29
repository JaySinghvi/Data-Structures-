/*WAP to demonstrate the difference between structure and union variable, in terms of memory size.*/

#include <stdio.h>
struct eg
{
    float gpa;
    int marks;
};

union ex
{
    float gpa;
    int marks;
};
int main()
{
    struct eg c;
    printf("Using strutures = %d\n", sizeof(c));

    union ex a;
    printf("Using union = %d", sizeof(a));

}
