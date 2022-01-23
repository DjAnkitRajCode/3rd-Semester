#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
} *start1 = NULL, *start2 = NULL, *start3 = NULL;

struct node *create(struct node *start, int n)
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
    return start;
}

void calculateSum(int n)
{
    struct node *p, *q, *r;
    for (p = start1; p != NULL; p = p->next)
    {
        for (q = start2; q != NULL; q = q->next)
        {

            for (r = start3; r != NULL; r = r->next)
            {
                if (p->info + q->info + r->info == n)
                {
                    printf("%d  +  %d  +  %d  =  %d\n", p->info, q->info, r->info, n);
                }
            }
        }
    }
}

int main()
{
    int n, m, o, gNum;
    printf("Enter total number of element  for 1st LL: ");
    scanf("%d", &n);
    start1 = create(start1, n);
    printf("Enter total number of element for 2nd LL:  ");
    scanf("%d", &m);
    start2 = create(start2, m);
    printf("Enter total number of element for 3rd LL:  ");
    scanf("%d", &o);
    start3 = create(start3, o);
    printf("Enter the number that u want to sum from all 3 LL : ");
    scanf("%d", &gNum);
    calculateSum(gNum);
    return 0;
}