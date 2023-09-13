#include "main.h"
/**
 * main - Entry point
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line
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
