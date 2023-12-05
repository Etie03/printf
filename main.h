#ifndef main_h
#define main_h
#include <stdarg.h>

/**
  * struct specifiers - The struct specifier
  * @specifier: The format specifier
  * @f: function pointer
  */
typedef struct specifiers
{
	char *specifier;
	int (*f)(va_list args);
} spec_dt;

int _write(char c);
int _printf(const char *format, ...);
int _print_a_char(va_list args);
int _print_a_string(va_list args);
int _print_format(const char *format, va_list args);
int _print_spec(char format, va_list args);
int _print_invalid_spec(char prev_format, char format, int count);
int _print_a_integer(va_list args);
void _recursion_integer(int a);
int _print_int_binary(va_list args);
void _recursion_int_binary(int a);
int _validate_char(char _type);

#endif