#include "main.h"

/**
 * print_address - prints address for this project printf
 * @l: va_list arguments dyal had  _printf
 * @f: pointer dyal struct arguments a zeen
 * Return: moso9akch hhhhhh kimba
 */
int print_address(va_list l, flags_t *f)
{
	char *st;
	unsigned long int j = va_arg(l, unsigned long int);

	register int cnt = 0;

	(void)f;

	if (!j)
		return (_puts("(nil)"));
	st = convert(j, 16, 1);
	cnt += _puts("0x");
	cnt += _puts(st);
	return (cnt);
}
