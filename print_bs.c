#include "main.h"
/**
 * print_hex -je ss pas exactement qu est ce qu il fait
 * in lowercase
 * @l: va_list des parametres de _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Description: the function calls cnvrt() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: le nombre of char printii
 */
int print_hex(va_list l, flags_t *f)
{
	unsigned int nm = va_arg(l, unsigned int);
	char *st = cnvert(nm, 16, 1);
	int cnt = 0;

	if (f->hash == 1 && st[0] != '0')
		cnt += _puts("0x");
	cnt += _puts(st);
	return (cnt);
}

/**
 * print_hex_big - printi le nombre en hexadecimal base,
 * in uppercase
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_hex_big(va_list l, flags_t *f)
{
	unsigned int nm = va_arg(l, unsigned int);
	char *st = cnvert(nm, 16, 0);
	int cnt = 0;

	if (f->hash == 1 && st[0] != '0')
		cnt += _puts("0X");
	cnt += _puts(st);
	return (cnt);
}

/**
 * print_binary - printi le nomnre dans la base 2
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: le nombre de caract est affiché
 */
int print_binary(va_list l, flags_t *f)
{
	unsigned int nm = va_arg(l, unsigned int);
	char *st = cnvert(nm, 2, 0);

	(void)f;
	return (_puts(st));
}

/**
 * print_octal - printi le nombre dans base octale 8
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_octal(va_list l, flags_t *f)
{
	unsigned int nm = va_arg(l, unsigned int);
	char *st = cnvert(nm, 8, 0);
	int cnt = 0;

	if (f->hash == 1 && st[0] != '0')
		cnt += _putchar('0');
	cnt += _puts(st);
	return (cnt);
}
