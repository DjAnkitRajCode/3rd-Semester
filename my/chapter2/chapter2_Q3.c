#include<stdio.h>
#include<math.h>
int main()
{
    int s1,s2,s3;
    float p,area;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d",&s1,&s2,&s3);
    p = (s1 + s2 + s3)/2;
    area = sqrt (p*(p-s1)*(p-s2)*(p-s3));
    printf("%0.2f",area);
    return 0;
}