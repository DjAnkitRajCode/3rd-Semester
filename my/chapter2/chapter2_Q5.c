#include<stdio.h>
#include<math.h>
int main(){
    int l1,l2,g1,g2;
    float e,d;
    printf("Enter latitude co-ordinate L1 and L2: ");
    scanf("%d%d",&l1,&l2);
    printf("Enter longitude co-ordinate G1 and G2: ");
    scanf("%d%d",&g1,&g2);
    e = sin (l1)*sin(l2) + cos(l1)*cos(l2) * cos(g2-g1);
    d = 3963 * acos(e);
    printf("Nautical miles: %0.2f",d);
    return 0;
}