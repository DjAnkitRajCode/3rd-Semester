#include <stdio.h>
#include <stdlib.h>

struct date{
    int day;
    int month;
    int year;
}s1,s2;

int comp_date(struct date s1,struct date s2){
    s1.year = s1.year + s1.month/12 + s1.day/30;
    s1.month = s1.month+ s1.day/30;
    s1.day=s1.day%30;
    s2.year = s2.year + s2.month / 12 + s2.day / 30;
    s2.month = s2.month + s2.day / 30;
    s2.day = s2.day % 30;
    // if (s1.year == s2.year && s1.month == s2.month && s1.day == s2.day){
    //     return 1;
    // }
    // if{
        if(s1.year>s2.year){
            return 1;            
        }
        else if(s1.year==s2.year){
            if(s1.month>s2.month){
                return 1;
            }
            else if (s1.month == s2.month){
                if(s1.day>s2.day){
                    return 1;
                }
                else if(s1.day==s1.day){
                    return 2;
                }
                else
                return 3;
            }
            else 
            return 3;
        }
        else
        {
            return 3;
        }
        
    
}

int main()
{
    struct date s1,s2;
    printf("Enter 1st day month and year ");
    scanf("%d",&s1.day);
    scanf("%d", &s1.month);
    scanf("%d", &s1.year);
    printf("Enter 1st day month and year ");
    scanf("%d", &s2.day);
    scanf("%d", &s2.month);
    scanf("%d", &s2.year);

    int t = comp_date(s1,s2);
    if(t==1){
        printf("1st year");
    }
    else if(t==2){
        printf("Both are same");
    }
    else if(t==3){
        printf("2nd year");
    }

    return 0;
}