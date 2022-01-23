#include<stdio.h>
int main()
{
    int cp,sp,total;
    printf("Enter Cost Price: ");
    scanf("%d",&cp);
    printf("Enter Selling Price: ");
    scanf("%d",&sp);
    total = sp-cp;
    if(total>0){
        printf("Seller make profit by %d",total);
    }
    else{
        printf("Seller make loss of %d",total);
    }
    return 0;
}