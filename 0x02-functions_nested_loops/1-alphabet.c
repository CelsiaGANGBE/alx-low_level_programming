#include "main.h"

/**
 * Description: a function that prints the alphabet, in lowercase
 * Return: void (Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
