#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,n;
    printf("Enter five digit number: ");
    scanf("%d",&n);
    a = n%10;
    b = (n/10)%10;
    c = (n/100)%10;
    d = (n/1000)%10;
    e = (n/10000)%10;
    f = a + b + c + d + e ;
    printf("Sum of its digit = %d",f);
    return 0;
}