#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
void change(struct date da)
{
    int rem,mon;
    if(da.month==1 || da.month==3 || da.month==5 || da.month==7 || da.month==8 || da.month==10 || da.month==12)
    {
        da.day+=45;
        if(da.day>31)
        {
            rem = da.day/31;
            da.day%=31;
            da.month+=rem;
            if(da.month>12)
            {
                mon = da.month/12;
                da.month%=12;
                da.year+=mon;
            }
        }
    }
    else if(da.month==2)
    {
        da.day+=45;
        if(da.day>28)
        {
            rem = da.day/28;
            da.day%=28;
            da.month+=rem;
            if(da.month>12)
            {
                mon = da.month/12;
                da.month%=12;
                da.year+=mon;
            }
        }
    }
    else
    {
        da.day+=45;
        if(da.day>30)
        {
            rem = da.day/30;
            da.day%=30;
            da.month+=rem;
            if(da.month>12)
            {
                mon = da.month/12;
                da.month%=12;
                da.year+=mon;
            }
        }
    }
    printf("Changed Date: %d/%d/%d\n",da.day,da.month,da.year);
}
void main()
{
    struct date da;
    printf("Enter Date(DD/MM/YYYY): \n");
    scanf("%d %d %d",&da.day,&da.month,&da.year);
    printf("Current Date: %d/%d/%d\n",da.day,da.month,da.year);
    change(da);
}
