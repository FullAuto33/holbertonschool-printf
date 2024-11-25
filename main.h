#ifndef MAIN_H
#define MAIN_H
/* Define file main.h */


/* Importation de bibliotheque necessaire */
#include <stdarg.h>

/* On defini la structure */
typedef struct formats
{
char c;
void (*f)(va_list);
}format;

/* On defini le prototype */
int _printf(const char *format, ...);

#endif
