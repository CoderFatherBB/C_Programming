/*
Write program to print 2 to 10 table. Take input from user for which 
he has to print table.
*/

#include<stdio.h>
void main()
{
    int i = 1,num,x;
    printf("Enter a number 2 to 10 : ");
    x = scanf("%d",&num);
    while (x == 0 || num < 2 || num > 10)
    {
        printf("Enter a valid number between 2 and 10 : ");
        fflush(stdin);
        x = scanf("%d",&num);
    }
    while (i <= 10)
    {
        printf("%d x %d = %d\n",num,i,i*num);
        i++;
    }
    getch();
}