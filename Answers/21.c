// Write program to read and display names of 5 persons. Separate name, middle name and last
// name of each person and display.

#include<stdio.h>
#include<string.h>
/*
char name(char name[30])
{
    printf("\nEnter your full name : ");
    gets(name);
    return name;
}
char separate(char name[30])
{
    char *token = strtok(name, " ");
    while(token != NULL)
    {
        printf("%s\n",token);
        token = strtok(NULL, " ");
    }
    return 0;
}
void main()
{
    char n1[30],n2[30],n3[30],n4[30],n5[30];
    name(n1[30]);
    name(n2[30]);
    name(n3[30]);
    name(n4[30]);
    name(n5[30]);
    separate(n1[30]);
    separate(n2[30]);
    separate(n3[30]);
    separate(n4[30]);
    separate(n5[30]);
}
*/
void main()
{
    char name[30];
    for(int i=1;i<=5;i++)
    {
        printf("\nEnter your full name : ");
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
    printf("person1 name : ");
    gets(n1);
    printf("person2 name : ");
    gets(n2);
    printf("person3 name : ");
    gets(n3);
    printf("person4 name : ");
    gets(n4);
    printf("person5 name : ");
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
