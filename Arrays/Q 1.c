/*Use typedef to define structure of STUDENT with data members/fields : ID, name, gpa.
Create an array of STUDENT, input the data in main( ) and display the sorted records of STUDENT on the basis of gpa.*/
#include <stdio.h>

 typedef struct {//For type def we write the variable name at the end like student
                 char name[20];
                 int id;
                 int gpa;
                } student;

 int main()
 {
     student st[50], t;//Here struct keyword is not needed when using typedef
     int n, i, j;
     printf("Enter no. of students");
     scanf("%d", &n);

     for(i = 0; i < n; i++)
     {
         scanf("%s%d%d", st[i].name, &st[i].id, &st[i].gpa);
     }

     printf("\nStudent details\n");
     for(i = 0; i < n; i++)
     {
         printf("\n Name = %s\t Id = %d\t GPA = %d", st[i].name, st[i].id, st[i].gpa);
     }

     printf("\n Student details in sorted order");
     for(i = 0; i < n - 1; i++)
     {
         for(j = i ; j < (n - 1 -i); j++)
         {
             if(st[j].gpa < st[j + 1].gpa)
             {
                 t = st[j];
                 st[j]= st[j + 1];
                 st[j + 1] = t;
             }
         }
     }
     for(i = 0; i < n; i++)
     {
        printf("\nName = %s\t Id = %d\t GPA = %d", st[i].name, st[i].id, st[i].gpa);
     }

 }
