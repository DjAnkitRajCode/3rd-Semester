#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter age of Ram: ");
    scanf("%d",&a);
    printf("Enter age of Shayam: ");
    scanf("%d",&b);
    printf("Enter age of Ajay: ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("Ram is Elder");
        }
        else{
            printf("Ajay is Elder");
        }
    }
    else{
        if(b>c){
            printf("Shyam is Elder");
        }
        else{
            printf("Ajay is Elder");
        }
    }
    return 0;
}