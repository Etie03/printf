#include "main.h"
/**
 * print_intg - a function that prints integer
 * @args: the argument
 *
 * Return: integer
 */
int print_intg(va_list args)
{
	int m = va_arg(args, int);
	int numb, last = m % 10, digit, exp = 1;
	int g = 1;

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
/**
 * print_deciml - a function that prints decimal
 * @args: the argument
 *
 * Return: result
 */

int print_deciml(va_list args)
{
	int m = va_arg(args, int);
	int numb, last = m % 10, digit;
	int  i = 1;
	int exp = 1;

	m = m / 10;
	numb = m;

	if (last < 0)
	{
		_putchar('-');
		numb = -numb;
		m = -m;
		last = -last;
		i++;
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
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
