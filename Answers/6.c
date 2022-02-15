/*
Display list of 5 grocery items a person purchased.
First item is having discount of 2%. 
Second item is having discount 3%. 
Third item is having discount of 5%. 
Fourth item i shaving discount 7%. 
Fifth item is having discount of 10%. 
Calculate cost of each item and total amount person has to pay. 
You can decide price of each item.
*/

#include<stdio.h>
void main()
{
    char l1[20],l2[20],l3[20],l4[20],l5[20];
    float t1,t2,t3,t4,t5;
    float p1,p2,p3,p4,p5;
    float total;
    int x;
    
    printf("Respected Sir/Mam,\nEnter all the 5 items you purchased : \n");
    scanf("%s%s%s%s%s",&l1,&l2,&l3,&l4,&l5);
    printf("\nEnter amount :\n1.%s - ",l1);
    x = scanf("%f",&t1);
    while (x == 0)
    {
        printf("Enter valid no.: ");
        fflush(stdin);
        x = scanf("%f",&t1);
    }
    printf("2.%s - ",l2);
    x = scanf("%f",&t2);
    while (x == 0)
    {
        printf("Enter valid no.: ");
        fflush(stdin);
        x = scanf("%f",&t2);
    }
    printf("3.%s - ",l3);
    x = scanf("%f",&t3);
    while (x == 0)
    {
        printf("Enter valid no.: ");
        fflush(stdin);
        x = scanf("%f",&t3);
    }
    printf("4.%s - ",l4);
    x = scanf("%f",&t4);
    while (x == 0)
    {
        printf("Enter valid no.: ");
        fflush(stdin);
        x = scanf("%f",&t4);
    }
    printf("5.%s - ",l5);
    x = scanf("%f",&t5);
    while (x == 0)
    {
        printf("Enter valid no.: ");
        fflush(stdin);
        x = scanf("%f",&t5);
    }
    printf("\n\nAs you are the lucky person today you get special discount of");
    printf("\n1.%s - 2 percent\n2.%s - 3 percent\n3.%s - 5 percent\n4.%s - 7 percent\n5.%s - 10 percent ",l1,l2,l3,l4,l5);
    p1 = t1-(t1*0.02);
    p2 = t2-(t2*0.03);
    p3 = t3-(t3*0.05);
    p4 = t4-(t4*0.07);
    p5 = t5-(t5*0.1);
    printf("\n\nTherefore your Total is - \n1.%s - %f\n2.%s - %f\n3.%s - %f\n4.%s - %f\n5.%s - %f",l1,p1,l2,p2,l3,p3,l4,p4,l5,p5);
    total = (p1+p2+p3+p4+p5);
    printf("\n\nTotal : %f",total);
    getch();
}