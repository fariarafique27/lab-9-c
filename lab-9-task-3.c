// Task_03_caesar cipher

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 100
int check(char c);
int isValid(int a);
void function(char c[], int k);
int main()
{
	char input[SIZE];
	int k = 0;
	printf(" Enter a sting of alphabets : ");
	scanf("%s", input);

	printf("Please enter key number : ");
	scanf("%d", &k);
	k = isValid(k);

	function(input, k);
	printf("RESULT : %s", input);
	return 0;
}
int isValid(int a)
{
	while (a < 0)
	{
		printf("INVALID.....Enter key again : ");
		scanf("%d", &a);
	}
	return a;
}
int check(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 0;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}
}
void function(char c[], int k)
{
	int a = 0, b = -1;
	for (int i = 0; c[i] != '\0'; i++)
	{
		b = check(c[i]);
		if (b == 0)
		{
			if (c[i] + k <= 122)
			{
				c[i] = c[i] + k;
			}
			else if (c[i] + k > 122)
			{
				a = ((c[i] + k)-122);
				c[i] = a + 96;
			}
		}
		else if (b == 1)
		{
			{
				if (c[i] + k <= 90)
				{
					c[i] = c[i] + k;
				}
				else if (c[i] + k > 90)
				{
					a = ((c[i] + k)-90);
					c[i] = a + 64;
				}
			}
		}
	}
}
