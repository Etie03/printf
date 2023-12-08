#include "main.h"
/**
 * print_unsigndint - a function that prints unsigned integer
 * @args: the argument
 *
 * Return: the unsigned integer
 */
int print_unsigndint(va_list args)
{
	int m = va_arg(args, int);
	int numb, last = m % 10, digit, exp = 1;
	int  g = 1;

	m = m / 10;
	numb = m;

	if (last < 0)
	{
		_putchar('-');
		numb = -numb;
		m = -m;
		last = -last;
		g++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			exp = exp * 10;
			numb = numb / 10;
		}
		numb = m;
		while (exp > 0)
		{
			digit = numb / exp;
			_putchar(digit + '0');
			numb = numb - (digit * exp);
			exp = exp / 10;
			g++;
		}
	}
	_putchar(last + '0');

	return (g);
}
