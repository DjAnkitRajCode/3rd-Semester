#include<stdio.h>
#include<malloc.h>
struct supnode
{
    int info;
    int priority;
    struct supnode *next;
}*start=NULL,*last = NULL;
struct node
{
    int info;
    struct node *next;
}*s1=NULL,*s2=NULL,*s3=NULL,*l1=NULL,*l2=NULL,*l3=NULL;
void s_insert()
{
    struct supnode *t = (struct supnode*)malloc(sizeof(struct supnode));
    printf("Enter Number: ");
    scanf("%d",&t->info);
    printf("Enter Priority Number(1,2,3): ");
    scanf("%d",&t->priority);
    t->next=NULL;
    if(start==NULL)
    {
        start = t;
        last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}
int insert(int n,struct node **s,struct node **l)
{
    struct node *q = (struct node*)malloc(sizeof(struct node));
    q->info = n;
    q->next = NULL;
    if((*s)==NULL && (*l)==NULL)
    {
        (*s) = q;
        (*l) = q;
    }
    else
    {
        (*l)->next = q;
        (*l) = q;
    }
}
void s_display()
{
    struct supnode *q = start;
    if(start == NULL)
    {
        printf("LL is Empty!\n");
        return;
    }
    printf("Source Linked List: ");
    while(q!=NULL)
    {
        printf("%d ",q->info);
        q = q->next;
    }
    printf("\n");
}
void display(struct node *n)
{
    struct node *q = n;
        if(q == NULL)
    {
        printf("LL is Empty!\n");
        return;
    }
    printf("Linked List: ");
    while(q!=NULL)
    {
        printf("%d ",q->info);
        q = q->next;
    }
    printf("\n");
}
void check()
{
    struct supnode *q = start;
    while(q!=NULL)
    {
        if(q->priority==1)
            insert(q->info,&s1,&l1);
        else if(q->priority==2)
            insert(q->info,&s2,&l2);
        else
            insert(q->info,&s3,&l3);
        q = q->next;
    }
}
void main()
{
    s_insert();
    s_insert();
    s_insert();
    s_insert();
    s_insert();
    s_insert();
    check();
    s_display();
    printf("Priority 1 ");
    display(s1);
    printf("Priority 2 ");
    display(s2);
    printf("Priority 3 ");
    display(s3);
}
