#include<stdio.h>
int queue[20] , front = -1 ,rear = -1 ,size = 5; 
void enqueue(int val){
    if (((front == -1) && (rear == size - 1)) || ((rear + 1) % size == front))
    {
        printf("Queue is full\n");
    }
    else{
        rear = (rear + 1) % size ;
        queue[rear] = val;
    }
}
int dequeue(){
    if(rear == front){
        printf("Queue is empty\n");
        return -999;
    }
    else{
        int val;
        front = (front + 1) %size;
        val = queue[front];
        return val;
    }
}
void peep()
{
        front = (front + 1) % size;
        printf("%d\n", queue[front]);
}
void display()
{
    int f = front;
    printf("Displaying Element : ");
    while (rear != f)
    {
        f = (f + 1) % size;
        printf("%d ", queue[f]);
    }
    printf("\n");
}
int main()
{
    int choice, num;
    while (1)
    {
        printf("\n1.Insert");
        printf("\n2.Delete");
        printf("\n3.Peep");
        printf("\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter number : ");
            scanf("%d", &num);
            enqueue(num);
            display();
            break;
        case 2:
            dequeue();
            display();
            break;
        case 3:
            peep();
            display();
            break;
        case 4:
            exit(0);
        default:
            break;
        }
    }
    return 0;
}