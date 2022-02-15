// Write program to read number from user and display whether it is odd or even using bitwise
// operator.

#include <stdio.h>
void main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num & 1)
    {
        printf("%d is odd.", num);
    }
    else
    {
        printf("%d is even.", num);
    }
}