#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter Distance between two Cities(in km.): ");
    scanf("%f",&a);
    // for meter
    b = a*1000;
    // for feet
    c = b * 3.28084;
    //for inches
    d = a * 39370.079;
    //for centimeters
    e = b*100;
    printf("In meters : %f \nIn feet : %f \nIn inches : %f \n In centimeters : %f \n",b,c,d,e);
    return 0;
}