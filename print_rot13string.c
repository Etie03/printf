#include "main.h"
/**
 * print_rot13_string - a function that prints the rot13'ed string
 * @vargs: arguments
 *
 * Return: the string
 *
 */
int print_rot13_string(va_list vargs)
{
	int m, p, counter = 0;
	int g = 0;
	char *stg = va_arg(vargs, char*);
	char ab[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char ma[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (stg == NULL)
		stg = "(null)";
	for (m = 0; stg[m]; m++)
	{
		g = 0;
		for (p = 0; ab[p] && !g; p++)
		{
			if (stg[m] == ab[p])
			{
				_putchar(ma[p]);
				counter++;
				g = 1;
			}
		}
		if (!g)
		{
			_putchar(stg[m]);
			counter++;
		}
	}
	return (counter);
}

