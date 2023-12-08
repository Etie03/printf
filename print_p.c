#include "main.h"

/**
 * print_p - a function that prints a conversion specifier p
 * @vargs: the argument
 *
 * Return: resullt
 */
int print_p(va_list vargs)
{
	void *p;
	char *stg = "(nil)";
	long int h;
	int g;
	int m;

	p = va_arg(vargs, void*);
	if (p == NULL)
	{
		for (m = 0; stg[m] != '\0'; m++)
		{
			_putchar(stg[m]);
		}
		return (m);
	}

	h = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	g = print_hexadecimal2_capt(h);
	return (g + 2);
}
