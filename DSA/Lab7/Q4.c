#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
}*start=NULL,*last=NULL;
void insert(int n,struct node **s,struct node **l)
{
    struct node *t = (struct node*)malloc(sizeof(struct node));
    t->info = n;
    t->next=NULL;
    if(*s==NULL)
    {
        *s = t;
        *l = t;
    }
    else
    {
        (*l)->next = t;
        (*l) = t;
    }
}
void insert_dif(struct node **s,struct node **l)
{
    struct node *pr,*p1;
    struct node *q = start;
    while(q!=NULL)
    {
        if(*s == NULL)
        {
            struct node *p = (struct node*)malloc(sizeof(struct node));
            p->info = q->info;
            p->next = NULL;
            *s = p;
            *l = p;
            pr = start;
            start = q->next;
            q = (q->next)->next;
            p1 = start;
            free(pr);
        }
        else
        {
            struct node *p = (struct node*)malloc(sizeof(struct node));
            p->info = q->info;
            p->next = NULL;
            (*l)->next = p;
            *l = p;
            pr = q;
            q = (q->next)->next;
            p1->next = pr->next;
            p1 = p1->next;
            free(pr);
        }
    }
}
void display(struct node *s)
{
    struct node *q = s;
    if(start == NULL)
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
void main()
{
    int n;
    for(int i=0;i<6;i++)
    {
        printf("Enter Number: ");
        scanf("%d",&n);
        insert(n,&start,&last);
    }
    display(start);
    printf("Method 1: \n");
    printf("\n");
    struct node *str,*las;
    str = NULL;
    las = NULL;
    insert_dif(&str,&las);
    display(str);
    printf("\n");
    display(start);
}
