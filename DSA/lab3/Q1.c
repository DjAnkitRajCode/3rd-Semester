#include <stdio.h>
#include <stdlib.h>

struct customer{
    char name[20];
    int accno;
    int balance;
};

void A(struct customer s[], int n){
    int i;
    printf("name person having less than 200\n");
    for(i=0;i<n;i++){
        if(s[i].balance<200){
            printf("%s\n",s[i].name);
        }
    }

}

void B(struct customer s[] , int n){
    int i;
    printf("details of the person having balance more than 1000\n");
    for(i=0;i<n;i++){
        if(s[i].balance > 1000){
            s[i].balance=s[i].balance+100;
            printf("Name : %s\n",s[i].name);
            printf("Account : %d\n", s[i].accno);
            printf("Balance : %d\n", s[i].balance);
        }
    }

}

int main()
{   
    int n,i;
    printf("Enter total number of customer : ");
    scanf("%d",&n);
    struct customer c[n];

    for(i=0; i<n;i++){
        printf("Name   ");
        scanf("%s",&c[i].name);
        printf("account number   ");
        scanf("%d",&c[i].accno);
        printf("balance  ");
        scanf("%d",&c[i].balance);
    }
    A(c,n);
    B(c,n);

    return 0;
}