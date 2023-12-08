#include "main.h"

/**
 * print_binry - a function that prints a binary number
 * @vargs: the parameter
 *
 * Return: the number
 */
int print_binry(va_list vargs)
{
	int flag = 0;
	int cont = 0;
	int m, g = 1, h;
	unsigned int num = va_arg(vargs, unsigned int);
	unsigned int k;

	for (m = 0; m < 32; m++)
	{
		k = ((g << (31 - m)) & num);
		if (k >> (31 - m))
			flag = 1;
		if (flag)
		{
			h = k >> (31 - m);
			_putchar(h + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}

