#include "main.h"

/**
 * print_int -afficher int
 * @l: ma liste 
 * @f: pointeur
 * Return: int of char printed
 */
int print_int(va_list l, flags_t *f)
{
	int m = va_arg(l, int);
	int rs = count_digit(m);

	if (f->space == 1 && f->plus == 0 && m >= 0)
		rs += _putchar(' ');
	if (f->plus == 1 && m >= 0)
		rs += _putchar('+');
	if (m <= 0)
		rs++;
	print_number(m);
	return (rs);
}

/**
 * print_unsigned - affiche unsigned number
 * @l:  ma liste
 * @f: pointeur 
 * Return: int  of char printed
 */
int print_unsigned(va_list l, flags_t *f)
{
	unsigned int y = va_arg(l, unsigned int);
	char *st = convert(y, 10, 0);

	(void)f;
	return (_puts(st));
}

/**
 * print_number - affiche number
 * @m: integer to be printed
 */

void print_number(int m)
{
	unsigned int d;

	if (m < 0)
	{
		_putchar('-');
		d = -m;
	}
	else
		d = m;

	if (d / 10)
		print_number(d / 10);
	_putchar((d% 10) + '0');
}

/**
 * count_digit - compteur de digit
 * @i: integer
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int b = 0;
	unsigned int y;

	if (i < 0)
		y = i * -1;
	else
		y = i;
	while (y != 0)
	{
		y /= 10;
		b++;
	}
	return (b);
}
