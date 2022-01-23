#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
void check(struct date da[])
{
    if(da[0].day==da[1].day&&da[0].month==da[1].month&&da[0].year==da[1].year)
        printf("Equal Date!\n");
    else
        if(da[0].year<da[1].year)
            printf("%d/%d/%d\n is greater date",da[0].day,da[0].month,da[0].year);
        else if(da[0].year==da[1].year)
        {
            if(da[0].month==da[1].month)
            {
                if(da[0].day<da[1].day)
                    printf("%d/%d/%d\n is greater date",da[0].day,da[0].month,da[0].year);
                else
                    printf("%d/%d/%d\n is greater date",da[1].day,da[1].month,da[1].year);
            }
            else if(da[0].month<da[1].month)
                printf("%d/%d/%d\n is greater date",da[0].day,da[0].month,da[0].year);
            else
                printf("%d/%d/%d\n is greater date",da[1].day,da[1].month,da[1].year);
        }
        else
            printf("%d/%d/%d\n is greater date",da[1].day,da[1].month,da[1].year);
}
void main()
{
    struct date da[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter %d Date(DD/MM/YYYY): \n",i+1);
        scanf("%d %d %d",&da[i].day,&da[i].month,&da[i].year);
    }
    check(da);
}
