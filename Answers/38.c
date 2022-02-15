// Write program to find whether given two numbers are same or not using bitwise operator.

#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter 1st numbers : ");
    scanf("%d",&num1);
    printf("Enter 2nd numbers : ");
    scanf("%d",&num2);
    if((num1 ^ num2) == 0) // using XOR Gate
        printf("Equal\n");
    else
        printf("Unequal\n");
}