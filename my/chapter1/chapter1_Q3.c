#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("Enter marks in 1st Subject: ");
    scanf("%d",&a);
    printf("Enter marks in 2nd Subject: ");
    scanf("%d",&b);
    printf("Enter marks in 3rd Subject: ");
    scanf("%d",&c);
    printf("Enter marks in 4th Subject: ");
    scanf("%d",&d);
    printf("Enter marks in 5th Subject: ");
    scanf("%d",&e);
    f=a+b+c+d+e;
    g=f/5;
    printf("Aggregate marks: %d\n",f);
    printf("Percentage: %d",g);
    return 0;
}