#include "main.h"

/**
 * _printf - My Printf function that produces output
 * @format: format string
 *
 * Return: number of chars printed
 */

int _printf(const char *format, ...)
{

	va_list args;
	int length = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			length = selector(format, args, length);
			format++;
		}
		else
		{
			_putchar(*format);
			length++;
			format++;
		}
	}
	va_end(args);
	return (length);
}
