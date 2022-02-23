// Write program to count alphabet, numbers and special characters in a string

#include <stdio.h>
#include<string.h>
void main()
{
  	char str[100];
  	int i, alphabets, digits, special, space;
  	i = alphabets = digits = special = space = 0;
 
  	printf("\nPlease Enter any String : ");
  	gets(str);
  	
  	while (str[i] != '\0')
  	{
  		if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
  		{
  			alphabets++;  	
 		}
  		else if (str[i] >= '0' && str[i] <= '9')
  		{
  			digits++;  	
  		}    
		else if (str[i] == ' ')
		{
			space++;
		}
  		else
        {
            special++;
        }
    	i++;
	}
    printf("\nNumber of Alphabets in this String = %d", alphabets);  
	printf("\nNumber of Digits in this String = %d", digits);  
	printf("\nNumber of Special Characters in this String = %d", special);
	printf("\nNumber of Spaces in this Strinh is = %d",space);
}