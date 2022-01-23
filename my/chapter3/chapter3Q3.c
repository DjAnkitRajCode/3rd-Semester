#include<stdio.h>
int main()
{
    int year,i;
    printf("Enter year: ");
    scanf("%d",&year);
    i = year%100;
    if(i%4==0){
        printf("Given Year is leap year");
    }
    else
    {
        printf("Given year is not a leap year");
    }
    return 0;
}