#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * _printf - function that produces output according to a format
 * @format: is a character string. The format string is composed
 *          of zero or more directives
 *
 * Return: number of element
 */



int _printf(const char *format, ...)
{

va_list args;
va_start(args,format);
  
type_specifier_t type_specifier[] = {
{'c', _print_char},
{'s', _print_string},
{'i', _print_int},
{'d', _print_int},
{'\0', NULL}
};

while (*format != '\0')
{
if (*format == '\\')
{
format++;
if (*format == 'n')
{
putchar('\n');
}
else if (*format == 't')
{
putchar('\t');
} 
else
{
putchar(*format);
}
}
else if (*format == '%')
{
format++;
char specifier = *format;
int compteur  = 0;
int truespecifier = 0;

for (; type_specifier[compteur].specifier != '\0'; compteur++)
{
if (type_specifier[compteur].specifier == specifier)
{
type_specifier[compteur].print_func(args);
truespecifier = 1;
}
}
if (truespecifier != 1)
{
_putchar('%');
_putchar(specifier);
}
}
else
{
putchar(*format);
}
format++;
}
va_end(args);
}
