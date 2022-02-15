//Calculator

#include<stdio.h>
void main()
{
    float n1,n2;
    int ch;
    printf("Enter first no. : ");
    scanf("%f", &n1);
    printf("Enter second no. : ");
    scanf("%f", &n2);

    printf("\nWhich function you want to do : ");
    printf("\n1. Addition \n2. Subtraction \n3. Multipication \n4. Division \n");
    scanf("%d", &ch);

    if (ch == 1)
        printf("Sum = %f", n1+n2);
    else if (ch == 2)
        printf("Subtraction = %f", n1-n2);
    else if (ch == 3)
        printf("Multiplication = %f",n1*n2);
    else if (ch == 4)
        printf("Division = %f", n1/n2);
    else 
        printf("It's not a valed function.");
    
    getch();
    
}