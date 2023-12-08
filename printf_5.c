#include "main.h"
/**
 * print_string_capi - a function that prints the string S
 * @vargs: argument
 *
 * Return: result
 */

int print_string_capi(va_list vargs)
{
	char *stg;
	int m, length = 0;
	int numbs;

	stg = va_arg(vargs, char *);
	if (stg == NULL)
		stg = "(null)";
	for (m = 0; stg[m] != '\0'; m++)
	{
		if (stg[m] < 32 || stg[m] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			numbs = stg[m];
			if (numbs < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_hexdecimal_capt(numbs);
		}
		else
		{
			_putchar(stg[m]);
			length++;
		}
	}
	return (length);
}

