#include "char_stack.h"
#include<ctype.h>


enum token {operand, operator};
int tokentype(char x)
{
    if(isalpha(x)|| isdigit(x))
    {
      return operand;
    }
    else
    {
        return operator;
    }

}

int pre(char x)
{
    switch(x) //can only be applied to int data as it has ASCII values
    {
      case '*':
      case '/': return 2; //Both * and / have return value 2 so only write once

      case '+':
      case '-':return 1;

      case '#':return 0;
    }
}


void infix_postfix(char infix[], char postfix[])
{
    push('#');

    char x,y;
    int i, j = 0;//we use j to put operands in postfix expressions
    for(i = 0; infix[i] != '\0'; i++)
    {
        x = infix[i];

        switch (tokentype (x))
        {
            case operand : postfix[j] = x;
                           j++; //This can also be written as postfix[j++] = x which first assigns to x and then increments
                           break;

            case operator : y = pop();
                            while(pre(y) >= pre(x))//pre is used to check the precedence of y and x
                            {
                                postfix[j++] = y;
                                y = pop();
                            }


            push(y);//re-stack the last y that was unstacked
            push(x);//push the incoming operator
        }

    }
    y = pop();
    while (y != '#')
    {
        postfix[j++] = y;
        y = pop();
    }
         postfix[j] = '\0';

}


int main()
{
    char infix[100], postfix[100];
    printf("Enter an infix expression");
    scanf("%s", infix);
    infix_postfix(infix, postfix);
    printf("%s", postfix);
}


