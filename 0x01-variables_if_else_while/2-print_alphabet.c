#include <stdio.h>

/*
 * main - Entry point
 * Description: print alphabetic letter
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
