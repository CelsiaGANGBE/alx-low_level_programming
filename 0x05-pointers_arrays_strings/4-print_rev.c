#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: character tobe process
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
		;

	for (j = i-1; j >= 0; j++)
		_putchar(s[j]);
	_putchar('\n');
}
