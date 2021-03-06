#include <stdio.h>
int max = 50, front = -1, rear = -1, queue[50];
void enQueue(int val)
{
    if (rear == max - 1)
    {
        printf("overflow");
        return;
    }
    else
    {
        if (front == -1)
            front = 0;
        queue[++rear] = val;
    }
}
int deQueue()
{
    int val;
    if (front == -1)
    {
        printf("Underflow");
        return -999;
    }
    else
    {
        val = queue[front++];
        return val;
    }
}
void peep()
{
    if (rear == -1)
        return;
    else
    {
        int t = queue[front];
        printf("%d\n", t);
    }
}
void display()
{
    if (rear == -1)
        return;
    else
    {
        int i;
        printf("Queue are: \n");
        for (i = front; i <= rear; i++)
            printf("%d  ", queue[i]);
    }
}
int main()
{
    enQueue(10);
    enQueue(2);
    enQueue(25);
    enQueue(30);
    enQueue(4);
    deQueue();
    deQueue();
    enQueue(500);
    peep();
    display();
    return 0;
}