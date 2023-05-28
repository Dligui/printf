#include "main.h"

/**
 * print_strng - loops string to do string functio,
 * @l: va_list arguments from _printf
 * @f: struct pointer of this fnction hhh
 * Return: maso9kach a kimba hbibi
 */
int print_strng(va_list l, flags_t *f)
{
	char *c = va_arg(l, char *);

	(void)f;

	if (!c)
		c = "(null)";
	return (_puts(c));
}

/**
 * print_char - prints dyal  character
 * @l: va_list arguments dyal fonction _printf
 * @f: pointer struct from this argament hhh
 * Return: maso9kach a sahbi hada ma kan
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
