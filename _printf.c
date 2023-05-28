#include "main.h"
/**
 * _printf - fonction katpranty
 * @format: char constant pointer
 * Return: maso9akch
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arg;
	flags_t flg = {0, 0, 0};

	register int cnt = 0;

	va_start(arg, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				cnt += _putchar('%');
				continue;
			}
			while (gt_flag(*p, &flg))
				p++;
			pfunc = gt_print(*p);
			cnt += (pfunc)
				? pfunc(arg, &flg)
				: _printf("%%%c", *p);
		} else
			cnt += _putchar(*p);
	}
	_putchar(-1);
	va_end(arg);
	return (cnt);
}
