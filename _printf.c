#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * _print_char- prints a char argument.
 * @args: argument.
 * Return: nothing.
 **/

void _print_char(va_list args);
{
	_putchar("%c", va_arg(args, int));
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
	while (value > 0)
	{
		digit[count++] = value % 10;
		value /= 10;
	}
	if (count == 0)
	{
		digit[count++] = 0;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(digit[i] + '0');
	}
}

/**
* _printf: print anything.
* @format: string composed of directives.
* Return: number of characters printed.
*/

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args,format);
}
