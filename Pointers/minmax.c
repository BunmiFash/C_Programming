#include <stdio.h>

/**
* min_max - determines the minimum and maximum values of array
*
* @arr: Array
*
* @len: Length of the array
*
* @max: Maximun value
*
* @min: Minimum value
*
* Return: Minimun and maximum values
*/

int min_max(int arr[], int len, int *min, int *max)
{
	*min = *max = arr[0];

	int i;

	for (i = 1; i < len; i++)
	{
		if (arr[i] < *min)
		{
			*min = arr[i];
		}
		else if (arr[i] > *max)
		{
			*max = arr[i];
		}
	}
}

/**
* main - calls min_max()
*
* Return: 0
*/

int main(void)
{
	int arr[] = {10, 8, 2, 98, 100, 50};

	int len = sizeof(arr) / sizeof(arr[0]);

	int max, min;

	min_max(arr, len, &min, &max);

	printf("%d\n", min);
	printf("%d\n", max);

	return (0);
}
