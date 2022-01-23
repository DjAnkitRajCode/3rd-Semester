#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,g,h,i;
    printf("Enter Five digit number: ");
    scanf("%d",&n);
    a = n%10;
    b = (n/10)%10;
    c = (n/100)%10;
    d = (n/1000)%10;
    e = (n/10000)%10;
    f = a*(10^0);
    g = (b*(10^1));
    h = (c*(10^2));
    i = (d*(10^3));
   
    printf("%d\n%d\n%d\n%d\n",f,g,h,i);
    return 0;
}