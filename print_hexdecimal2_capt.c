#include "main.h"

/**
 * print_hexadecimal2_capt - a function that prints hexadecimal number
 * @numb: the integer
 *
 * Return: the number
 */
int print_hexadecimal2_capt(unsigned long int numb)
{
	long int m;
	long int *array;
	long int counter = 0;
	unsigned long int temp = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (m = 0; m < counter; m++)
	{
		array[m] = temp % 16;
		temp /= 16;
	}
	for (m = counter - 1; m >= 0; m--)
	{
		if (array[m] > 9)
			array[m] = array[m] + 39;
		_putchar(array[m] + '0');
	}
	free(array);
	return (counter);
}
