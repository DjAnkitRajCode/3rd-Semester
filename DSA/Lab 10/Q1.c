#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
void deletesp();
void deleteall();
void length();
struct node
{
    int data;
    struct node*link;
};
int len;
int c;
struct node*root=NULL;
void insert()
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:-\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
        temp->link=root;

    }
    else{
        struct node*p;
        p=root;
    while(p->link!=root)
    {
        p=p->link;
    }
    p->link=temp;
    temp->link=root;
}
}
void display()
{
    struct node*p;
    p=root;
    if(root==NULL)
    {
        printf("Empty.\n");

    }
    else{
    do
    {
        printf("%d ",p->data);
        p=p->link;
    }
     while(p!=root);
    printf("\n");
}
}
void add()
{
    int n;int i=1;
    struct node*temp;
    struct node*p;
    temp=(struct node*)malloc(sizeof(struct node));
     printf("Enter the location:-");
    scanf("%d",&n);
    scanf("%d",&temp->data);
    temp->link=NULL;
   if(n>len)
    {
     printf("Invalid location.\n");
    }
    else if(n==1)
    {struct node*p=root;
         do
    {
        p=p->link;
    }
     while(p->link!=root);
     temp->link=root;
     root=temp;
     p->link=root;
    }
    else{
            p=root;
        while(i<n-1)
        {
            p=p->link;i++;
        }
    temp->link=NULL;
    temp->link=p->link;
    p->link=temp;
    }
}
 void deleteall()
    {
        struct node*p=root,*q=root;
          {
        do
        {
            q=q->link;
        }
            while(q!=root);
            q->link=NULL;
            while(root!=NULL)
            {
                p=root;
                root=root->link;
                free(p);
            }
        }
    }
void length()
{ struct node*p;
    p=root;c=0;
       do
    {
       ++c;
        p=p->link;
    }
     while(p!=root);
    printf("\n");
}
void deletesp()
{struct node *temp;
    int n;
    printf("Enter the location:-");
    scanf("%d",&n);
    if(n>len)
    {
        printf("Invalid location.\n");
    }
        else if(n==1)
{
    temp=root;
    root=temp->link;
    temp->link=NULL;
    free(temp);
}
else if(n==len)
{int i=1;struct node*p=root;
 struct node*q;
    while(i<n-1)
    {
        p=p->link;
        i++;
    }
    q=p->link;
    q->link=NULL;
    p->link=root;
    free(q);
}
else{
    int i=1;struct node*p=root;
    struct node*q;
    while(i<n-1)
    {
        p=p->link;
        i++;
    }
    q=p->link;
    p->link=q->link;
    q->link=NULL;
    free(q);
  }
}
void reverse()
    {struct node*r=root;  
        do
        {
            
            r=r->link;
        }
        while(r->link!=root);
        r->link=NULL;
        int temp;
        int i,j;
        struct node*p,*q;p=root;q=root;
        i=0;
        j=len-1;
        while(i<j)
        {
            int k=0;
            while(k<j)
            {
                q=q->link;
                k++;
            }
            temp=p->data;
            p->data=q->data;
            q->data=temp;
            i++;j--;
            p=p->link;
            q=root;       }
            r=root;
              do
                {
                    r=r->link;
                }
            while(r->link!=NULL);
            r->link=root;   
    }
int main()
{
    int n;
    while(1)
    {
    printf("Enter your choice:-\n");
    printf("1.Insert node.\n");
    printf("2.Delete a node.\n");
    printf("3.Add at specific location.\n");
    printf("4.Delete the linked list.\n");
    printf("5.Display.\n");
    printf("6.Length.\n");
    printf("7.Reverse.\n");
    printf("8.Quit.\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:insert();
        break;
        case 2:deletesp();
        break;
        case 3:add();
        break;
        case 4:deleteall();
        break;
        case 5:display();
        break;
        case 6:length();
        len=c;
        printf("Length is:-%d\n",len);
        break;
        case 7:reverse();
        break;
        case 8:exit(0);
        default:
        printf("Wrong choice bro!!!!\n");
        
    }
  }
}