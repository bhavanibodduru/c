#include<stdio.h>
void main()
{
    int i,j,rows,columns;
    printf("enter the rows");
    scanf("%d",&rows);
    printf("enter the columns");
    scanf("%d",&columns);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("*");
    }
    printf("\n");
}
    
}
