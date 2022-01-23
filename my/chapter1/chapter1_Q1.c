#include<stdio.h>
int main()
{
    float h,hr,gr,b;
    printf("Enter basic salary: ");
    scanf("%f",&b);
    h=0.4*b;
    hr=0.2*b;
    gr=h+hr;
    printf("Gross Salary is: %0.2f\n",gr);
    return 0;
}