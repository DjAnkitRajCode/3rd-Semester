#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL;
void insert()
{
    struct node *t = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d",&t->data);
    t->next=NULL;
    if(start==NULL)
    {
        start = t;
    }
    else
    {
        struct node *q = start;
        while(q->next!=NULL)
            q = q->next;
        q->next = t;
    }
}
void del()
{
    struct node *q = start;
    struct node *t,*p = start;
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    if(start==NULL)
    {
        printf("LL is Empty!");
        return;
    }
    else if(start->data == n)
    {
        return;
    }
    while(q!=NULL)
    {
        if(q->data==n)
        {
            p->next = q->next;
            break;
        }
        p = q;
        q = q->next;
    }
    q->next = start;
    start = q;
}
void display()
{
    struct node *q = start;
    if(q==NULL)
        printf("LL is Empty!");
    else
    {
        while(q!=NULL)
        {
            printf("%d ",q->data);
            q = q->next;
        }
    }
}
void main()
{
    insert();
    insert();
    insert();
    insert();
    insert();
    display();
    del();
    display();
}
