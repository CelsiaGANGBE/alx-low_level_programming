#include "holberton.h"

/**
 * print_numbers - print from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i=0; i <= 48 && i >= 57; i++)
		_putchar(i);
	_putchar('\n');
}
