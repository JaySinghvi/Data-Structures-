//Example for union
#include <stdio.h>
union ex
{
    int marks;//If this was double we will get 8 as it is greater than float and if both were float we would get 4
    float gpa;
};
/*struct ex1
{
    double marks;//here it will be 8+4 = 12
    float gpa;
};*/

int main()
{
    union ex a;
    //struct ex1 a1;
    printf("%d", sizeof(a));//it will be 4 as both variables are float and use the same block of memory one at a time
    //printf("\n%d", sizeof(a1));//it will be 8 as both float use the diff block of memory and together it will be 4+4=8
    a.gpa = 3.5;
    printf("\n%f", a.marks);//even though we write a.marks we  will get output as 3.5 because both are using the same block of memory

//Union's utility is in trees datastructure
}
