#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n;
    int r,c;
    printf("Enter the Row And Column: ");
    scanf("%d %d",&r,&c);
    printf("Enter the Number of Element of Sparse Matrix: ");
    scanf("%d",&n);
    int **a = (int **)malloc(n+1*sizeof(int*));
    for(int i=0;i<n+1;i++)
    {
        *(a+i) = (int*)malloc(3*sizeof(int));
    }
    *(*a+0) = r;
    *(*a+1) = c;
    *(*a+2) = n;
    for(int i=1;i<=n;i++)
    {
        printf("Enter Row, Column and Element: ");
        scanf("%d %d %d",(*(a+i)+0),(*(a+i)+1),(*(a+i)+2));
    }
    printf("Original Matrix: \n");
    for(int i=0;i<n+1;i++)
    {
        printf("%d   %d   %d\n",*(*(a+i)+0),*(*(a+i)+1),*(*(a+i)+2));
        printf("---------\n");
    }
    int t;
    for(int i=0;i<n+1;i++)
    {
        t = *(*(a+i));
        *(*(a+i)) = *(*(a+i)+1);
        *(*(a+i)+1) = t;
    }
    int *temp;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(*(*(a+j))>*(*(a+j+1)))
            {
                temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;
            }
        }
    }
    printf("Transpose Matrix: \n");
    for(int i=0;i<n+1;i++)
    {
        printf("%d   %d   %d\n",*(*(a+i)+0),*(*(a+i)+1),*(*(a+i)+2));
        printf("--------\n");
    }
}
