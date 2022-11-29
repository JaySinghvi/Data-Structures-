#include "char_stack.h"

int type(char p)
{
    switch(p)
    {
        case '(' :
        case ')' : return 1;

        case '[' :
        case ']' : return 2;

        case '{' :
        case '}' : return 3;

    }
}
int main()
{
    char exp[50],x,y;

    printf("\n enter an expression with parenthesis");
    scanf("%s",exp);

    for(int i=0;x = exp[i];i++)
    {
        switch(x)
        {
            case '{':
            case '[':
            case '(': push(x);
            printf("\n parenthesis pushed\n");
            break;

            case '}':
            case ']':
            case ')': y = pop();
                if(type(y)!=type(x))
                  {
                    printf("parenthesis match not found");
                    return 0;
                  }
        }
    }

    if(isEmpty())
    {
        printf("\nparenthesis match found");
    }
    else
    {
        printf("\nparenthesis match does not found");
    }
}
