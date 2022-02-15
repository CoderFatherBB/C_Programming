/*
Write program to print following pattern
H H H H H
F F F F
D D D
B B
*/

#include<stdio.h>
void main()
{
    int i, j;
    int letter = 72;
    for(i=5;i>=2;i--)
    {
        for(j=1;j<=i;j++)
        {
           // printf("%c",'A'+ 2 + i);
           printf("%c ",letter);
        }
        letter -= 2 ;
        printf("\n");
    }
    getch();
}