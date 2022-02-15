/*
Write program to print following pattern
1 2 3 4 5
2 1 3 4 5
2 3 1 4 5
2 3 4 1 5
2 3 4 5 1
*/

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=2;j<=6;j++)
        {
            if(j==i+1)
            {
                printf("1 ");
            }
            if(j<6)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}