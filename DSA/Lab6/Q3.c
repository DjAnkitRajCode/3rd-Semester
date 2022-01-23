#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
void input()
{
    struct node *p = (struct node*)malloc(sizeof(struct node));
    printf("Enter Element: ");
    scanf("%d",&p->data);
    struct node *t = start;
    p->next=NULL;
    if(start == NULL)
        start = p;
    else
    {
        while(t->next!=NULL)
        {
            t = t->next;
        }
        t->next=p;
    }
}
int min_display()
{
    int min;
    min = start->data;
    struct node *n = start;
    if(start==NULL)
        printf("LL is Empty!\n");
    else
    {
        while(n!=NULL)
        {
            if(min>n->data)
                min=n->data;
            n = n->next;
        }
    }
    printf("Min Element: %d",min);
    return min;
}
void r(int num)
{
    struct node *temp,*pre;
    struct node *t = start;
    if(start == NULL)
    {
        printf("LL Empty!\n");
    }
    else
    {
        while(t!=NULL)
        {
            if(start->data==num)
            {
                temp = start;
                start = start->next;
                free(temp);
                break;
            }
            else if(t->data==num)
            {
                temp = t;
                pre->next = t->next;
                free(temp);
                break;
            }
            else
            {
                pre = t;
                t = t->next;
            }
        }
    }
}
int max_display()
{
    int max;
    max = start->data;
    struct node *n = start;
    if(start==NULL)
        printf("LL is Empty!\n");
    else
    {
        while(n!=NULL)
        {
            if(max<n->data)
                max=n->data;
            n = n->next;
        }
    }
    printf("Max Element: %d\n",max);
    return max;
}
void display()
{
    struct node *t = start;
    if(t == NULL)
    {
        printf("LL is Empty!");
    }
    else
    {
        while(t!=NULL)
        {
            printf("%d ",t->data);
            t=t->next;
        }
        printf("\n");
    }
}
void main()
{
    int min,max,ch;
    while(1)
    {
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Display Min\n");
        printf("4. Remove Min\n");
        printf("5. Display Max\n");
        printf("6. Remove Max\n");
        printf("7. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:input();
                    break;
            case 2:display();
                    break;
            case 3:min = min_display();
                    break;
            case 4:r(min);
                    break;
            case 5:max = max_display();
                    break;
            case 6:r(max);
                    break;
            case 7:exit(0);
                    break;
            default: printf("Wrong Option!\n");
        }
    }
    /*input();
    input();
    input();
    input();
    input();
    display();
    min = min_display();
    max = max_display();
    r(min);
    display();
    r(max);
    display();*/
}
