//evaluate postfix expression
#include"int_stack.h"
#include<ctype.h>

int main()
{
    char exp[20];
    int result;

    printf("enter a postfix exprssion: ");
    scanf("%s",exp);

    for(int i=0;exp[i];i++)
    {
        if(isdigit(exp[i]))
        {
            push(exp[i]-'0');
        }

        else
        {
            int operator2 = pop();
            int operator1 = pop();

            switch(exp[i])
            {
                case '+':
                result = operator1 + operator2;
                break;

                case '-':
                result = operator1 - operator2;
                break;

                case '*':
                result = operator1 * operator2;
                break;

                case '/':
                result = operator1 / operator2;
                break;

            }

            push(result);



        }
    }
    printf("the result for the expression is: %d",pop());
}
