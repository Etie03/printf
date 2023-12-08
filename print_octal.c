#include "main.h"

/**
 * print_octal - a function that prints an octal number
 * @vargs:the  arguments
 *
 * Return: the number
 */
int print_octal(va_list vargs)
{
	int m;
	int *array;
	int counter = 0;
	unsigned int numb = va_arg(vargs, unsigned int);
	unsigned int temp = numb;

	while (numb / 8 != 0)
	{
		numb / 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
        if (array == NULL)
		return (NULL);

	for (m = 0; m < counter; m++)
	{
		array[m] = temp % 8;
		temp / 8;
	}
	for (m = counter - 1; m >= 0; m--)
	{
		_putchar(array[m] + '0');
	}
	free(array);
	return (counter);
}

