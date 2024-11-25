#include <stdarg.h>

/**
 * _printf - function that produces output according to a format
 * @format: is a character string. The format string is composed
 *          of zero or more directives
 *
 * Return: Always 0
 */



int _printf(const char *format, ...)
{

va_list args;
va_start(args,format);
  
type_specifier_t type_specifier[] = {
{'c', _print_char},
{'s', _print_string},
{'i', _print_int},
{'d', _print_decimal},
{'\0', NULL}
};
}
