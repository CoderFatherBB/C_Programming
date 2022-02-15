// Write a program to multiply given number by 2,3,4 and display result using bitwise operator.

#include <stdio.h>
void main()
{
    int num, tempnum, num1, num2;
    printf("Enter an integer : \n");
    scanf("%d", &num);
    tempnum = num;
    num1 = num;
    num2 = num;

    num1 = num1 << 1;
    printf("%d x 2 = %d\n", tempnum, num1);
    
    num2 = (num2 << 2) - num2; // left shift by 2 bits and subtracting it by itself
    printf("%d x 3 = %d\n", tempnum, num2);

    num = num << 2; // left shift by two bits 
    printf("%d x 4 = %d\n", tempnum, num);   
}