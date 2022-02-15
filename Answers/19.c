// Display first 10 numbers of Fibonacci series.

#include<stdio.h>
void main()
{
    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm = 0;
    
    // printf("Enter the number of terms: ");
    // scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= 10; ++i) //for user enters i <= 10
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    getch();
}