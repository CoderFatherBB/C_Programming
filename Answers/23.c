// Read marks of 5 subjects for 5 students. Ask user the name of student whose marks to be displayed.
// Display names of students who scored more than 75% and their percentage.

#include<stdio.h>
#include<string.h>
int valid(int x, int m)
{
    while(x == 0 || m >= 100)
    {
        printf("Invalid: ");
        fflush(stdin);
        x = scanf("%d",&m); 
    }
    return m;
}
struct Info
{
    char name[30];
    int marks[5];
    float per;
};
void display(struct Info s);
void display1(struct Info s);
void main()
{
    struct Info s1,s2,s3,s4,s5;
    int i,x;
    int t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    char str[30];

    printf("Enter name of Student : ");
    scanf("%s",&s1.name);
    for (i = 0; i < 5; i++)
    {   
        printf("Marks %d : ",i+1);
        x = scanf("%d",&s1.marks[i]);
        s1.marks[i] = valid(x,s1.marks[i]);
        t1 += s1.marks[i];
    }
    s1.per = t1/5.00;
    
    printf("\nEnter name of Student : ");
    scanf("%s",&s2.name);
    for(i = 0; i < 5; i++)
    {   
        printf("Marks %d : ",i+1);
        x = scanf("%d",&s2.marks[i]);
        s2.marks[i] = valid(x,s2.marks[i]);
        t2 += s2.marks[i];
    }
    s2.per = t2/5.00;

    printf("\nEnter name of Student : ");
    scanf("%s",&s3.name);
    for (i = 0; i < 5; i++)
    {   
        printf("Marks %d : ",i+1);
        x = scanf("%d",&s3.marks[i]);
        s3.marks[i] = valid(x,s3.marks[i]);
        t3 += s3.marks[i];
    }
    s3.per = t3/5.00;

    printf("\nEnter name of Student : ");
    scanf("%s",&s4.name);
    for (i = 0; i < 5; i++)
    {   
        printf("Marks %d : ",i+1);
        x = scanf("%d",&s4.marks[i]);
        s4.marks[i] = valid(x,s4.marks[i]);
        t4 += s4.marks[i];
    }
    s4.per = t4/5.00;

    printf("\nEnter name of Student : ");
    scanf("%s",&s5.name);
    for (i = 0; i < 5; i++)
    {   
        printf("Marks %d : ",i+1);
        x = scanf("%d",&s5.marks[i]);
        s5.marks[i] = valid(x,s5.marks[i]);
        t5 += s5.marks[i];
    }
    s5.per = t5/5.00;

    printf("\nEnter the name of Student for which you would like to see the marks : ");
    scanf("%s",&str);
    if (strcmp(str, s1.name) == 0)
    {
        printf("\n");
        display(s1);
    }
    else if (strcmp(str, s2.name) == 0)
    {
        printf("\n");
        display(s2);
    }
    else if (strcmp(str, s3.name) == 0)
    {
        printf("\n");
        display(s3);
    }
    else if (strcmp(str, s4.name) == 0)
    {
        printf("\n");
        display(s4);
    }
    else if (strcmp(str, s5.name) == 0)
    {
        printf("\n");
        display(s5);
    }
    else
    {
        printf("Name not found");
    }

    printf("\n\nName and percentage of the student who scored more than 75 per :");
    if ((s1.per > 75.00) || (s2.per > 75.00) || (s3.per > 75.00) || (s4.per > 75.00) || (s5.per > 75.00))
    {
        if (s1.per > 75.00)
        {
            display1(s1);
        }
        if (s2.per > 75.00)
        {
            display1(s2);
        }
        if (s3.per > 75.00)
        {
            display1(s3);
        }
        if (s4.per > 75.00)
        {
            display1(s4);
        }   
        if (s5.per > 75.00)
        {
            display1(s5);
        }
    }
    else
    {
        printf("\nNo one has scored more than 75 per");
    }

}

void display(struct Info s)
{
    int i;
    printf("\nName of Student : %s\n",s.name);
    for (i=0; i<5; i++)
    {
        printf("Marks %d : %d\n",i+1,s.marks[i]);
    }
}
void display1(struct Info s)
{
    printf("\n %s  --  %f",s.name,s.per);
}