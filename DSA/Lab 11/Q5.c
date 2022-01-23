#include <stdio.h>
#include <string.h>
int top = -1,string;

char stackString[50];
void pushChar(char string);
char popChar(void);
int isEmpty(void);
int isFull(void);
int main()
{
    char str[50];
    int i;
    printf("Input a string: ");
    scanf("%[^\n]s", str); 
    for (i = 0; i < strlen(str); i++)
        pushChar(str[i]);
    for (i = 0; i < strlen(str); i++)
        str[i] = popChar();
    printf("Reversed String is: %s\n", str);
    return 0;
}
void pushChar(char string)
{
    if (isFull())
    {
        printf("\nStack is FULL !!!\n");
        return;
    }
    stackString[++top] = string;
}
char popChar()
{
    if (isEmpty())
    {
        printf("\nStack is EMPTY!!!\n");
        return 0;
    }
    string = stackString[top--];
    return string;
}
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int isFull()
{
    if (top == 50 - 1)
        return 1;
    else
        return 0;
}