//character stack header
#include <stdio.h>
#define n 20

typedef enum  {False, True} Bool;

char stack[n];
int top = -1;

Bool isFull()
{
    if(top == n-1)//return top == n-1? 1:0
    {
        printf("\nStack is full");
        return True;
    }

    return False;
}

void push(char ele)
{
    if(isFull())
        return;
    top++;//s.top = s.top+1
    stack[top] = ele;//s.a[++(s.top)] = ele;
}

Bool isEmpty()
{
    if(top == -1)
       {
         printf("\nStack is empty");
         return True;
       }
    return False;
}

char pop()
{
    if(isEmpty())
        return NULL;
    return (stack[top--]);
}

