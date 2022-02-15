/*
Write program to print following pattern
2 2 1 2 2
1 1 2 1 1
2 2 1 2 2
1 1 2 1 1
*/

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i%2==1)
            {
                printf("2 ");
            }
            else
            {
                printf("1 ");
            }
            if(j==2)
            {
                if(i%2==1)
                {
                    printf("1 ");
                }
                else
                {
                    printf("2 ");
                } 
            }
        }
        printf("\n");    
    }
    getch();
}
