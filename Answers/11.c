/*
Write program to print 2 to 10 table vertically(Table of 2 in first column,
table of 3 in next likewise).
*/

#include<stdio.h>
void main()
{
    int i,j;
    for(j=1;j<=10;j++)
    {
        printf("\n");
        for(i=2;i<=10;i++)
        {
            printf("%d\t",i*j);
        }
    }
    getch();
}
