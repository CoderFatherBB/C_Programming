/*
Write prg to get marks of 5 subjects. Print total and percentage.
If marks percentage is 
<45 print FAIL
>45 and <60 Second Class
>60 and <75 First Class
>75 Distinction
=100 print Gold Medalist
*/

#include<stdio.h>
int validation(int a , float b)
{
    while (a == 0 || b < 0 || b > 100)
    {
        printf("Enter valid marks: ");
        fflush(stdin);
        a = scanf("%f",b);
    }
}
void main ()
{
    char name[30];
    float total,percentage;
    float m1,m2,m3,m4,m5;
    int x;
    
    printf("Enter students name : ");
    scanf("%s",&name);
    printf("Enter the names of the 5 subjects out-of 100 : \n");
    printf("Maths : ");
    x = scanf("%f",&m1);
    validation(x,m1);

    printf("2.Physics - ");
    x = scanf("%f",&m2);
    while (x == 0 || m2 < 0 || m2 > 100)
    {
        printf("Enter valid marks: ");
        fflush(stdin);
        x = scanf("%f",&m2);
    }
    printf("3.%s - ",s3);
    x = scanf("%f",&m3);
    while (x == 0 || m3 < 0 || m3 > 100)
    {
        printf("Enter valid marks: ");
        fflush(stdin);
        x = scanf("%f",&m3);
    }
    printf("4.%s - ",s4);
    x = scanf("%f",&m4);
    while (x == 0 || m4 < 0 || m4 > 100)
    {
        printf("Enter valid marks: ");
        fflush(stdin);
        x = scanf("%f",&m4);
    }
    printf("5.%s - ",s5);
    x = scanf("%f",&m5);
    while (x == 0 || m5 < 0 || m5 > 100)
    {
        printf("Enter valid marks: ");
        fflush(stdin);
        x = scanf("%f",&m5);
    }

    total = m1 + m2 + m3 + m4 + m5;
    printf("\nYour total out-of 500 is : %f",total);
    percentage = (total/500.00)*100;
    printf("\nYour percentage is : %f",percentage);
    
    if (percentage == 100.00)
    {
        printf("\nGold Medalist");
    }
    else if (percentage > 75.00)
    {
        printf("\nDistinction");
    }
    else if (percentage > 60.00 && percentage < 75.00)
    {
        printf("\nFirst Class");
    }
    else if (percentage > 45.00 && percentage < 60.00)
    {
        printf("\nSecond Class");
    }
    else if (percentage < 45.00)
    {
        printf("\nFail");
    }
   
    getch();
}