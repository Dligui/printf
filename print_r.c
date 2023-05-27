#include "main.h"

/**
 * print_bigS-just afficher lya hhhhhhhhhhhhhhhh hhhhhhhhhhhhhhhhhh
 * (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the ASCII code
 * value in hexadecimal (upper case - always 2 characters)
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * Return: int hhhhhhhhhhhhhhhhh
 */
int print_bigS(va_list l, flags_t *f)
{
	int j, cnt = 0;
	char *rs;
	char *c = va_arg(l, char *);

	(void)f;
	if (!c)
		return (_puts("(null)"));

	for (j = 0; c[j]; j++)
	{
		if (c[j] > 0 && (c[j] < 32 || c[j] >= 127))
		{
			_puts("\\x");
			cnt += 2;
			rs = convert(c[j], 16, 0);
			if (!rs[1])
				cnt += _putchar('0');
			cnt += _puts(rs);
		}
		else
			cnt += _putchar(c[j]);
	}
	return (cnt);
}

/**
 * print_rev - just print
 * @l: arg
 * @f: pointeur
 * Return: length of the printed string
 */

int print_rev(va_list l, flags_t *f)
{
	int j = 0, z;
	char *c = va_arg(l, char *);

	(void)f;
	if (!c)
		c = "(null)";

	while (c[j])
		j++;

	for (z = j - 1; z >= 0; z--)
		_putchar(c[z]);

	return (j);
}

/**
 * print_rot13 - print
 * @l: list of arguments jjjjjjjjjjjjjjjjjjjj
 * @f: pointer to the struct flags that determines
 * Return: length of the printed string
 */

int print_rot13(va_list l, flags_t *f)
{
	int j, z;
	char rt13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char RT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *c = va_arg(l, char *);

	(void)f;
	for (z = 0; c[z]; z++)
	{
		if (c[z] < 'A' || (c[z] > 'Z' && c[z] < 'a') || c[z] > 'z')
			_putchar(c[z]);
		else
		{
			for (j = 0; j <= 52; j++)
			{
				if (c[z] == rt13[j])
					_putchar(RT13[j]);
			}
		}
	}

	return (z);
}

/**
 * print_percent -aff  a percent
 * @l: va_list arguments hhhhhhhhhhhhhhhh
 * @f: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */
int print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}
