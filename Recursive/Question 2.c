/*Write a recursive program to find n Fibonacci terms.*/

#include <stdio.h>

int fib (int i);

int main()

{
    int n, r, i;
    scanf("%d", &n);
    r = fib(i);
    printf("Fibonacci series is\n");
    for(int i = 0; i < n; i++)
    {
       printf("%d\t", fib(i));
    }
}
int fib (int i)
{
    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return fib(i-1) + fib(i-2);

}
