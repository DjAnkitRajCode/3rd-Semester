#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    float r,w;
    printf("Enter X and Y Co-ordinate: ");
    scanf("%d%d",&x,&y);
    r = sqrt(x^2+y^2);
    w = atan(y/x);
    printf("Polar Co-ordinate: (%0.2f,%0.2f)",r,w);
    return 0;
}