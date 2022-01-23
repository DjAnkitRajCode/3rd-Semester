#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stu
{
    int roll;
    char name[20];
    char branch[5];
    struct stu *next;
}*start = NULL;
void insert()
{
    struct stu *temp = (struct stu*)malloc(sizeof(struct stu));
    struct stu *q;
    char br[10] = "IT";
    printf("Enter Name: ");
    scanf("%s",temp->name);
    printf("Enter Branch: ");
    scanf("%s",temp->branch);
    printf("Enter Roll NO.: ");
    scanf("%d",&temp->roll);
    temp->next = NULL;
    if(start==NULL)
    {
        start = temp;
    }
    else
    {
        if(strcmp(temp->branch,br)==0)
        {
            temp->next = start;
            start = temp;
            printf("Work Done!\n");
        }
        else
        {
            q = start;
            while(q->next!=NULL)
                q = q->next;
            q->next = temp;
            printf("Work DOne!\n");
        }
    }
}
void display()
{
    struct stu *q = start;
    if(start == NULL)
        printf("LL Empty!\n");
    else
    {
        while(q!=NULL)
        {
            printf("Name: %s\n",q->name);
            printf("Roll No.: %d\n",q->roll);
            printf("Branch: %s\n",q->branch);
            q = q->next;
        }
    }
}
void main()
{
    int ch,flag = 1;
    while(flag)
    {
        printf("1. Insert Student\n");
        printf("2. Display Detail\n");
        printf("3. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
                   break;
            case 2:display();
                    break;
            case 3:flag = 0;
                    break;
            default:printf("Wrong Option!\n");
        }
    }
}
