// Write program to store person name, account number and balance of 5 persons in file. Allow
// them to perform withdraw and deposit amount in their account.

#include<stdio.h>
struct Info
{
    char name[20];
    long acc_no;
    float balance;
};
void display(struct Info s);
void main()
{
    FILE *try;
    struct Info p1,p2,p3,p4,p5,p[5];
    int i;
    int ch;
    float amount = 0;

    if ((try = fopen("sample.txt","w")) == NULL)
    {
        printf("Unable to open");
    }

    for (i = 0; i < 2; i++)
    {
        printf("\nEnter person's name : ");
        scanf("%s",&p[i].name);
        printf("Enter account number : ");
        scanf("%ld",&p[i].acc_no);
        printf("Enter balance : ");
        scanf("%f",&p[i].balance);
        printf("\nDo you want to \n  1.Withdraw\n  2.Deposit\n  : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                printf("Enter amount you want withdraw : ");
                scanf("%f",&amount);
                p[i].balance -= amount;
                break;
            case 2:
                printf("Enter amount you want withdraw : ");
                scanf("%f",&amount);
                p[i].balance += amount;
                break;
            default:
                break;
        }
    }
    for (i = 0; i < 2; i++)
    {
        display(p[i]);
    }
}
void display(struct Info s)
{
    FILE *try;
    if ((try = fopen("sample.txt","a")) == NULL)
    {
        printf("Unable to open");
    }

    fprintf(try,"\n\nName : %s",s.name);
    fprintf(try,"\nAccount no. : %ld",s.acc_no);
    fprintf(try,"\nBalance : %f",s.balance);
    fclose(try);
}
