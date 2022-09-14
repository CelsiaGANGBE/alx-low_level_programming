#include "main.h"

/**
 * _islower -  a function that checks for lowercase character
 * @c: the caracter to be checked
 * Description:  a function that checks for lowercase characte
 * Return: 1 if character is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' &&   c <= 'z')
		return (1);
	else
		return (0);

}
