#include <stdio.h>
#include <stdlib.h>
#define n 5

int stack[n];
int top = -1;
void push(int ele);
void pop();
int isfull();
int isempty();

int main()
{
    int choice, ele;
    while (1)
    {
        printf("\n1-push, 2-pop, 3-exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch(choice)
      {
        case 1: printf("Enter element to push:");
                scanf("%d", &ele);
                push(ele);
                break;
        case 2: printf("element to pop:");
                pop();
                break;
        case 3: exit (0);
        default: printf("wrong choice");
      }
    }
}

int isfull()
{
    if(top == n-1)
        return 1;

    return 0;
}

int isempty()
{
    if(top == -1)
        return 1;

    return 0;
}

void push(int ele)
{
    if(isfull())
    {
        printf("Stack overflow\n");
        return;
    }
    else
    {
        top++;
        stack[top] = ele;
    }

}

void pop()
{
    if(isempty())
    {
        printf("Stack underflow");
        return;
    }
    else
    {
        printf("%d", stack[top]);
        top--;
    }
}

