// Write program to print factorial of given number.

#include<stdio.h>
void main()
{
    int i, number, fact = 1,x;
   
    printf("Enter a number to calculate its factorial : ");
    x = scanf("%d", &number);
    while (x == 0 || number < 0)
    {
        printf("Enter a valid : ");
        fflush(stdin);
        x = scanf("%d", &number);
    }
   
    for (i = 1;i <= number; i++)
    {
       fact = fact * i;
    }
    
    printf("Factorial of a number %d is = %d\n", number, fact);
    getch();
}