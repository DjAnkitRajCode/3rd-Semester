#include<stdio.h>
int main()
{
    int l,b,r,a;
    printf("Enter Length & Breadth: ");
    scanf("%d %d",&l,&b);
    printf("Enter radius: ");
    scanf("%d",&r);
    a = l*b;
    b = 2*3.14*r*r;
    printf("Area of Rectangle = %d\n",a);
    printf("Circumference of circle = %d",b);
    return 0;
}