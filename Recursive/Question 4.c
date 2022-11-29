/*Write a recursive program to solve tower of Hanoi with n discks*/

#include <stdio.h>
void tower (int n, char s, char t, char d)
{
    if (n == 1)
        printf("Move disk 1 from %c to %c\n", s, d);
    else
    {
        tower(n-1, s, d, t);
        printf("Move disk %d from %c to %c\n", n, s, d);
    }


    tower(n-1, t, s, d);
}
int main()
{
   int n;
   scanf("%d", &n);
   tower(n, 'A', 'B', 'C');
   return 0;
}
