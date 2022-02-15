//Convert Celsius to Fahrenheit and vice versa

#include<stdio.h>
void main()
{
    float celsius, fahrenheit;
    int ch;
    printf("1. For Fahrenheit To Celsius\n2. For Celsius To Fahrenheit\n");
    printf("\nEnter Your Choice : ");
    scanf("%d",&ch);
    
    if(ch == 1)
    {
        printf("\nEnter The Value of Fahrenheit Temperature: ");
        scanf("%f",&fahrenheit);
        celsius = 5*(fahrenheit-32)/9;
        printf("\nCelsius Temperature: %f ",celsius);
    }
    else if(ch == 2)
    {
        printf("\nEnter The Value of Celsius Temperature: ");
        scanf("%f",&celsius);
        fahrenheit=((9*celsius)/5)+32;
        printf("\nFahrenheit Temperature: %f ",fahrenheit);
    }
    else
        printf("\nWrong Choice.....Try Again!!!");

    getch();
}