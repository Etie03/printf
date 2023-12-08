#include "main.h"

/**
 * print_char - a function that prints a charater
 * @vargs: the argument
 *
 * Return: result
 */
int print_char(va_list vargs)
{
	char stg;

	stg = va_arg(vargs, int);
	_putchar(stg);
	return (1);
}
