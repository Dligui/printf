#include "main.h"

/**
 * get_print - function get print for print pointer hhhhhhhhh HHHHHHHHHHHH
 * @s: character hold argmnt for this function
 * Return: maso9kach wakha atraj3 lina pointer ms mashoglach
 */
int (*get_print(char s))(va_list, flags_t *)
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

	for (j = 0; i < flg; j++)
		if (func_arr[i].c == s)
			return (func_arr[j].f);
	return (NULL);
}
