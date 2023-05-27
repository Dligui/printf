#include "main.h"

/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @c: charac kiholldi lina specfic charc f had fanction
 * Description: this code created by sara ana ghizlane hhhhhh
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * Return: maso9akomch ana ndir li bghti
 */
int (*get_print(char c))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
		};
	int flg = 14;

	register int j;

	for (j = 0; j < flg; i++)
		if (func_arr[i].c == c)
			return (func_arr[i].f);
	return (NULL);
}
