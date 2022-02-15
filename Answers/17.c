// Read numbers from user and display their total. Take input till user enters 0.

#include<stdio.h>
void main()
{
    int x;
    float n,sum;
    
    printf("Enter a number: ");
    x = scanf("%f",&n);
    while(x == 0)
    {
        printf("Enter a valid no. : ");  
        fflush(stdin);
        x = scanf("%f",&n);
    }
    while(sum != 0)
    {
        sum = n;
        if(sum == 0)
        {
            break;
        }
        x = scanf("%f",&sum);
        while(x == 0)
        {
            printf("Enter a valid no. : ");
            fflush(stdin);
            x = scanf("%f",&sum);
        }
        n += sum;
    }
    printf("Total is: %f",n);
}