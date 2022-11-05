//COUNT NUMBER OF DIGIT AND CHARACTERS IN AN ARRAY


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100
void charCount(char array[]);
int main()
{

	char array[SIZE];
	printf("Enter any array : ");
	scanf("%s", array);
	charCount(array);
	return 0;
}
void charCount(char array[])
{
	int alphabet = 0, digits = 0;
	int i = 0;
	for (i = 0; array[i] != '\0'; i++) {

		if (array[i] >= 'a' && array[i] <= 'z')
		{
			alphabet++;
		}
		else if (array[i] >= '0' && array[i] <= '9')
		{
			digits++;
		}
	}
	
	printf("There are %d alphabet ", alphabet);
	printf("\nThere are %d digits ", digits);

}