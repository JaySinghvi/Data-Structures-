#include<stdio.h>
# define n 20

typedef enum {FALSE,TRUE} BOOL;

int stack[n];
int top=-1;

BOOL isfull()
{
    if(top==n-1)
    {
        printf("\n stack is FULL");
        return TRUE;
    }
    return FALSE;

}

void push (int ele)
{
    if(isfull())
    {
        return;
    }
    top++;
    stack[top]=ele;
}
BOOL isempty()
{
    if(top==-1)
    {
        printf("\nstack is EMPTY");
        return TRUE;
    }
    return FALSE;
}
int pop()
{
    if(isempty())
    {
        return NULL;
    }
    return stack[top--];
}
