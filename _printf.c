#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _print_char- prints a char argument.
 * @args: argument.
 * Return: nothing.
 **/

void _print_char(va_list args)
{
	_putchar(va_arg(args, int));
}

/**
 * _print_string- prints a string.
 * @args: argument.
 * Return: nothing.
 **/

void _print_string(va_list args)
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
	}
}

/**
 * _print_int- prints a int argument.
 * @args: argument.
 * Return: nothing.
 **/

void _print_int(va_list args)
{
	int value = va_arg(args, int);
	int digit[10];
	int count = 0, i = 0;

	if (value < 0)
	{
		_putchar('-');
		value = -value;
	}
	if (value == 0)
	{
		_putchar('0');
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
type_specifier_t type_specifier[] = {
{'c', _print_char}, {'s', _print_string}, {'i', _print_int},
{'d', _print_int}, {'\0', NULL} };

va_start(args, format);
	for (; *format != '\0'; format++)
	{
		if (*format == '\\' && *(++format))
			_putchar(*format == 'n' ? '\n' : *format == 't' ? '\t' : *format);
		else if (*format == '%')
		{
			format++;
			specifier = *format, compteur  = 0, truespecifier = 0;
			for (; type_specifier[compteur].specifier != '\0'; compteur++)
			{
				if (type_specifier[compteur].specifier == specifier)
				{
					type_specifier[compteur].print_func(args);
					truespecifier = 1;
					break;
				}
			}
			if (truespecifier != 1)
			{
				_putchar('%');
				_putchar(specifier);
			}
		}
			else
				_putchar(*format);
	}
	va_end(args);
	return (1);
}
