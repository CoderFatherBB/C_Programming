// Write program to get string from user and copy it to other variable in reverse and print

#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100],temp;
    int i,len,l;
    printf("Enter a String : ");
    gets(str1);
    len = strlen(str1);
    l = len - 1;
    for(i=0; i<len; i++)
    {
        temp=str1[i];
        str1[i]=str2[l];
        str2[l]=temp;
        l--;
    }
    // strrev(str1);
    // strcpy(str2, str1);
    printf("Your copyed reversed string is : %s",str2);
}