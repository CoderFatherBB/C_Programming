// Read string from user and display its length

#include<stdio.h>
#include<string.h>
void main()
{
    char str[1000];
    int len = 0;
    int i = 0;

    printf("Enter your string : ");
    gets(str);
    // int temp = strlen(str);
    
    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    printf("Lenght of your string is : %d",len);
    // printf("\nLenght of your string is : %d",temp);
}