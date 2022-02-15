//Area of Triangle,Square,Rectangle

#include<stdio.h>
void main()
{
    int ch,side,base,height,lenght,breath;
    float area;
    //clrscr();
    printf("Whose area you want to find : \n1.Triangle\n2.Square\n3.Rectangle\n");
    scanf("%d",&ch);

    if (ch == 1)
    {
        printf("Enter base : ");
        scanf("%d",&base);
        printf("Enter height : ");
        scanf("%d",&height);
        area = 0.5*base*height;
        printf("Area of triangle : %f",area);
    }
    else if (ch == 2)
    {
        printf("Enter side : ");
        scanf("%d",&side);
        area = side*side;
        printf("Area of square  : %f",area);
    }
    else if (ch == 3)
    {
        printf("Enter length : ");
        scanf("%d",&lenght);
        printf("Enter breath : ");
        scanf("%d",&breath);
        area = lenght*breath;
        printf("Area of rectangle : %f",area);
    }
    else
        printf("Wrong Function");

    getch();
}