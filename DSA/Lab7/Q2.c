#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
}*start=NULL,*last=NULL;
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
int count(int k,int n)
{
    int numele=0;
    struct node *q = start;
    if(q==NULL)
        printf("LL is Empty!");
    else
    {
        while(q!=NULL)
        {
            if(q->info == k)
                n++;
            numele++;
            q = q->next;
        }
    }
    printf("%d",numele);
    float per = (n*100/numele);
    printf("Occurrence: %d\n",n);
    printf("Percentage: %.2f\n",per);
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
    scanf("%d",&k);
    count(k,0);
}
