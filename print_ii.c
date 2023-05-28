#include "main.h"

/**
 * print_iint - printi lina an integer
 * @l: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: un nmbre de char printed
 */
int print_iint(va_list l, flags_t *f)
{
	int n = va_arg(l, int);
	int rs = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		rs += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		rs += _putchar('+');
	if (n <= 0)
		rs++;
	print_number(n);
	return (rs);
}

/**
 * print_unsigned - printi lina an unsigned integer
 * @l: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_unsiigned(va_list l, flags_t *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *st = cnvert(u, 10, 0);

	(void)f;
	return (_puts(st));
}

/**
 * print_number - hadi is a helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 */
void priint_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * count_digit - returni the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 */
int count_diigit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
