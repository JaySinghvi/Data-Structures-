//Example for recursion program using factorial function
#include <stdio.h>
int fact(int n);

int main()
{
    int n = 5;
    int r;
    r = fact(n);
    printf("%d", r);
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

//This can also be written as
/*int fact(int n)
{
    int i, f = 1;
    for(i = n;i > 0;i--)
    {
        f = f * i;
    }
    return f;//Base condition will be the 1*fact(0) as it terminates the function
}*/
