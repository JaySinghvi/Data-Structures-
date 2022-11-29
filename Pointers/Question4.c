/*Program to find the smaller of two numbers by taking address of two numbers as input
 and returning address of smaller number as output*/

 #include <stdio.h>

 int main()
 {
     int a=3;
     int b=4;
     int *P1;
     int *P2;
     scanf("%p", &P1 );
     scanf("%p", &P2);

     printf("a = %p\n",P1 );
     printf("b = %p\n", P2);
     if(a < b)
     {
         printf("a = %p", P1);
     }
     else
     {
         printf("b = %p", P2);
     }
 }

