#include "main.h"

/**
 * _printf - custom printf function that produces output
 * @format: The format specifier
 *
 * Return: The number of characters printed
 * excluding the null byte used to end output to strings
 */

int _printf(const char *format, ...)
{
	verse p[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_percntg},
		{"%i", print_intg}, {"%d", print_deciml}, {"%r", print_rvrsd_string},
		{"%R", print_rot13_string}, {"%b", print_binry},
		{"%u", print_unsigndint},
		{"%o", print_octal}, {"%x", print_hexadec}, {"%X", print_hexadecimal},
		{"%S", print_string_capi}, {"%p", print_p}
	};

	va_list args;
	int m = 0, g, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Where:
	while (format[m] != '\0')
	{
		g = 13;
		while (g >= 0)
		{
			if (p[g].n[0] == format[m] && p[g].n[1] == format[m + 1])
			{
				length += p[g].f(args);
				m = m + 2;
				goto Where;
			}
			g--;
		}
		_putchar(format[m]);
		length++;
		m++;
	}
	va_end(args);
	return (length);
}
