// Read name of student and marks of 5 subjects till user enters “END”.

#include<stdio.h>  
#include <string.h>    
void main()
{    
    int i,marks;  
    char str1[20];
    char str2[] = "END";    
    printf("Enter name of student: ");    
    gets(str1);
     
    while(strcmp(str1,str2)!=0)
    {           
        for(i=1;i<=5;i++)
        {
            printf("Enter marks of subject %d : ",i);
            scanf("%d",&marks);
        }
        printf("Enter name of student: "); 
        fflush(stdin);   
        gets(str1);    
    }     
}