#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
} *start = NULL;

void create(int n)
{
    if (n <= 0)
    {
        printf("U can't able to store LL");
    }
    else
    {
        struct node *ptr;
        ptr = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &ptr->info);
        ptr->next = NULL;

        start = ptr;
        int i;
        for (i = 1; i < n; i++)
        {
            struct node *llist;
            ptr->next = (struct node *)malloc(sizeof(struct node));
            ptr = ptr->next;
            printf("Enter data: ");
            scanf("%d", &ptr->info);
            ptr->next = NULL;
        }
        printf("\n");
    }
}

void deleteMN(){
    struct node *p,*q,*del;
    if(start==NULL||start->next==NULL){
        return;
    }
    else{
        int i,m,n;
        printf("Enter the number from where u want to delete : ");
        scanf("%d",&m );
        printf("Enter how many number u want to delete : ");
        scanf("%d",&n);
        p=start;
        
        for(i=1;i<m;i++){
            if(p!=NULL)
                p=p->next;
            else
                return;
        }
        q = p;
        p=p->next;
        for(i=1;i<=n;i++){
            if(p!=NULL){
                q->next=p->next;
                free(p);
                p=q->next;
            }
            else{
                break;
            }
        }
    }
}

void display()
{
    struct node *p;
    p = start;
    while (p != NULL)
    {
        printf("%d   ", p->info);
        p = p->next;
    }
    printf("\n\n");
}

int main()
{
    int n;
    printf("Enter total number of element ");
    scanf("%d", &n);
    create(n);
    display();
    deleteMN();
    display();

    return 0;
}