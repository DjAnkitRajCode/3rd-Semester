#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
}*start=NULL;
void insert()
{
    struct node *t = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d",&t->info);
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
void append(int k,int n)
{
    struct node *q = start;
    if(q==NULL)
        printf("LL is Empty!");
    else
    {
        while(q!=NULL)
        {
            if(q->info%2==0)
                q->info-=k;
            else
                q->info+=n;
            q = q->next;
        }
    }
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
            printf("%d ",q->info);
            q = q->next;
        }
    }
}
int main()
{
    insert();
    insert();
    insert();
    insert();
    insert();
    display();
    int k,l;
    printf("Enter Number: ");
    scanf("%d%d",&k,&l);
    append(k,l);
    printf("\n");
    display();
}
