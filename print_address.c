#include "main.h"

/**
 * print_address - adresses affichage
 * @l: arg list
 * @f: pointeur 
 * Return: number of char printed
 */

int print_address(va_list l, flags_t *f)
{
	char *st;
	unsigned long int pp = va_arg(l, unsigned long int);

	register int cnt = 0;

	(void)f;

	if (!pp)
		return (_puts("(nil)"));
	st = convert(pp, 16, 1);
	cnt += _puts("0x");
	cnt += _puts(st);
	return (cnt);
}
