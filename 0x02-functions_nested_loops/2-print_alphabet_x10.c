#include "main.h"
/**
 * print_alphabet -make the alphabet
 * Return: void
 */
void print_alphabet_x10(void)

{
	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'j'; c++)
	{
	_putchar(c);
	}

	_putchar('\n');
	i++;
	}
}
