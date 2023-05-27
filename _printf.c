#include "main.h"
/**
 * _printf - task lwala ta3 printf
 * @format: cntante inpute pointer
 * Return: maso9akch
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *j;
	va_list arg;
	flags_t flg = {0, 0, 0};

	register int cnt = 0;

	va_start(arg, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (j = format; *j; j++)
	{
		if (*j == '%')
		{
			j++;
			if (*j == '%')
			{
				cnt += _putchar('%');
				continue;
			}
			while (get_flag(*j, &flg))
				j++;
			pfunc = get_print(*j);
			cnt += (pfunc)
				? pfunc(arg, &flg)
				: _printf("%%%c", *j);
		} else
			cnt += _putchar(*j);
	}
	_putchar(-1);
	va_end(arg);
	return (cnt);
}
