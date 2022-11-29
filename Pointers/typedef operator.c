//Type definition operator:- renames already existing datatypes
#include <stdio.h>
struct student//new datatype using the existing datatype that is int and float
{
   int roll;
   float gpa;
};

int main()
{
    typedef int my_int;//cannot define any new data type using the base data type
    my_int a;
    int b;
    scanf("%d%d", &a, &b);
    printf("My int value = %d", a);
    //utility:- to enhance the readability  of the code
}
