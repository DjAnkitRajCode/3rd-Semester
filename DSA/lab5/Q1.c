#include<stdio.h>
#include<stdlib.h>
struct bank
{
    char name[50];
    int acc_no;
    int balance;
};
void input(struct bank *c,int s)
{
    for(int i=0;i<s;i++)
    {
        printf("Enter Name: ");
        scanf("%s",(c+i)->name);
        printf("Enter Account Number: ");
        scanf("%d",&(c+i)->acc_no);
        printf("Enter Balance: ");
        scanf("%d",&(c+i)->balance);
    }
}
void display(struct bank *c,int s)
{
    for(int i=0;i<s;i++)
    {
        printf("Name: %s\n",(c+i)->name);
        printf("Account Number: %d\n",&(c+i)->acc_no);
        printf("Balance: %d\n",&(c+i)->balance);
    }
}
void upgrade(struct bank *c,int s)
{
    for(int i=0;i<s;i++)
    {
        if((c+i)->balance>=1000)
        {
            (c+i)->balance+=100;
            printf("Name: %s\n",(c+i)->name);
            printf("Account Number: %d\n",(c+i)->acc_no);
            printf("Balance: %d\n",(c+i)->balance);
        }

    }
}
void dis_less(struct bank *c,int s)
{
    printf("Name Of Customer Having Balance Less than $200: \n");
    for(int i=0;i<s;i++)
    {
        if((c+i)->balance<=200)
        {
            printf("Name: %s\n",(c+i)->name);
        }

    }
}
void main()
{
    int n;
    printf("Enter The Number of Customer: ");
    scanf("%d",&n);
    struct bank *cus = (struct bank*)malloc(n*sizeof(struct bank));
    input(cus,n);
    int ch;
    while(1)
    {
        printf("1. Name Of Customer Having Balance Less than $200\n");
        printf("2. Detail of Customer Have More than $1000\n");
        printf("3. Details Of All Customers\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:dis_less(cus,n);
                    break;
            case 2:upgrade(cus,n);
                    break;
            case 3:display(cus,n);
                    break;
            case 4: exit(0);
                    break;
            default: printf("Wrong Option!\n");
        }
    }
}
