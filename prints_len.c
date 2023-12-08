#include "main.h"

/**
 * _strlen - a function that finds the length of a string
 * @stg: the string
 *
 * Return: length
 */

int _strlen(char *stg)
{
	int m;

	for (m = 0; stg[m] != 0; m++)
		;
	return (m);

}

/**
 * _strlenc - a function that finds the length of a
 * string for constant characters
 * @stg: the string
 *
 * Return: length
 */

int _strlenc(const char *stg)
{
	int m;

	for (m = 0; stg[m] != 0; m++)
		;
	return (m);
}
