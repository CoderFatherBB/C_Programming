//Run Rate

#include<stdio.h>
void main()
{
	int score,i,ts=0;
	float tr;
	//clrscr();
	for(i=1;i<12;i++)
	{
		printf("Player no. : %d\t-- Score : ",i);
		scanf("%d", &score);
		ts+=score;
	}
	printf("\nTotale Score : %d",ts);
	tr=ts/20.00;
	printf("\nTotale Run Rate : %f",tr);
	getch();
}