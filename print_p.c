#include "main.h"

/**
 * print_p - a function that prints a conversion specifier p
 * @vargs: the argument
 *
 * Return: resullt
 */
int print_p(va_list vargs)
{
	void *f;
	char *stg = "(nil)";
	long int h;
	int g;
	int m;

	f = va_arg(vargs, void*);
	if (f == NULL)
	{
		for (m = 0; stg[m] != '\0'; m++)
		{
			_putchar(stg[m]);
		}
		return (m);
	}

	h = (unsigned long int)f;
	_putchar('0');
	_putchar('x');
	g = print_hexadecimal2_capt(h);
	return (g + 2);
}
