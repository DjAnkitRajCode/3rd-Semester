#include <stdio.h>
int top = -1, max = 50, binary[50];
void push(int val)
{
    if (top == max - 1)
    {
        printf("Overflow\n");
        return;
    }
    else
        binary[++top] = val;
}
int pop()
{
    if (top == -1)
    {
        printf("Underflow");
        return -999;
    }
    else
    {
        int val = binary[top--];
        return val;
    }
}
void deciToBinary(int deci)
{
    while (deci > 0)
    {
        if (deci == 1) 
        {
            push(1);
            break;
        }
        push(deci % 2);
        deci /= 2;
    }
    int i;
    for (i = top; i >= 0; i--)
        printf("%d ", pop());
}
int main()
{
    int deci;
    printf("Enter decimal number: ");
    scanf("%d", &deci);
    deciToBinary(deci);
}