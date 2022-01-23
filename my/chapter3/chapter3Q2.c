#include<stdio.h>
int main()
{
    int i;
    printf("Input a number: ");
    scanf("%d",&i);
    if(i%2==0){
        printf("Given number is Even");
    }
    else{
        printf("Give number is Odd");
    }
    return 0;
}