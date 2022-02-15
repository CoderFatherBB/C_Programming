/*
write program for parking
if vehile is 2 wheeler
	for 1 hr 2rs
	for 5 hr 5rs
	for 1 day 10rs
if 4 wheeler
	for 1 hr 5rs
	for 5 hr 20rs
	for 1 day 100rs
( For 7 Hr 2 Wheeler amount is 5Rs + 4RS = 9Rs)
*/

#include<stdio.h>
void main()
{
	int time,ch,x,i;
	float amount;
	
    printf("Welcome sir/mam,\tTo INOX Parking.");
	printf("\nEnter 1 if vehicle is 2-wheeler");
	printf("\nEnter 2 if vehicle is 4-wheeler\n : ");
	x = scanf("%d",&ch);
	while (x == 0 || ch < 0 || ch > 2)
	{
		printf("Enter a valid no. : ");
		fflush(stdin);
		x = scanf("%d",&ch);
	}
    switch (ch)
	{
		case 1:
			printf("\nEnter time in hours for which vehicle is parked : ");
			x = scanf("%d",&time);
			while (x == 0)
			{
				printf("Enter a valid no. : ");
				fflush(stdin);
				x = scanf("%d",&time);
			}
			if(time < 5)
			{
				amount = time*2;
			}
			else if(time%5 == 0)
			{
	 			amount = time;
			}
			else if(time > 5 && time < 24)
			{
				for(i=1;i<=4;i++)
				{
					time = time - 5;
					amount = (i*5) + (time*2);
					if(time < 5)
					{
						break;
					}
				}
			}
			else if(time%24 == 0)
			{
				time = time/24;
				amount = time*10;
			}
			else if(time > 24)
			{
				printf("Not allowed to park you vehicle over 24 hours.");
			}
			printf("\nTotal amount is : %f",amount);
			break;
		
		case 2:
			printf("\nEnter time in hours for which vehicle is parked : ");
			x = scanf("%d",&time);
			while (x == 0)
			{
				printf("Enter a valid no. : ");
				fflush(stdin);
				x = scanf("%d",&time);
			}
			if(time < 5)
			{
				amount = time*5;
			}
			else if(time%5 == 0)
			{
				amount = time*4;
			}
			else if(time > 5 && time < 24)
			{
				for(i=1;i<=4;i++)
				{
					time = time - 5;
					amount = (i*20) + (time*5);
					if(time < 5)
					{
						break;
					}
				}
			}
			else if(time%24 == 0)
			{
				time = time/24;
				amount = time*100;
			}
			else if(time > 24)
			{
				printf("Not allowed to park you vehicle over 24 hours.");
			}
			printf("\nTotal amount is : %f",amount);
			break;
		
		default:
			printf("Invalid input.");
			break;
	}

	getch();
}