#include<stdio.h>
#include<stdlib.h>
void insert();
void add();
void deletesp();
void display();
void deleteall();
void length();
void reverse();
void addatbegin();
struct node
{
    int data;
    struct node*llink;
    struct node*rlink;
};
struct node*root=NULL;
int len,c;
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
    printf("8.Add at begining.\n");
    printf("9.Quit.\n");
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
        case 8:addatbegin();
        break;
       
        case 9:exit(0);
        default:
        printf("Wrong choice bro!!!!\n");
        
    }


}
}
void insert()
{
    struct node*temp;struct node*p;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:-\n");
    scanf("%d",&temp->data);
    temp->llink=NULL;
    temp->rlink=NULL;
    if(root==NULL)
    {
        root=temp;
        temp->rlink=root;
    }
    else{
        
        p=root;
    while(p->rlink!=root)
    {
        p=p->rlink;
    }
    p->rlink=temp;
    temp->llink=p;
    temp->rlink=root;
    root->llink=p;
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
        do{printf("%d ",p->data);
            p=p->rlink;
        }
    while(p!=root);
    printf("\n");
}
}
void length()
{ struct node*p;
    p=root;c=0;
    do
    {++c;
        p=p->rlink;
    }while(p!=root);
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
{  struct node*p=root;   do{
            p=p->rlink;
        }
    while(p->rlink!=root);
    temp=root;
    root=temp->rlink;
    root->llink=p;
    p->rlink=root;
    temp->rlink=NULL;
    temp->llink=NULL;
    free(temp);
}
else if(n==len)
{
  int i=1;struct node*p=root;
 struct node*r;
    while(i<n-1)
    {
        
          p=p->rlink;
        i++;
    }
    r=p->rlink;
    r->rlink=NULL;
    r->llink=NULL;
    p->rlink=root;
    free(r);
}
else{
    int i=1;struct node*p=root;
    struct node*q;
    while(i<n-1)
    {
        p=p->rlink;
        i++;
    }
    q=p->rlink;
    p->rlink=q->rlink;
    q->rlink->llink=p;
    q->rlink=NULL;
    q->llink=NULL;
    free(q);
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
    temp->llink=NULL;
    temp->rlink=NULL;
   if(n>len)
    {
     printf("Invalid location.\n");
    }
    else if(n==1)
    {
        struct node*p=root;
         do
    {
        p=p->rlink;
    }
     while(p->rlink!=root);
     temp->rlink=root;
     root=temp;
     root->llink=p;
     p->rlink=root;
    }
    else{
            p=root;
        while(i<n-1)
        {
            p=p->rlink;i++;
        }
    temp->rlink=p->rlink;
    p->rlink=temp;
    p->rlink->llink=temp;
    temp->llink=p;
    }
}
    void deleteall()
    {
        struct node*p=root,*q=root;
          {
            do
            {
                
                q=q->rlink;
            }
            while(q!=root);
            q->rlink=NULL;
            while(root!=NULL)
            {
                p=root;
                root=root->rlink;
                free(p);
            }
          }
    }
    void reverse()
    {struct node*p=root;
        do
        {
            p=p->rlink;
        }
        while(p->rlink!=root);
        do
        {
           printf("%d ",p->data);
           p=p->llink;
        }
        while(p!=root);
        printf("%d",p->data);
        printf("\n");
    }
    void addatbegin()
    {
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:-\n");
    scanf("%d",&temp->data);
    temp->llink=NULL;
    temp->rlink=NULL;
    if(root==NULL)
    {
        root=temp;
        temp->rlink=root;
    }
    else{struct node*p=root;
     do
        {
            p=p->rlink;
        }
        while(p->rlink!=root);
        temp->rlink=root;
        root->llink=temp;
        root=temp;
        root->llink=p;
        p->rlink=root;
    }   
}