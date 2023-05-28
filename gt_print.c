#include "main.h"

/**
 * gt_print - get hhhhh hhhhh hhhhh hhhh print hhhhhhhhhhhh
 * @s: character that holds hhhhhhhhh hhhhhh hh
 * Description: function loop b case system
 * Return: maso9akch a hhh zzzz zzzz zzzz zzzzzzzz
 */
int (*gt_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'i', print_iint},
		{'s', print_strng},
		{'c', print_char},
		{'d', print_iint},
		{'u', print_unsiigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_bnary},
		{'o', print_octl},
		{'R', print_rt13},
		{'r', print_rv},
		{'S', print_bgS},
		{'p', print_adress},
		{'%', print_prcent}
		};
	int flg = 14;

	register int j;

	for (j = 0; j < flg; j++)
		if (func_arr[j].c == s)
			return (func_arr[j].f);
	return (NULL);
}
