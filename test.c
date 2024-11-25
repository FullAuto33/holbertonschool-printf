#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdarg.h>

void _print_int(int value)
{
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

int main() {
    // Tester avec différentes valeurs
    _print_int(12345);    // Affiche 12345
    _putchar('\n');
    
    _print_int(-98765);   // Affiche -98765
    _putchar('\n');
    
    _print_int(0);        // Affiche 0
    _putchar('\n');
    
    _print_int(1);        // Affiche 1
    _putchar('\n');
    
    _print_int(-1);       // Affiche -1
    _putchar('\n');
    
    _print_int(100000);   // Affiche 100000
    _putchar('\n');
    
    _print_int(-247483648); // Test pour INT_MIN (-2^31)
    _putchar('\n');
    
    return 0;
}
