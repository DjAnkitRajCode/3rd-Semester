#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    while(c<=8){
        ++c;
        printf("%d %d\n",a,b);
        int x=a;
        a=b;
        b=x/2;
    }
    return 0;
}