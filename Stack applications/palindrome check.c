
#include "char_stack.h"
int main()
{
    char stack[100], a;
    printf("Enter a string:");
    scanf("%s", stack);
    for(int i = 0; stack[i] != '\0'; i++)
    {
        push(stack[i]);
    }
    for(int j = 0; stack[j] != '\0'; j++)
    {
        a = pop();
        if(a != stack[j])
        {
            printf("Not palindrome");
            return 0;
        }
    }
    printf("Palindrome");
}

