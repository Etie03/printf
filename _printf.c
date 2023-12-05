#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - my printf function
 * @format: The format string
 *
 * Return: number of chars
 */

int _printf(const char *format, ...)
{
	va_list args;
	int number = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	number = _print_format(format, args);
	va_end(args);
	return (number);
}
