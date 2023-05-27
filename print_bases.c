#include "main.h"

/**
 * print_hex - affiche hexa decimal
 * @l: lista
 * @f: pointeur
 * number into the correct base and returns it as a string
 * Return: int
 */

int print_hex(va_list l, flags_t *f)
{
	unsigned int nm = va_arg(l, unsigned int);
	char *st = convert(nm, 16, 1);
	int cnt = 0;

	if (f->hash == 1 && st[0] != '0')
		cnt += _puts("0x");
	cnt += _puts(st);
	return (cnt);
}

/**
 * print_hex_big -affihage hex big
 * @l: va_list
 * @f: pointeur
 * Return: int
 */

int print_hex_big(va_list l, flags_t *f)
{
	unsigned int nm = va_arg(l, unsigned int);
	char *st = convert(nm, 16, 0);
	int cnt = 0;

	if (f->hash == 1 && st[0] != '0')
		cnt += _puts("0X");
	cnt += _puts(st);
	return (cnt);
}

/**
 * print_binary - affiche  a number in base 2
 * @l: va_lista 
 * @f: pointeur
 * Return: int 
 */

int print_binary(va_list l, flags_t *f)
{
	unsigned int nm = va_arg(l, unsigned int);
	char *st = convert(nm, 2, 0);

	(void)f;
	return (_puts(st));
}

/**
 * print_octal - affichi  number in base 8
 * @l: va_lista
 * @f: pointeur
 * Return: int  
 */
int print_octal(va_list l, flags_t *f)
{
	unsigned int nm = va_arg(l, unsigned int);
	char *st = convert(nm, 8, 0);
	int cnt = 0;

	if (f->hash == 1 && st[0] != '0')
		cnt += _putchar('0');
	cnt += _puts(st);
	return (cnt);
}
