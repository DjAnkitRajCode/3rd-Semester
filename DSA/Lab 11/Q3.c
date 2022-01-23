#include <stdio.h>
int ar[5],top1 = -1,top2 = 5;
void pushStack1(int data)
{
    if (top1 < top2 - 1)
        ar[++top1] = data;
    else
        printf("Stack Overflow\n");
}
void pushStack2(int data)
{
    if (top1 < top2 - 1)
        ar[--top2] = data;
    else
        printf("Stack Overflow\n");
}
int popStack1()
{
    if (top1 >= 0)
    {
        int x = ar[top1--];
        return x;
    }
    else
        printf("Stack Underflow\n");
}
int popStack2()
{
    if (top2 < 5)
    {
        int x = ar[top2++];
        return x;
    }
    else
        printf("Stack Underflow\n");
}
int main()
{
    pushStack1(5);
    pushStack2(10);
    pushStack2(15);
    pushStack1(10);
    pushStack2(7);
    printf("stack1 %d\n", popStack1());
    printf("stackk2 is %d\n", popStack2());
    return 0;
}