#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _print_char- prints a char argument.
 * @args: argument.
 * Return: nothing.
 **/

void _print_char(va_list args, int *taille)
{
	_putchar(va_arg(args, int));
	*taille = *taille + 1;
}

/**
 * _print_string- prints a string.
 * @args: argument.
 * Return: nothing.
 **/

void _print_string(va_list args, int *taille)
{
int i;
char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0;  str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		*taille = *taille + 1;
	}
}

/**
 * _print_int- prints a int argument.
 * @args: argument.
 * Return: nothing.
 **/

void _print_int(va_list args, int *taille)
{
	int value = va_arg(args, int);
	int digit[10];
	int count = 0, i = 0;

	if (value < 0)
	{
		_putchar('-');
		*taille = *taille + 1;
		value = -value;
	}
	if (value == 0)
	{
		_putchar('0');
		*taille = *taille + 1;
		return;
	}
	while (value > 0)
	{
		digit[count++] = value % 10;
		value /= 10;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(digit[i] + '0');
		*taille = *taille + 1;
	}
}

/**
* _printf - print anything.
* @format: string composed of directives.
* Return: number of characters printed.
*/

int _printf(const char *format, ...)
{
char specifier;
int compteur, truespecifier;
va_list args;
int taille = 0;
type_specifier_t type_specifier[] = {
{'c', _print_char}, {'s', _print_string}, {'i', _print_int},
{'d', _print_int}, {'\0', NULL} };

va_start(args, format);
for (; *format != '\0'; format++)
{
if (*format == '\\' && *(++format))
{
_putchar(*format == 'n' ? '\n' : *format == 't' ? '\t' : *format);
taille = taille + 1;
}
else if (*format == '%')
{
format++;
specifier = *format, compteur  = 0, truespecifier = 0;
for (; type_specifier[compteur].specifier != '\0'; compteur++)
{
if (type_specifier[compteur].specifier == specifier)
{
type_specifier[compteur].print_func(args, &taille);
truespecifier = 1;
break;
}
}
if (truespecifier != 1)
{
_putchar('%');
_putchar(specifier);
taille  = taille + 2;
}
}
else
{
_putchar(*format);
taille = taille + 1;
}
}
va_end(args);
return (taille);
}
