#include<stdio.h>
#include<stdlib.h>
void input(int *p,int s)
{
    for(int i=0;i<=s;i++)
    {
        printf("Enter The Coefficient of x^%d: ",i);
        scanf("%d",(p+i));
    }
}
void display(int *d,int s)
{
    for(int i=s;i>0;i--)
    {
        printf("%dx^%d+ ",*(d+i),i);
    }
    printf("%d\n",*d);
}
int *add(int *a,int *b,int m,int n)
{
    int *c;
    if(m>n)
    {
        c = (int*)malloc((m+1)*sizeof(int));
        for(int j=0;j<=m;j++)
        {
            *(c+j) = *(a+j);
        }
        for(int i=0;i<=n;i++)
        {
            *(c+i)+=*(b+i);
        }
    }
    else
    {
        c = (int*)malloc((n+1)*sizeof(int));
        for(int j=0;j<=n;j++)
        {
            *(c+j) = *(b+j);
        }
        for(int i=0;i<=m;i++)
        {
            *(c+i)+=*(a+i);
        }
    }
    return c;
}
int *subtract(int *a,int *b,int m,int n)
{
    int *c =(int*)malloc(m*sizeof(int));
    for(int i=0;i<=m;i++)
    {
        *(c+i) = *(a+i);
    }
    if(m>n)
    {
        for(int j=0;j<=n;j++)
        {
            *(c+j)-=*(b+j);
        }
    }
    else
    {
        for(int j=0;j<=m;j++)
        {
            *(c+j)-=*(b+j);
        }
    }
    return c;
}
int *multiply(int *a,int *b,int m,int n)
{
    int *d = (int *)malloc(((n*m)+1)*sizeof(int));
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            *(d+i+j) = 0;
        }
    }
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {

            *(d+i+j)+=(*(a+i)**(b+j));
        }
    }
    return d;

}
void main()
{
    int m,n;
    printf("Enter The Order Of 1st and 2nd Polynomial: ");
    scanf("%d %d",&m,&n);
    int *A = (int *)malloc((m+1)*sizeof(int));
    int *B = (int *)malloc((n+1)*sizeof(int));
    printf("Enter 1st Polynomial: \n");
    input(A,m);
    printf("Enter 2nd Polynomial: \n");
    input(B,n);
    printf("First Polynomial: ");
    display(A,m);
    printf("Second Matrix: ");
    display(B,n);
    int ch,f=1;
    int *c,*d,*e;
    while(f)
    {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: c = add(A,B,m,n);
                    printf("Added Polynomial: ");
                    display(c,m);
                    break;
            case 2: d = subtract(A,B,m,n);
                    printf("Subtracted Polynomial: ");
                    display(d,m);
                    break;
            case 3: e = multiply(A,B,m,n);
                    printf("Multiplied Polynomial: ");
                    display(e,n+m);
                    break;
            case 4: f=0;
                    break;
            default: printf("Wrong Option!\n");
        }
    }

}
