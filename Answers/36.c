// Write program to read 5 numbers from user. Write a function to read these 5 numbers and
// calculate total in another function and display total in the same function in which values are read.

#include<stdio.h>
int total(int no[])
{
    int sum = 0,i;
    for (i = 0; i < 5; i++)
    {
        sum += no[i];
    }
    return sum;
}
void main() // void main in itself is also a function.
{
    int i,num[5],t = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter No. %d : ",i+1);
        scanf("%d",&num[i]);
       
    }
    t = total(num);
    printf("Total : %d",t);
}