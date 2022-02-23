// Write program to read and display names of 5 persons. Separate name, middle name and last
// name of each person and display.

#include<stdio.h>
#include<string.h>

void separate(char name[30])
{
    char *token = strtok(name, " ");
    while(token != NULL)
    {
        printf("%s\n",token);
        token = strtok(NULL, " ");
    }
}
void main()
{
    char n1[30],n2[30],n3[30],n4[30],n5[30];
    printf("Person - 1 name : ");
    gets(n1);
    separate(n1);
    printf("\nPerson - 2 name : ");
    gets(n2);
    separate(n2);
    printf("\nPerson - 3 name : ");
    gets(n3);
    separate(n3);
    printf("\nPerson - 4 name : ");
    gets(n4);
    separate(n4);
    printf("\nPerson - 5 name : ");
    gets(n5);
    separate(n5);
    
    // separate(n1);
    // separate(n2);
    // separate(n3);
    // separate(n4);
    // separate(n5);
}
/*
void main()
{
    char name[30];
    for(int i=1;i<=5;i++)
    {
        printf("\nEnter Person %d's full name : ",i);
        gets(name);
        char *token = strtok(name, " ");
        while(token != NULL)
        {
            printf("%s\n",token);
            token = strtok(NULL, " ");
        }
    }
}


void main()
{
    char n1[30],n2[30],n3[30],n4[30],n5[30];
    printf("Person 1 name : ");
    gets(n1);
    printf("Person 2 name : ");
    gets(n2);
    printf("Person 3 name : ");
    gets(n3);
    printf("Person 4 name : ");
    gets(n4);
    printf("Person 5 name : ");
    gets(n5);

    char *token1 = strtok(n1, " ");
        while(token1 != NULL)
        {
            printf("%s\n",token1);
            token1 = strtok(NULL, " ");
        }
        printf("\n");
    char *token2 = strtok(n2, " ");
        while(token2 != NULL)
        {
            printf("%s\n",token2);
            token2 = strtok(NULL, " ");
        }
        printf("\n");
    char *token3 = strtok(n3, " ");
        while(token3 != NULL)
        {
            printf("%s\n",token3);
            token3 = strtok(NULL, " ");
        }
        printf("\n");
    char *token4 = strtok(n4, " ");
        while(token4 != NULL)
        {
            printf("%s\n",token4);
            token4 = strtok(NULL, " ");
        }
        printf("\n");  
    char *token5 = strtok(n5, " ");
        while(token5 != NULL)
        {
            printf("%s\n",token5);
            token5 = strtok(NULL, " ");
        }  
}
*/