// Display number and its square till square is less than 200.

#include<stdio.h>
void main()
{
    int i,j;
    
    printf("Number  Square");
    for(i=1;i<200;i++)
    {
        j=i*i;
        if(j>200)
        {
            break;
        }
        printf("\n  %d\t  %d",i,j);
    }
    getch();   
}