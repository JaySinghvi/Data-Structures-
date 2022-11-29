//Program to print natural no.s from 1 to 5
#include <stdio.h>
void PRINT(int n);
int main()
{
   int n = 5;
   PRINT(n);
   return 0;
}

void PRINT (int n)
{
   if(n == 0)
   {
       return 1;
   }
   else
   {
     printf("%d\n", n);
     PRINT(n - 1);
   }
}
