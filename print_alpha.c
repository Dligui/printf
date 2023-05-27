#include "main.h"

/**
 * print_string - affiche string
 * @l: list
 * @f: pointeur 
 * Return: number of char printed
 */

int print_string(va_list l, flags_t *f)
{
	char *c = va_arg(l, char *);

	(void)f;

	if (!c)
		c = "(null)";
	return (_puts(c));
}

/**
 * print_char - affichi  a character
 * @l: lista 
 * @f: pointurr 
 * Return: number of charest afichi
 */

int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
