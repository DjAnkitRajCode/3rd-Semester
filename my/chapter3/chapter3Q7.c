#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter Angles: ");
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1 + a2 + a3 == 180){
        printf("Triangle is Valid");
    }
    else{
        printf("Triangle is not Valid");
    }
    return 0;
}