#include "main.h"

/**
 * print_hexdecimal_capt - a function that prints hexadecimal number
 * @numb: the integer
 *
 * Return: the number
 */
int print_hexdecimal_capt(unsigned int numb)
{
	int m;
	int *array;
	int counter = 0;
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
			array[m] = array[m] + 7;
		_putchar(array[m] + '0');
	}
	free(array);
	return (counter);
}
