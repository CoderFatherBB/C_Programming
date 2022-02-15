//To calculate Simple and compound interest for given amount and given duration

#include <stdio.h>
#include<math.h>
int main()
{
    float principle, time, rate, SI,CI;

    printf("Enter principle (amount): ");
    scanf("%f", &principle);
    printf("Enter time: ");
    scanf("%f", &time);
    printf("Enter rate: ");
    scanf("%f", &rate);

    SI = (principle * time * rate) / 100;
    printf("Simple Interest = %f", SI);

    CI = principle*pow(1+(rate/100),time)-principle;
    printf("\nCompound Interest = %f", CI);

    return 0;
}