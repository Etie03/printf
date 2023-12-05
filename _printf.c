#include "main.h"

void prnt_buffer(char buffer[], int *buff_ind);

/**
 * _printf - My Printf function
 * @format: format string
 *
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	int q, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (q = 0; format && format[q] != '\0'; q++)
	{
		if (format[q] != '%')
		{
			buffer[buff_ind++] = format[q];
			if (buff_ind == BUFF_SIZE)
				prnt_buffer(buffer, &buff_ind);
			/* write(1, &format[q], 1);*/
			printed_chars++;
		}
		else
		{
			prnt_buffer(buffer, &buff_ind);
			flags = get_flags(format, &q);
			width = get_width(format, &q, list);
			precision = get_precision(format, &q, list);
			size = get_size(format, &q);
			++q;
			printed = handle_print(format, &q, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	prnt_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/**
 * prnt_buffer - A function that Prints the contents ofabuffer
 * @buffer: Array
 * @buff_ind: represents the length.
 */
void prnt_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}


