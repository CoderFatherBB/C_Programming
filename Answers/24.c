// Read string from user and display its length

#include<stdio.h>
#include<string.h>
void main()
{
    char str[] = {};
    int len;
    printf("Enter your string : ");
    gets(str);
    len = strlen(str);
    printf("Lenght of your string is : %d",len);
}