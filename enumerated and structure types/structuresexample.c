//Program using structures
#include <stdio.h>
struct student//global defintion
{
    int id;
    char name[20];
    float gpa;

};
int main()
{
    /*struct student s1, s2; program if an array is not given
    printf("\nEnter details of first student: ");
    scanf("%d%s%f", &s1.id, s1.name, &s1.gpa);//while using %s we don't put '&' for name
    printf("\nEnter details of second student: ");
    scanf("%d%s%f", &s2.id, s2.name, &s2.gpa);

    printf("\nStudent details\n");
    printf("\n ID = %d\t NAME = %s\t GPA = %f", s1.id, s1.name, s1.gpa);
    printf("\n ID = %d\t NAME = %s\t GPA = %f", s2.id, s2.name, s2.gpa);*/

    struct student s[50];//Program if an array is given
    int n;
    printf("\nEnter no. of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of %d student: \n", i+1);
        scanf("%d%s%f", &s[i].id, s[i].name, &s[i].gpa);
    }

    printf("\nStudent details\n");
    for(int i = 0; i < n; i++)
    {
        printf("\n ID = %d\t NAME = %s\t GPA = %f\n", s[i].id, s[i].name, s[i].gpa);

    }
}
