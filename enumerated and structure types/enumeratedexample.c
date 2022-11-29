//Program to perform enumerated datatype
#include <stdio.h>
enum Bool {False, True};//True is not first as it's value is 1 and if false is 10 then true will be 11
//Bool sum(void);
int main()
{
   enum Bool b;
   printf("\nEnter boolean value 0/1: ");
   scanf("%d", &b);
   if(b == True)
   {
       printf("\nYou are fine");
   }
   else
   {
       printf("\nYou should work hard");
   }
}
/*enumeration is system mapped
Simple way to write and above is written with the use of function
int main()
{
   enum Bool {False, True};//True is not first as it's value is 1 and if false is 10 then true will be 11
   enum Bool b;
   printf("\nEnter boolean value 0/1: ");
   scanf("%d", &b);
   if(b == True)
   {
       printf("\nYou are fine");
   }
   else
   {
       printf("\nYou should work hard");
   }*/
