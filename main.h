#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct format - struct format for printf
 * @n: type conversion specifier
 * @f: function pointer
 *
 */

typedef struct format
{
	char *n;
	int (*f)();
} verse;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list vargs);
int print_string(va_list vargs);
int _strlen(char *stg);
int _strlenc(const char *stg);
int print_percntg(void);
int print_intg(va_list args);
int print_deciml(va_list args);
int print_binry(va_list vargs);
int print_unsigndint(va_list args);
int print_octal(va_list vargs);
int print_hexadec(va_list vargs);
int print_hexadecimal(va_list vargs);
int print_string_capi(va_list vargs);
int print_hexdecimal_capt(unsigned int numb);
int print_hexadecimal2_capt(unsigned long int numb);
int print_p(va_list vargs);
int print_rvrsd_string(va_list vargs);
int print_rot13_string(va_list vargs);

#endif
