// Write program to copy string from one array to another.

#include<stdio.h>
void main()
{
    char str1[30],str2[30];
    int i; //i = 0 //for while
    printf("Enter your string : ");
    gets(str1);
    // while(str1[i]!='\0')
    for (i=0; str1[i]!='\0'; i++)
    {
        str2[i] = str1[i];
        // i++;
    }
    str2[i] = '\0';
    printf("Your string copied : %s",str2);
}