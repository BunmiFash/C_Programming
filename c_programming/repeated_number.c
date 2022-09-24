#include "main.h"
#include <stdio.h>

/**
* repeated_digit - Checks if a digit in a number is repeated
* @N: Number to be checked for repeated digits.
* Return: void
*/

void repeated_digit(int N)
{
	int if_seen[10] = {0};

	while (N > 0)
	{
		int last_digit = N % 10;

		if (if_seen[last_digit] == 1)
		{
			printf("Digits repeated");
			break;
		}
		else
		{
			if_seen[last_digit] = 1;
		}

		N = N / 10;
	}

	if (N == 0)
	{
		printf("No digit repeated");
	}
}

/**
* main - calls repeated_digit()
* Return: Always 0 (Success)
*/

int main(void)
{
	int N;

	printf("Enter atleast two digit number below:\n");
	scanf("%d", &N);
	repeated_digit(N);

	return (0);
}
