// Write program to count number of vowels in a string.

#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i = 0,count = 0;;
    printf("Enter your string : ");
    gets(str);
    while (str[i]!='\0')
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' ||
        str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            count ++;
        }
        i++;
    }
    printf("No. of vowels in your string is : %d",count);
}   