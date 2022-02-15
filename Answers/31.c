// Write program to count repetition of character in a string and display a character and its count having maximum repetition.
#include<stdio.h>
#include<string.h>
#define ASCII_SIZE 256

char getMaxOccuringChar(char* str)
{
	int count[ASCII_SIZE] = {0};
	int len = strlen(str);
	int max = 0; 
	char result; 
	for (int i = 0; i < len; i++) {
		count[str[i]]++;
		if (max < count[str[i]]) {
			max = count[str[i]];
			result = str[i];
		}
	}
   	printf("It occure %d times & ",max);
	return result;
}
char *remove_spaces(char *str)
{
	int i = 0, j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
          str[j++] = str[i];
		i++;
	}
	str[j] = '\0';
	return str;
}
void main()
{
	char str[100];
    printf("Enter the string : ");
    gets(str);
	remove_spaces(str);
	strlwr(str);
	printf("Max occurring character is : %c",getMaxOccuringChar(str));
}