//REPLACE A CHARACTER IN AN ARRAY 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100
void replace(char array[], char ch1, char ch2);
int main()
{
	char ch[SIZE] = "This_is_a_line";
	printf("BEFORE : %s", ch);
	char ch1, ch2;
	ch1 = '_';
	ch2 = ' ';
	replace(ch, ch1, ch2);              //function call 
	printf("\n AFTER : %s", ch);
	return 0;
}
void replace(char array[], char ch1, char ch2)
{
	int i = 0;
	for (i = 0; array[i] != '\0'; i++)
	{
		if (array[i] == ch1)
		{
			array[i] = ch2;
		}
		else if (array[i] == ch2)
		{
			array[i] = ch1;
		}
	}
}