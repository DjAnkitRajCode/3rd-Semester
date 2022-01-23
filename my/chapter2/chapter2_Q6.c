#include<stdio.h>
#include<math.h>
int main(){
    int a;
    float b,c,d,e,f,g;
    printf("Enter angle: ");
    scanf("%d",&a);
    b = tan(a);
    c = cos(a);
    d = sin(a);
    e = 1/b;
    f = 1/d;
    g = 1/c;
    printf(" b = %0.2f\n c = %0.2f\n d = %0.2f\n e = %0.2f\n f = %0.2f\n g = %0.2f\n",b,c,d,e,f,g);
    return 0;
}