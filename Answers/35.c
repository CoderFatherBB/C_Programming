// Write program to print Fibonacci series using loop and recursion.

#include<stdio.h>
int fibonacci(int);
void main()
{    
    int terms;
    printf("Enter terms : ");
    scanf("%d", &terms);       
    for(int n = 0; n < terms; n++)
    {
        printf("%d ", fibonacci(n));
    }
}
int fibonacci(int num)
{    
    //base condition
    if(num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        // recursive call
        return fibonacci(num-1) + fibonacci(num-2);
    }
}