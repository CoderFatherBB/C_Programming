/*
Write program for shopping mall, on purchase of 5 items, 
if total amount is >1000 but <3000 then 5% discount
if total amount is >3000 but <5000 then 10% discount
if total amount is >5000 but <7000 then 12% discount
if total amount is >7000 then 15% discount
if total amount is >10000 then additional voucher of 1000 Rs
*/

#include<stdio.h>
void main()
{
    int x,ans;
    float discount,total,amount;
    
    printf("Welcome sir/mam,\nTo INOX Shopping Mall.");
    printf("Enter you total amount of 5 items\n(minimum upto 1000)(maximum limit upto 15000) : ");
    x = scanf("%f",&total);
    while (x == 0 || total  > 15000.00 || total < 1000.00)
    {
        printf("Enter valid amount : ");
        fflush(stdin);
        x = scanf("%f",&total);
    }
    if (total > 10000.00)
    {
        printf("\n\nAs your amount is above 10000.\nAs our mall policy you get 15-persent discount and additional voucher of 1000 Rs");
        discount = total-(total*0.15);
        printf("\nWhould you like to use you 1000 Rs voucher here\n1.Yes\n2.No\n(1 or 2) : ");
        x = scanf("%d",&ans);
        while (x == 0)
        {
            printf("Enter a valid input : ");
            fflush(stdin);
            x = scanf("%d",&ans);
        }
        if (ans == 1)
        {
            amount = discount - 1000.00;
            printf("\nYour total amount is : %f",amount);
        }
        else if (ans == 2)
        {
            printf("\nYour discounted amount is %f",discount);
        }
        /*
        while (ans != 'yes' || ans != 'Yes' || ans != 'no' || ans != 'No')
        {
            printf("Enter a valid answer : ");
            fflush(stdin);
            scanf("%s",ans);
            if (ans == 'yes' || ans == 'Yes')
            {
                amount = discount - 1000.00;
                printf("Your total amount is : %f",amount);
            }
            else if (ans == 'no' || ans == 'No')
            {
                printf("Your discounted amount is %f",discount);
            }
        }
        */
        
    }
    else if (total > 7000.00)
    {
        printf("\n\nAs your amount is above 7000.\nAs our mall policy you get 15-percent discount");
        discount = total-(total*0.15);
        printf("\nYour discounted amount is %f",discount);
    }
    else if (total > 5000.00 && total < 7000.00)
    {
        printf("\n\nAs your amount is above 5000 and less than 7000.\nAs our mall policy you get 12-percent discount");
        discount = total-(total*0.12);
        printf("\nYour discounted amount is %f",discount);
    }
    else if (total > 3000.00 && total < 5000.00)
    {
        printf("\n\nAs your amount is above 3000 and less than 5000.\nAs our mall policy you get 10-percent discount");
        discount = total-(total*0.1);
        printf("\nYour discounted amount is %f",discount);
    }
    else if (total > 1000.00 && total < 3000.00)
    {
        printf("\n\nAs your amount is above 1000 and less than 3000.\nAs our mall policy you get 5-percent discount");
        discount = total-(total*0.05);
        printf("\nYour discounted amount is %f",discount);
    }
}