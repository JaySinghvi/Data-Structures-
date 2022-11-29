/*Write a recursive program to find factorial of a given number.*/

#include <stdio.h>

int main()
{
    int n;
    int r;
    scanf("%d", &n);
    r = fact(n);
    printf("Answer is %d", r);
}

int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
       return n*fact(n-1);
    }
}

