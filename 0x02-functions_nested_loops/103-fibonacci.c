#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
  * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, m, next, sum;

	j = 1;
	m = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + m;
		j = m;
		m = next;
	}

	printf("%lu\n", sum);

	return (0);
}
