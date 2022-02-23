// Read 10 numbers from user store in an array and display maximum and minimum out of them.

#include<stdio.h>
void main()
{
    float no[10],max,min;
    int i,x;
    printf("Enter any 10 numbers : ");
    for(i=0;i<10;i++)
    {
        x = scanf("%f",&no[i]);
        while (x == 0)
        {
            printf("Enter a valid no. : ");
            fflush(stdin);
            x = scanf("%f",&no[i]);
        }
    }
    max = no[0];
    min = no[0];
    for(i=1; i<10; i++)
    {
        if(no[i] > max)
        {
            max = no[i];
        }
        if(no[i] < min)
        {
            min = no[i];
        }
    }
    printf("Maximum element = %f\n", max);
    printf("Minimum element = %f", min);
}