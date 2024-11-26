#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _print_int(va_list args, int *taille);
void _print_char(va_list args, int *taille);
void _print_string(va_list args, int *taille);


/**
* struct type_specifier - structure which attribute a function to a type.
* @specifier: character which represent the type.
* @print_func: pointer to a function.
**/

typedef struct type_specifier
{
char specifier;
  void (*print_func)(va_list args, int *taille);
} type_specifier_t;

#endif
