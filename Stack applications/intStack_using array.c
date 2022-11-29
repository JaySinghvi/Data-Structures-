// integer stack
#include<stdio.h>
# define n 5

 int STACK[n];
 int top;

void push(int ele);
void pop();
int main( )
{
    top=-1; // empty stack
    pop();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

}

void push(int ele)
{
    if(top==n-1)
    {
        printf("\n Stack is FULL");
        return;
    }
    top++;//s.top=s.top+1;
    STACK[top]=ele; // s.a[++(s.top)]=ele;
}

void pop()
{
    if(top==-1)
    {
        printf("\n Stack is Empty");
        return;
    }
    printf("\n%d",STACK[top]);
    top--;
}
