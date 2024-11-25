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
