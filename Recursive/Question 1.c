/*Write a recursive program to find nth Fibonacci term.*/

#include <stdio.h>
int fib (int n);
int main()
{
    int n, r;
    scanf("%d", &n);
    r = fib(n);
    printf("Value of %d fibonacci number is %d", n, r);
}
int fib (int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);

}

