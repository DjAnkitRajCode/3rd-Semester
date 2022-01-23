#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* root=NULL;
void insertt(int x)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->link=NULL;
    if(root==NULL)
    {   
        root=ptr;
       
    }
    else
    {
        struct node* p=root;
        while(p->link!=NULL)
        {
             p=p->link;

        }
        p->link=ptr;
      
    }
    printf("Inserted\n");

}
void disp(struct node*root)
{
    if(root==NULL)
    {
        printf("No elements are present\n");
    }
    else 
    {
        struct node* temp= root;
        while(temp!=NULL)
        {
           printf("%d ",temp->data);
           temp=temp->link;
        }
    }
}
struct node*rearrange(struct node*root)
{  if(root==NULL||root->link==NULL||root->link->link==NULL)
    {
        return root;
    }
    struct node*front=root;
    struct node*rear=root;
    struct node*prev=NULL;
    while(rear->link!=NULL)
    {  prev=rear;
        rear=rear->link;
    }
    rear->link=front->link;
    front->link=rear;
    prev->link=NULL;
    front=front->link;
    //printf("%d",front->data);
   front->link=rearrange(front->link);
   return root;
}
void constructive()
{
    struct node*p=root;
    struct node*temp=NULL;
    while(p!=NULL&&p->link!=NULL)
    {
      p->data=p->data+p->link->data;
      temp=p->link;
       p->link=p->link->link;
      temp->link=NULL;
      free(temp);
      p=p->link;
    }
}
int main()
{
    printf("No of Elements: ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {int x;
      scanf("%d",&x);
      insertt(x);
    }
   disp(root);
   printf("\n");
  struct node*temp=rearrange(root);
   disp(temp);
   printf("\n");
    constructive();
  disp(root);
  return 0;
}