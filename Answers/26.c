// Write program to count number of words in a string

#include <stdio.h>
#include <string.h>
void main()
{
  	char str[100];
  	int i, words = 1;
    // i = 1 // for while loop
    printf("\n Please Enter any String :  ");
  	gets(str);
  	// while(str[i] != '\0') 	   	
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			words++;	
		} 
        // i++;
	}	
	printf("\n The Total Number of Words in this String : %d",words);
}