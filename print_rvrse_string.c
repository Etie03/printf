#include "main.h"

/**
 * print_rvrsd_string - a function that  prints the reversed string
 * @vargs: arguments
 *
 * Return: the reversed string
 */
int print_rvrsd_string(va_list vargs)
{

	char *stg = va_arg(vargs, char*);
	int m;
	int g = 0;

	if (stg == NULL)
		stg = "(null)";
	while (stg[g] != '\0')
		g++;
	for (m = g - 1; m >= 0; m--)
		_putchar(stg[m]);
	return (g);
}
