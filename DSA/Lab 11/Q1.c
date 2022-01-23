#include <stdio.h>
#include <string.h>
int max = 100, top = -1;
char infix[100], stack[100];

void push(char c)
{
    if (top > max)
    {
        printf("Overflow ");
        return;
    }
    else
        stack[++top] = c;
}

char pop()
{
    if (top == -1)
        return NULL;
    else
        return (stack[top--]);
}

int allBracket(char *chr)
{
    int i;
    for (i = 0; chr[i] != NULL; i++)
    {
        if (chr[i] == '{' || chr[i] == '[' || chr[i] == '(')
            push(chr[i]);
        else if (chr[i] == '}')
        {
            if (pop() != '{')
            {
                printf("NO MATCHING IN BRACKET\n");
                return 0;
            }
        }
        else if (chr[i] == ']')
        {
            if (pop() != '[')
            {
                printf("NO MATCHING  IN BRACKET\n");
                return 0;
            }
        }
        else if (chr[i] == ')')
        {
            if (pop() != '(')
            {
                printf("NO MATCHING  IN BRACKET\n");
                return 0;
            }
        }
    }
    if (top == -1)
        return 1;
    else
        return 0;
}

int operand(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '{' || ch == '}' || ch == '[' || ch == ']' || ch == '(' || ch == ')')
        return 0;
    else
        return 1;
}

char peep()
{
    if(top==-1)
        return NULL;
    else
        return stack[top];
}

void infixToPostfix(char *infix)
{
    if (allBracket(infix))
    {
        int i = 0, j = 0, size = strlen(infix);
        char postfix[size + 1];
        while (infix[i] != NULL)
        {
            if (operand(infix[i]))
                postfix[j++] = infix[i++];
            else
            {
                if (infix[i] == '{' || infix[i] == '[' || infix[i] == '(')
                    push(infix[i++]);
                else if (infix[i] == '}')
                {
                    while (peep() != '{')
                        postfix[j++] = pop();
                    char newchr = pop();
                    i++;
                }
                else if (infix[i] == ']')
                {
                    while (peep() != '[')
                        postfix[j++] = pop();
                    char newchr = pop();
                    i++;
                }
                else if (infix[i] == ')')
                {
                    while (peep() != '(')
                        postfix[j++] = pop();
                    char newchr = pop();
                    i++;
                }
                else if (infix[i] == '/')
                {
                    if (peep() == '/')
                        postfix[j++] = pop();
                    push(infix[i++]);
                }
                else if (infix[i] == '*')
                {
                    while (peep() == '*' || peep() == '/')
                        postfix[j++] = pop();
                    push(infix[i++]);
                }
                else if (infix[i] == '+')
                {
                    while (peep() == '+' || peep() == '*' || peep() == '/')
                        postfix[j++] = pop();
                    push(infix[i++]);
                }
                else if (infix[i] == '-')
                {
                    while (peep() == '-' || peep() == '+' || peep() == '*' || peep() == '/')
                        postfix[j++] = pop();
                    push(infix[i++]);
                }
            }
        }
        postfix[j] == NULL;
        
        for( i = 0; i < j ; i++)
            printf("%c", postfix[i]);
    }
    else
        return NULL;
}

int main()
{
    gets(infix);
    infixToPostfix(infix);
    return 0;
}