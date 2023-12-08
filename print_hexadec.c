#include "main.h"

/**
 * print_hexadec - a function that prints hexadecimal number
 * @vargs: the argument
 *
 * Return: the number
 */
int print_hexadec(va_list vargs)
{
	int m;
	int *array;
	int counter = 0;
	unsigned int numb = va_arg(vargs, unsigned int);
	unsigned int temp = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (m = 0; m < counter; m++)
	{
		array[m] = temp % 16;
		temp /= 16;
	}
	for (m = counter - 1; m >= 0; m--)
	{
		if (array[m] > 9)
			array[m] = array[m] + 32;
		_putchar(array[m] + '0');
	}
	free(array);
	return (counter);
}
