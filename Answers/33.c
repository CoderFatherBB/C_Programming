// Write program to store roll no, name and marks of 5 subjects for 5 students in file. Display all the
// information along with total marks and percentage.

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
    int roll;
    char name[30];
    int marks[5];
    int total;
    float per;
};
void display(struct Info s);
void main()
{
    FILE *try;
    struct Info s1,s2,s3,s4,s5;
    int i,x;

    if ((try = fopen("Detail.txt","w")) == NULL)
    {
        printf("Unable to open");
    }

    printf("\nEnter Roll No. of student : ");
    scanf("%d",&s1.roll);
    printf("Enter name of Student : ");
    scanf("%s",&s1.name);
    s1.total = 0;
    for (i = 0; i < 5; i++)
    {   
        printf("Marks %d : ",i+1);
        x = scanf("%d",&s1.marks[i]);
        s1.marks[i] = valid(x,s1.marks[i]);
        s1.total += s1.marks[i];
    }
    s1.per = s1.total/5.00;
    
    printf("\nEnter Roll No. of student : ");
    scanf("%d",&s2.roll);
    printf("Enter name of Student : ");
    scanf("%s",&s2.name);
    s2.total = 0;
    for(i = 0; i < 5; i++)
    {   
        printf("Marks %d : ",i+1);
        x = scanf("%d",&s2.marks[i]);
        s2.marks[i] = valid(x,s2.marks[i]);
        s2.total += s2.marks[i];
    }
    s2.per = s2.total/5.00;

    printf("\nEnter Roll No. of student : ");
    scanf("%d",&s3.roll);
    printf("Enter name of Student : ");
    scanf("%s",&s3.name);
    s3.total = 0;
    for (i = 0; i < 5; i++)
    {   
        printf("Marks %d : ",i+1);
        x = scanf("%d",&s3.marks[i]);
        s3.marks[i] = valid(x,s3.marks[i]);
        s3.total += s3.marks[i];
    }
    s3.per = s3.total/5.00;

    printf("\nEnter Roll No. of student : ");
    scanf("%d",&s4.roll);
    printf("Enter name of Student : ");
    scanf("%s",&s4.name);
    s4.total = 0;
    for (i = 0; i < 5; i++)
    {   
        printf("Marks %d : ",i+1);
        x = scanf("%d",&s4.marks[i]);
        s4.marks[i] = valid(x,s4.marks[i]);
        s4.total += s4.marks[i];
    }
    s4.per = s4.total/5.00;

    printf("\nEnter Roll No. of student : ");
    scanf("%d",&s5.roll);
    printf("Enter name of Student : ");
    scanf("%s",&s5.name);
    s5.total = 0;
    for (i = 0; i < 5; i++)
    {   
        printf("Marks %d : ",i+1);
        x = scanf("%d",&s5.marks[i]);
        s5.marks[i] = valid(x,s5.marks[i]);
        s5.total += s5.marks[i];
    }
    s5.per = s5.total/5.00;

    display(s1);
    display(s2);
    display(s3);
    display(s4);
    display(s5);
}

void display(struct Info s)
{
    FILE *try;
    
    if ((try = fopen("Detail.txt","a")) == NULL)
    {
        printf("Unable to open");
    }
    
    int i;
    fprintf(try,"\n\nRoll No. of student : %d",s.roll);
    fprintf(try,"\nName of Student : %s\n",s.name);
    for (i=0; i<5; i++)
    {
        fprintf(try,"Marks %d : %d\n",i+1,s.marks[i]);
    }
    fprintf(try,"Total marks : %d",s.total);
    fprintf(try,"\nPercentage : %f",s.per);
}
