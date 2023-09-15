#include "main.h"
#include <unistd.h>

/**
 * _putchar - check the code
 *@c: the number to be checked
 * Return: Always 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
