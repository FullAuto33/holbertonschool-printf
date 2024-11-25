#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _print_int(int value);


/**
* struct type_specifier - structure which attribute a function to a type.
* @specifier: character which represent the type.
* @print_func: pointer to a function.
**/

typedef struct type_specifier
{
char specifier;
void (*print_func)(va_list args);
} type_specifier_t;

void _print_char(va_list args);
void _print_string(va_list args);

#endif
