#include "main.h"
/**
 * print_string - a function that prints a string
 * @vargs: the argument
 *
 * Return: length of the string.
 */

int print_string(va_list vargs)
{
	char *stg;
	int m, length;

	stg = va_arg(vargs, char *);
	if (stg == NULL)
	{
		stg = "(null)";
		length = _strlen(stg);
		for (m = 0; m < length; m++)
			_putchar(stg[m]);
		return (length);
	}
	else
	{
		length = _strlen(stg);
		for (m = 0; m < length; m++)
			_putchar(stg[m]);
		return (length);
	}
}

