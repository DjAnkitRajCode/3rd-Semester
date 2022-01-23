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
    printf("Enter Number: ");
    scanf("%d",&t->info);
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
void display()
{
    struct node *p = start;
    if(start==NULL)
    {
        printf("LL Empty!");
        return;
    }
    printf("Linked List: ");
    while(p!=NULL)
    {
        printf("%d ",p->info);
        p = p->next;
    }
}
void swap()
{
    int a,b;
    struct node *pre1,*pre2,*cur1,*cur2,*nxt1,*nxt2;
    cur1 = start;
    cur2 = start;
    printf("Enter the two position: ");
    scanf("%d%d",&a,&b);
    if(a==1 || b==1)
    {
        nxt1 = start->next;
        int t;
        if(a>b)
            t = a;
        else
            t = b;
        for(int i=0;i<t-1;i++)
        {
            if(cur2==NULL)
            {
                printf("Invalid!");
                return;
            }
            else
            {
                pre2 = cur2;
                cur2 = cur2->next;
                nxt2 = cur2->next;
            }
        }
        cur1->next = nxt2;
        pre2->next = cur1;
        start = cur2;
        start->next = nxt1;
    }
    else if(a+1 == b || b+1==a)
    {
        nxt1 = start->next;
        int t;
        if(a>b)
            t = b;
        else
            t = a;
        for(int i=0;i<t-1;i++)
        {
            if(cur1->next==NULL)
            {
                printf("Invalid!");
                return;
            }
            else
            {
                pre1 = cur1;
                cur1 = cur1->next;
                nxt1 = cur1->next;
            }
        }
        cur2 = nxt1;
        cur1->next = cur2->next;
        pre1->next = cur2;
        cur2->next = cur1;
    }
    else
    {
        for(int i=0;i<a-1;i++)
        {
            if(cur1==NULL)
            {
                printf("Invalid!");
                return;
            }
            pre1 = cur1;
            cur1 = cur1->next;
            nxt1 = cur1->next;
        }
        for(int i=0;i<b-1;i++)
        {
            if(cur2==NULL)
            {
                printf("Invalid!");
                return;
            }
            pre2 = cur2;
            cur2 = cur2->next;
            nxt2 = cur2->next;
        }
        cur2->next = nxt1;
        pre1->next = cur2;
        cur1->next = nxt2;
        pre2->next = cur1;
    }
}
void main()
{
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    display();
    printf("\n");
    swap();
    display();
}
