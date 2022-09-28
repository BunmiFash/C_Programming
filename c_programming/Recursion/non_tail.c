#include <stdio.h>

/**
* func - Non-tail recursive function
* @n: Integer
* Return: 0 on completion
*/

int func(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (1 + func(n / 2));
	}
}

/**
* main - calls func()
* Return: 0
*/

int main(void)
{
	printf("%d\n", func(8));
	return (0);
}
