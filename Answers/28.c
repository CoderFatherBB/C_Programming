// Write program to read string from user and convert all characters to upper case and then display
// that string.

#include<stdio.h>
#include<string.h>
/*
void main()
{
    char str[30];
    printf("Enter your string : ");
    gets(str);
    strupr(str);
    printf("Your string in Upper case : %s",str);
}
*/
void main()
{
  	char str[30];
  	int i;
    // i = 0 // for while loop
    printf("Enter your String : ");
  	gets(str);
  	// while (str[i] != '\0')
    for (i = 0; str[i]!='\0'; i++)
    {
  		if(str[i] >= 'a' && str[i] <= 'z') // if(str[i] >= 97 && str[i] <= 122)
  		{
  			str[i] = str[i] - 32;
		}
        // i++;
  	}
    printf("Your string in Upper case : %s", str);  	
}