#include<stdio.h>
/**
 * main - Start point
 * Description: 'Prints alphabet'
 * Return: always return 0 (success)
 */
int main(void)
{
	int n = 97;

	while(n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar ('\n');
	return (0);
}
